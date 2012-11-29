<?php
/**
 * @file
 * {SHOP_NAME}_frontpage_standard.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function {SHOP_NAME}_frontpage_standard_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|produktvisning|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'produktvisning';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'dynamic_field_forfatter' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:5:"title";s:9:"formatter";s:28:"taxonomy_term_reference_link";s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;}s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_product_author";}',
        'load_terms' => 1,
      ),
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'h2',
        'fi-cl' => 'muted',
      ),
    ),
    'summary' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:4:"1000";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:30:"node:field_product_description";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'above',
      'format' => 'default',
    ),
    'service_links_displays_group' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'sld_group_image',
    ),
    'field_product_description' => array(
      'ft' => array(
        'lb-col' => TRUE,
      ),
    ),
    'field_info_content' => array(
      'ft' => array(
        'lb-col' => TRUE,
      ),
    ),
    'field_quotes' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'span5',
        'fi' => TRUE,
        'fi-el' => 'blockquote',
        'fi-cl' => 'pull-right',
      ),
    ),
    'product:field_product_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_additional' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_cart' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_details' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['node|produktvisning|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|produktvisning|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'produktvisning';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_display_product' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_product_author' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'p',
        'fi-cl' => 'field-name-field-product-author',
      ),
    ),
    'field_badge' => array(
      'ft' => array(
        'func' => 'theme_field',
      ),
    ),
    'product:commerce_price' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'product:field_product_price_before' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'product:field_product_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['node|produktvisning|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function {SHOP_NAME}_frontpage_standard_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|produktvisning|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'produktvisning';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'product:field_product_image',
        1 => 'field_badge',
        2 => 'title',
        3 => 'field_product_author',
        4 => 'group_price',
        5 => 'product:field_product_price_before',
        6 => 'product:commerce_price',
        7 => 'field_display_product',
      ),
    ),
    'fields' => array(
      'product:field_product_image' => 'ds_content',
      'field_badge' => 'ds_content',
      'title' => 'ds_content',
      'field_product_author' => 'ds_content',
      'group_price' => 'ds_content',
      'product:field_product_price_before' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_display_product' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|produktvisning|teaser'] = $ds_layout;

  return $export;
}
