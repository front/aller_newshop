<?php
/**
 * @file
 * {SHOP_NAME}_product_book.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function {SHOP_NAME}_product_book_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|produktvisning|default';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '12',
    'children' => array(
      0 => 'field_product_description',
      1 => 'field_info_content',
      2 => 'comments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional info',
      'instance_settings' => array(
        'classes' => 'tab-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional|node|produktvisning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart|node|produktvisning|default';
  $field_group->group_name = 'group_cart';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Price & Cart',
    'weight' => '7',
    'children' => array(
      0 => 'field_display_product',
      1 => 'product:commerce_price',
      2 => 'product:field_product_price_before',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Price & Cart',
      'instance_settings' => array(
        'classes' => 'form-actions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cart|node|produktvisning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|produktvisning|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '2',
    'children' => array(
      0 => 'group_design',
      1 => 'group_product',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Data',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_categories|node|produktvisning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_design|node|produktvisning|form';
  $field_group->group_name = 'group_design';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'label' => 'Design',
    'weight' => '16',
    'children' => array(
      0 => 'field_product_special_css',
      1 => 'field_badge',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_design|node|produktvisning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|commerce_product|publication|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detaljer',
    'weight' => '3',
    'children' => array(
      0 => 'field_product_detail_publisher',
      1 => 'field_product_language',
      2 => 'field_product_detail_year',
      3 => 'field_product_pages',
      4 => 'field_format',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_details|commerce_product|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|produktvisning|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Small details',
    'weight' => '5',
    'children' => array(
      0 => 'product:field_product_detail_publisher',
      1 => 'product:field_product_language',
      2 => 'product:field_product_detail_year',
      3 => 'product:field_product_pages',
      4 => 'product:field_product_isbn',
      5 => 'product:field_format',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Small details',
      'instance_settings' => array(
        'classes' => 'well',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details|node|produktvisning|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_price|node|produktvisning|landingpage_product_teaser';
  $field_group->group_name = 'group_price';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'landingpage_product_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pris',
    'weight' => '4',
    'children' => array(
      0 => 'field_display_product',
      1 => 'product:commerce_price',
      2 => 'product:field_product_price_before',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pris',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_price|node|produktvisning|landingpage_product_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_price|node|produktvisning|teaser';
  $field_group->group_name = 'group_price';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Price',
    'weight' => '4',
    'children' => array(
      0 => 'field_display_product',
      1 => 'product:commerce_price',
      2 => 'product:field_product_price_before',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Price',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_price|node|produktvisning|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_info|commerce_product|publication|form';
  $field_group->group_name = 'group_product_info';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Produkt',
    'weight' => '0',
    'children' => array(
      0 => 'field_product_image',
      1 => 'field_product_isbn',
      2 => 'sku',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_info|commerce_product|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_price|commerce_product|publication|form';
  $field_group->group_name = 'group_product_price';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pris',
    'weight' => '1',
    'children' => array(
      0 => 'commerce_price',
      1 => 'field_product_price_before',
      2 => 'field_product_price_supplier',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_price|commerce_product|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_stock|commerce_product|publication|form';
  $field_group->group_name = 'group_product_stock';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stock',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_stock|commerce_product|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product|node|produktvisning|form';
  $field_group->group_name = 'group_product';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'label' => 'Produkt',
    'weight' => '15',
    'children' => array(
      0 => 'field_product_description',
      1 => 'field_product_author',
      2 => 'field_product_category_main',
      3 => 'field_product_ebook_link',
      4 => 'field_product_sample',
      5 => 'field_teaser',
      6 => 'field_related_product_displays',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product|node|produktvisning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference|node|produktvisning|form';
  $field_group->group_name = 'group_reference';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'produktvisning';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referert produkt',
    'weight' => '6',
    'children' => array(
      0 => 'field_display_product',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reference|node|produktvisning|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_regnskap|commerce_product|publication|form';
  $field_group->group_name = 'group_regnskap';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Regnskap',
    'weight' => '4',
    'children' => array(
      0 => 'field_avdelingskode',
      1 => 'field_kontonummer',
      2 => 'field_utgivelseskode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_regnskap|commerce_product|publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stock|commerce_product|publication|form';
  $field_group->group_name = 'group_stock';
  $field_group->entity_type = 'commerce_product';
  $field_group->bundle = 'publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lager',
    'weight' => '2',
    'children' => array(
      0 => 'field_product_weight',
      1 => 'field_product_dimension',
      2 => 'commerce_stock',
      3 => 'field_product_stock_min',
      4 => 'field_product_stock_warning',
      5 => 'field_product_supplier',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_stock|commerce_product|publication|form'] = $field_group;

  return $export;
}
