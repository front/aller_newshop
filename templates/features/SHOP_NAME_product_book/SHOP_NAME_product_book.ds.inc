<?php
/**
 * @file
 * {SHOP_NAME}_product_book.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function {SHOP_NAME}_product_book_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|produktvisning|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'produktvisning';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'dynamic_field_forfatter' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:29:"taxonomy_term_reference_plain";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:25:"node:field_product_author";}',
        'load_terms' => 1,
      ),
    ),
    'summary' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:12:"text_trimmed";s:11:"delta_limit";i:0;s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";b:0;s:18:"formatter_settings";a:1:{s:11:"trim_length";s:3:"300";}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:1;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:30:"node:field_product_description";}',
        'load_terms' => 0,
      ),
    ),
    'node_url' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
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
  );
  $export['node|produktvisning|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|produktvisning|top_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'produktvisning';
  $ds_fieldsetting->view_mode = 'top_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
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
    'product:field_product_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['node|produktvisning|top_list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function {SHOP_NAME}_product_book_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|produktvisning|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'produktvisning';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'product:field_product_image',
        1 => 'field_badge',
      ),
      'right' => array(
        0 => 'service_links_displays_group',
        1 => 'title',
        2 => 'dynamic_field_forfatter',
        3 => 'group_details',
        4 => 'field_display_product',
        5 => 'product:field_product_language',
        6 => 'summary',
        7 => 'product:field_product_pages',
        8 => 'product:commerce_price',
        9 => 'group_cart',
        10 => 'product:field_product_isbn',
        11 => 'product:field_product_price_before',
        12 => 'field_product_sample',
        13 => 'product:field_product_detail_year',
        14 => 'field_product_ebook_link',
        15 => 'field_buy_series',
        16 => 'field_quotes',
        17 => 'product:field_format',
        18 => 'product:field_product_detail_publisher',
      ),
      'footer' => array(
        0 => 'field_product_description',
        1 => 'comments',
        2 => 'field_info_content',
        3 => 'group_additional',
      ),
    ),
    'fields' => array(
      'product:field_product_image' => 'left',
      'field_badge' => 'left',
      'service_links_displays_group' => 'right',
      'title' => 'right',
      'dynamic_field_forfatter' => 'right',
      'group_details' => 'right',
      'field_product_description' => 'footer',
      'field_display_product' => 'right',
      'product:field_product_language' => 'right',
      'summary' => 'right',
      'comments' => 'footer',
      'product:field_product_pages' => 'right',
      'product:commerce_price' => 'right',
      'group_cart' => 'right',
      'field_info_content' => 'footer',
      'product:field_product_isbn' => 'right',
      'product:field_product_price_before' => 'right',
      'field_product_sample' => 'right',
      'product:field_product_detail_year' => 'right',
      'field_product_ebook_link' => 'right',
      'field_buy_series' => 'right',
      'field_quotes' => 'right',
      'group_additional' => 'footer',
      'product:field_format' => 'right',
      'product:field_product_detail_publisher' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'span6' => 'span6',
      ),
      'right' => array(
        'span6' => 'span6',
      ),
    ),
  );
  $export['node|produktvisning|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|produktvisning|landingpage_product_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'produktvisning';
  $ds_layout->view_mode = 'landingpage_product_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_badge',
        1 => 'product:field_product_image',
        2 => 'field_product_author',
        3 => 'title',
        4 => 'group_price',
        5 => 'product:field_product_price_before',
        6 => 'product:commerce_price',
        7 => 'field_display_product',
      ),
    ),
    'fields' => array(
      'field_badge' => 'ds_content',
      'product:field_product_image' => 'ds_content',
      'field_product_author' => 'ds_content',
      'title' => 'ds_content',
      'group_price' => 'ds_content',
      'product:field_product_price_before' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_display_product' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|produktvisning|landingpage_product_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|produktvisning|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'produktvisning';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'product:field_product_image',
        2 => 'node_url',
        3 => 'field_shop',
        4 => 'dynamic_field_forfatter',
        5 => 'summary',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'product:field_product_image' => 'ds_content',
      'node_url' => 'ds_content',
      'field_shop' => 'ds_content',
      'dynamic_field_forfatter' => 'ds_content',
      'summary' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|produktvisning|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|produktvisning|top_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'produktvisning';
  $ds_layout->view_mode = 'top_list';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'product:field_product_image',
      ),
      'right' => array(
        0 => 'title',
        1 => 'field_teaser',
        2 => 'product:commerce_price',
        3 => 'field_display_product',
      ),
    ),
    'fields' => array(
      'product:field_product_image' => 'left',
      'title' => 'right',
      'field_teaser' => 'right',
      'product:commerce_price' => 'right',
      'field_display_product' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|produktvisning|top_list'] = $ds_layout;

  return $export;
}
