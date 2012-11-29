<?php
/**
 * @file
 * {SHOP_NAME}_display_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function {SHOP_NAME}_display_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'most_popular_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'Mest kjøpte produkter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relasjon: Commerce Line Item: Ordre ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['label'] = 'Rekkefølge';
  /* Relasjon: Commerce Line item: Referenced product */
  $handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
  /* Relasjon: Commerce Product: Innhold referencing products from field_display_product */
  $handler->display->display_options['relationships']['field_display_product']['id'] = 'field_display_product';
  $handler->display->display_options['relationships']['field_display_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_display_product']['field'] = 'field_display_product';
  $handler->display->display_options['relationships']['field_display_product']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['relationships']['field_display_product']['label'] = 'Node referencing product';
  $handler->display->display_options['relationships']['field_display_product']['required'] = TRUE;
  /* Felt: Commerce Product: Produktbilde */
  $handler->display->display_options['fields']['field_product_image_1']['id'] = 'field_product_image_1';
  $handler->display->display_options['fields']['field_product_image_1']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image_1']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_product_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_product_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image_1']['settings'] = array(
    'image_style' => 'galleryformatter_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image_1']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_product_image_1']['delta_offset'] = '0';
  /* Felt: Commerce Product: Produktbilde */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['field_product_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_image']['group_column'] = 'title';
  $handler->display->display_options['fields']['field_product_image']['delta_offset'] = '0';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_display_product';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Innhold: Forfatter */
  $handler->display->display_options['fields']['field_product_author']['id'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['fields']['field_product_author']['field'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['relationship'] = 'field_display_product';
  $handler->display->display_options['fields']['field_product_author']['label'] = '';
  $handler->display->display_options['fields']['field_product_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_author']['delta_offset'] = '0';
  /* Felt: Commerce Product: Pris */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => 'calculated_sell_price',
  );
  $handler->display->display_options['fields']['commerce_price']['group_column'] = 'entity_id';
  /* Felt: SUM(Commerce Line Item: Ordrelinje ID) */
  $handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
  $handler->display->display_options['fields']['line_item_id']['group_type'] = 'sum';
  $handler->display->display_options['fields']['line_item_id']['exclude'] = TRUE;
  /* Felt: SUM(Commerce Line Item: Antall) */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['group_type'] = 'sum';
  $handler->display->display_options['fields']['quantity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Felt: Commerce Product: Tittel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_product_product_id';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Sorteringskriterium: SUM(Commerce Line Item: Antall) */
  $handler->display->display_options['sorts']['quantity']['id'] = 'quantity';
  $handler->display->display_options['sorts']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['sorts']['quantity']['field'] = 'quantity';
  $handler->display->display_options['sorts']['quantity']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['quantity']['order'] = 'DESC';
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Ordre: Ordrestatus */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'order_id';
  $handler->display->display_options['filters']['status']['value'] = array(
    'pending' => 'pending',
    'completed' => 'completed',
    'processing' => 'processing',
  );

  /* Display: Blokk */
  $handler = $view->new_display('block', 'Blokk', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Bestselgere front';
  $translatables['most_popular_products'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Rekkefølge'),
    t('Produkt'),
    t('Node referencing product'),
    t('Produktbilde'),
    t('Pris'),
    t('Ordrelinje ID'),
    t('Antall'),
    t('.'),
    t(','),
    t('Tittel'),
    t('Blokk'),
    t('Bestselgere front'),
  );
  $export['most_popular_products'] = $view;

  $view = new view();
  $view->name = 'product_display_top_promoted';
  $view->description = 'Shows lists of top promoted items.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product display top promoted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topplisten';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relasjon: Innhold: Referenced product */
  $handler->display->display_options['relationships']['field_display_product_product_id']['id'] = 'field_display_product_product_id';
  $handler->display->display_options['relationships']['field_display_product_product_id']['table'] = 'field_data_field_display_product';
  $handler->display->display_options['relationships']['field_display_product_product_id']['field'] = 'field_display_product_product_id';
  /* Felt: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Felt: Commerce Product: Produktbilde */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['relationship'] = 'field_display_product_product_id';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'mini_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['delta_offset'] = '0';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Felt: Innhold: Forfatter */
  $handler->display->display_options['fields']['field_product_author']['id'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['fields']['field_product_author']['field'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['label'] = '';
  $handler->display->display_options['fields']['field_product_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_author']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_product_author']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_author']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_product_author']['delta_offset'] = '0';
  /* Felt: Commerce Product: Pris */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_display_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Sorteringskriterium: Draggableviews: Vekt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = '{SHOP_NAME}_frontpage_draggable:page_topplisten';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'produktvisning' => 'produktvisning',
  );

  /* Display: Topplisten */
  $handler = $view->new_display('panel_pane', 'Topplisten', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['product_display_top_promoted'] = array(
    t('Master'),
    t('Topplisten'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Produkt'),
    t('View panes'),
  );
  $export['product_display_top_promoted'] = $view;

  $view = new view();
  $view->name = 'sidebar_lists_of_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sidebar lists of books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relasjon: Innhold: Referenced product */
  $handler->display->display_options['relationships']['field_display_product_product_id_1']['id'] = 'field_display_product_product_id_1';
  $handler->display->display_options['relationships']['field_display_product_product_id_1']['table'] = 'field_data_field_display_product';
  $handler->display->display_options['relationships']['field_display_product_product_id_1']['field'] = 'field_display_product_product_id';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Felt: Innhold: Forfatter */
  $handler->display->display_options['fields']['field_product_author']['id'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['fields']['field_product_author']['field'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['label'] = '';
  $handler->display->display_options['fields']['field_product_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_author']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_product_author']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_author']['delta_offset'] = '0';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'produktvisning' => 'produktvisning',
  );

  /* Display: Sidebar list: New */
  $handler = $view->new_display('panel_pane', 'Sidebar list: New', 'new_books');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nyheter';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Commerce Product: Produktbilde */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['relationship'] = 'field_display_product_product_id_1';
  $handler->display->display_options['fields']['field_product_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'mini_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_product_image']['delta_offset'] = '0';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Felt: Innhold: Forfatter */
  $handler->display->display_options['fields']['field_product_author']['id'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['fields']['field_product_author']['field'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['label'] = '';
  $handler->display->display_options['fields']['field_product_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_author']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_product_author']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_product_author']['delta_offset'] = '0';
  /* Felt: Innhold: Lenke */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['text'] = 'Les mer';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterium: Draggableviews: Vekt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = '{SHOP_NAME}_frontpage_draggable:page_nyheter';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Sidebar list: Recommended */
  $handler = $view->new_display('panel_pane', 'Sidebar list: Recommended', 'books_hirating');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Anbefalte';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterium: Draggableviews: Vekt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = '{SHOP_NAME}_frontpage_draggable:page_mestlikt';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $translatables['sidebar_lists_of_books'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Produkt'),
    t('Sidebar list: New'),
    t('Nyheter'),
    t('Les mer'),
    t('View panes'),
    t('Sidebar list: Recommended'),
    t('Anbefalte'),
  );
  $export['sidebar_lists_of_books'] = $view;

  $view = new view();
  $view->name = 'slideshow_secondary';
  $view->description = 'Display a list of all nodes in queue \'Frontpage Banners\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow secondary';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relasjon: Nodequeue: Kø */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'front_page_banners_bottom' => 'front_page_banners_bottom',
    'frontpage_banners' => 0,
  );
  /* Felt: Innhold: Link */
  $handler->display->display_options['fields']['field_banner_link']['id'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['table'] = 'field_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['field'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_link']['type'] = 'link_url';
  /* Felt: Innhold: Banner */
  $handler->display->display_options['fields']['field_slide']['id'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['table'] = 'field_data_field_slide';
  $handler->display->display_options['fields']['field_slide']['field'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['label'] = '';
  $handler->display->display_options['fields']['field_slide']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slide']['alter']['path'] = '[field_banner_link]';
  $handler->display->display_options['fields']['field_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sorteringskriterium: Nodequeue: Posisjon */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Slideshow nede på forsiden */
  $handler = $view->new_display('block', 'Slideshow nede på forsiden', 'block');
  $handler->display->display_options['display_description'] = 'Front page slideshow close to bottom ';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_nivo_slider';
  $handler->display->display_options['style_options']['nivo_version'] = '3.x';
  $handler->display->display_options['style_options']['imagefield_preset'] = '8col';
  $handler->display->display_options['style_options']['style'] = '0';
  $handler->display->display_options['style_options']['effect'] = array(
    'random' => 'random',
  );
  $handler->display->display_options['style_options']['slices'] = '10';
  $handler->display->display_options['style_options']['directionNavHide'] = 'false';
  $handler->display->display_options['style_options']['controlNav'] = 'basic';
  $handler->display->display_options['style_options']['controlNavThumbsField'] = 'field_banner_link';
  $handler->display->display_options['style_options']['controlNavThumbsIC'] = '10col_banner';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'nivo_sliderfields';
  $handler->display->display_options['row_options']['image_field'] = 'field_slide';
  $handler->display->display_options['row_options']['link_field'] = 'field_banner_link';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: Link */
  $handler->display->display_options['fields']['field_banner_link']['id'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['table'] = 'field_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['field'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link']['label'] = '';
  $handler->display->display_options['fields']['field_banner_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_banner_link']['type'] = 'link_plain';
  /* Felt: Read more */
  $handler->display->display_options['fields']['field_banner_link_1']['id'] = 'field_banner_link_1';
  $handler->display->display_options['fields']['field_banner_link_1']['table'] = 'field_data_field_banner_link';
  $handler->display->display_options['fields']['field_banner_link_1']['field'] = 'field_banner_link';
  $handler->display->display_options['fields']['field_banner_link_1']['ui_name'] = 'Read more';
  $handler->display->display_options['fields']['field_banner_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_banner_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link_1']['alter']['text'] = 'Les mer';
  $handler->display->display_options['fields']['field_banner_link_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_link_1']['alter']['path'] = '[field_banner_link_1-url]';
  $handler->display->display_options['fields']['field_banner_link_1']['alter']['link_class'] = 'read-more';
  $handler->display->display_options['fields']['field_banner_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_link_1']['click_sort_column'] = 'url';
  /* Felt: Innhold: Banner */
  $handler->display->display_options['fields']['field_slide']['id'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['table'] = 'field_data_field_slide';
  $handler->display->display_options['fields']['field_slide']['field'] = 'field_slide';
  $handler->display->display_options['fields']['field_slide']['label'] = '';
  $handler->display->display_options['fields']['field_slide']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slide']['alter']['path'] = '[field_banner_link]';
  $handler->display->display_options['fields']['field_slide']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_slide']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide']['settings'] = array(
    'image_style' => '8col',
    'image_link' => '',
  );
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Innhold: Tekst */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_text]
[field_banner_link_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'carousel-caption';
  $handler->display->display_options['block_description'] = 'Banners: Frontpage';
  $translatables['slideshow_secondary'] = array(
    t('Defaults'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('queue'),
    t('Tittel'),
    t('Slideshow nede på forsiden'),
    t('Front page slideshow close to bottom '),
    t('Les mer'),
    t('[field_text]
[field_banner_link_1]'),
    t('Banners: Frontpage'),
  );
  $export['slideshow_secondary'] = $view;

  return $export;
}
