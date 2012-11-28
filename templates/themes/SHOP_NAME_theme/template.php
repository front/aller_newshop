<?php

/**
 * Implements hook_process_html().
 */
function {SHOP_NAME}_theme_preprocess_html(&$vars) {
  // IE6-7 styles.
  drupal_add_css(
    drupal_get_path('theme', '{SHOP_NAME}_theme') . '/styles/ie.css',
    array(
      'group' => CSS_THEME,
      'weight' => 20,
      'browsers' => array('IE' => 'lt IE 8', '!IE' => FALSE),
      'preprocess' => FALSE,
    )
  );
}

/**
 * Implements hook_preprocess_panels_pane().
 */
function {SHOP_NAME}_theme_preprocess_panels_pane(&$vars) {
  if (!empty($vars['title'])) {
    $vars['title'] = '<span>' . $vars['title'] . '</span>';
  }

  // Add classes to view panes.
  if ($vars['pane']->type == 'views_panes') {

    // Add custom css classes to group them together.
    switch ($vars['pane']->panel) {
      case 'top_left':
        $vars['classes_array'][] = 'box-wrapper';
        $vars['classes_array'][] = 'main-box-wrapper';
        // kpr($vars);
        break;

      case 'top_right':
        $vars['classes_array'][] = 'box-wrapper';
        $vars['classes_array'][] = 'sidebar-box-wrapper';
        break;

      case 'middle':
        $vars['classes_array'][] = 'box-wrapper';
        $vars['classes_array'][] = 'main-box-wrapper';
    }
  }
}

/**
 * Implements hook_preprocess_views_view().
 */
function {SHOP_NAME}_theme_preprocess_views_view(&$variables, $hook) {
  // Add style class to view.
  $style = $variables['view']->style_plugin->definition['theme'];
  $variables['classes_array'][] = drupal_clean_css_identifier($style);
}

/**
 * Implements hook_process_page().
 */
function {SHOP_NAME}_theme_process_page(&$vars) {
  $vars['front_page'] = url('{URL_MACHINE_NAME}', array('absolute' => TRUE));
}

/**
 * Implements hook_preprocess_block().
 */
function {SHOP_NAME}_theme_preprocess_block(&$vars) {
  if ($vars['block']->region == 'footer') {
    static $footer_count = 1;

    // Add TBS classes to footer regions.
    $vars['classes_array'][] = 'span3';
    if ($footer_count == 5) {
      $vars['classes_array'][] = 'offset5';
    }

    $vars['classes_array'][] = 'block-' . $footer_count++;
  }
}

/**
 * Implements hook_field_attach_view_alter().
 */
function {SHOP_NAME}_theme_field_attach_view_alter(&$output, $context) {
  foreach (element_children($output) as $field_name) {
    $element = &$output[$field_name];

    if ($field_name == 'field_badge') {
      $value = $element['#object']->field_badge['und'][0]['value'];
      $class = 'badge-' . drupal_clean_css_identifier($value);

      if ($element['#view_mode'] == 'teaser') {
        $link = 'node/' . $element['#object']->nid;
        $opts = array('attributes' => array('class' => $class));
        $element[0]['#markup'] = l($element[0]['#markup'], $link, $opts);
      }
      else {
        $element[0]['#markup'] = '<span class="' . $class . '">' . $element[0]['#markup'] . '</span>';
      }
    }
  }
}
