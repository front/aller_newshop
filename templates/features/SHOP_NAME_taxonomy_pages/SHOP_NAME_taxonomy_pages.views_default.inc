<?php
/**
 * @file
 * {SHOP_NAME}_taxonomy_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function {SHOP_NAME}_taxonomy_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'authored_products';
  $view->description = 'Show products authored by a certain author, on the author taxonomy pages.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Authored products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forfatterens bøker';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'laveste først';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'høyeste først';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'sort' => array(
      'bef_format' => 'bef',
      'combine' => 1,
      'reset' => 0,
      'reset_label' => '',
    ),
    'field_target_audience_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '28';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Relasjon: Innhold: Referenced product */
  $handler->display->display_options['relationships']['field_display_product_product_id']['id'] = 'field_display_product_product_id';
  $handler->display->display_options['relationships']['field_display_product_product_id']['table'] = 'field_data_field_display_product';
  $handler->display->display_options['relationships']['field_display_product_product_id']['field'] = 'field_display_product_product_id';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Alfabetisk';
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Innleggsdato';
  /* Sorteringskriterium: Commerce Product: Pris (commerce_price:amount) */
  $handler->display->display_options['sorts']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['sorts']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['relationship'] = 'field_display_product_product_id';
  $handler->display->display_options['sorts']['commerce_price_amount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['commerce_price_amount']['expose']['label'] = 'Laveste pris';
  /* Contextual filter: Innhold: Forfatter (field_product_author) */
  $handler->display->display_options['arguments']['field_product_author_tid']['id'] = 'field_product_author_tid';
  $handler->display->display_options['arguments']['field_product_author_tid']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['arguments']['field_product_author_tid']['field'] = 'field_product_author_tid';
  $handler->display->display_options['arguments']['field_product_author_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_product_author_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_product_author_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_product_author_tid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_product_author_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_product_author_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_author_tid']['summary_options']['items_per_page'] = '25';
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
  /* Filter criterion: Innhold: Gave for.. (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_value']['id'] = 'field_target_audience_value';
  $handler->display->display_options['filters']['field_target_audience_value']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_value']['field'] = 'field_target_audience_value';
  $handler->display->display_options['filters']['field_target_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['operator_id'] = 'field_target_audience_value_op';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['label'] = 'Gave for...';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['operator'] = 'field_target_audience_value_op';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['identifier'] = 'field_target_audience_value';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_product_author_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Innhold: Forfatter (field_product_author)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['authored_products'] = array(
    t('Master'),
    t('Forfatterens bøker'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('laveste først'),
    t('høyeste først'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('Produkt'),
    t('Alfabetisk'),
    t('Innleggsdato'),
    t('Laveste pris'),
    t('Alle'),
    t('Gave for...'),
    t('Content pane'),
    t('View panes'),
  );
  $export['authored_products'] = $view;

  $view = new view();
  $view->name = 'taxonomy_custom';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'laveste først';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'høyeste først';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'sort' => array(
      'bef_format' => 'bef',
      'combine' => 1,
      'reset' => 0,
      'reset_label' => '',
    ),
    'field_product_category_main_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_product_author_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'field_target_audience_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '28';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relasjon: Innhold: Referenced product */
  $handler->display->display_options['relationships']['field_display_product_product_id']['id'] = 'field_display_product_product_id';
  $handler->display->display_options['relationships']['field_display_product_product_id']['table'] = 'field_data_field_display_product';
  $handler->display->display_options['relationships']['field_display_product_product_id']['field'] = 'field_display_product_product_id';
  /* Sorteringskriterium: Innhold: Klistret */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  $handler->display->display_options['sorts']['sticky']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sticky']['expose']['label'] = 'Klistret';
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Innleggsdato';
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Alfabetisk';
  /* Sorteringskriterium: Commerce Product: Pris (commerce_price:amount) */
  $handler->display->display_options['sorts']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['sorts']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['relationship'] = 'field_display_product_product_id';
  $handler->display->display_options['sorts']['commerce_price_amount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['commerce_price_amount']['expose']['label'] = 'Pris';
  /* Contextual filter: Innhold: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Innhold: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'taxonomy_pane');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Alfabetisk';
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Innleggsdato';
  /* Sorteringskriterium: Commerce Product: Pris (commerce_price:amount) */
  $handler->display->display_options['sorts']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['sorts']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['relationship'] = 'field_display_product_product_id';
  $handler->display->display_options['sorts']['commerce_price_amount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['commerce_price_amount']['expose']['label'] = 'Laveste pris';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Innhold: Hovedkategori (field_product_category_main) */
  $handler->display->display_options['filters']['field_product_category_main_tid']['id'] = 'field_product_category_main_tid';
  $handler->display->display_options['filters']['field_product_category_main_tid']['table'] = 'field_data_field_product_category_main';
  $handler->display->display_options['filters']['field_product_category_main_tid']['field'] = 'field_product_category_main_tid';
  $handler->display->display_options['filters']['field_product_category_main_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_category_main_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_main_tid']['expose']['operator_id'] = 'field_product_category_main_tid_op';
  $handler->display->display_options['filters']['field_product_category_main_tid']['expose']['label'] = 'Hovedkategori (field_product_category_main)';
  $handler->display->display_options['filters']['field_product_category_main_tid']['expose']['operator'] = 'field_product_category_main_tid_op';
  $handler->display->display_options['filters']['field_product_category_main_tid']['expose']['identifier'] = 'field_product_category_main_tid';
  $handler->display->display_options['filters']['field_product_category_main_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_category_main_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_category_main_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_category_main_tid']['vocabulary'] = 'produkter';
  $handler->display->display_options['filters']['field_product_category_main_tid']['error_message'] = FALSE;
  /* Filter criterion: Innhold: Forfatter (field_product_author) */
  $handler->display->display_options['filters']['field_product_author_tid']['id'] = 'field_product_author_tid';
  $handler->display->display_options['filters']['field_product_author_tid']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['filters']['field_product_author_tid']['field'] = 'field_product_author_tid';
  $handler->display->display_options['filters']['field_product_author_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_author_tid']['expose']['operator_id'] = 'field_product_author_tid_op';
  $handler->display->display_options['filters']['field_product_author_tid']['expose']['label'] = 'Forfatter';
  $handler->display->display_options['filters']['field_product_author_tid']['expose']['operator'] = 'field_product_author_tid_op';
  $handler->display->display_options['filters']['field_product_author_tid']['expose']['identifier'] = 'field_product_author_tid';
  $handler->display->display_options['filters']['field_product_author_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_product_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_author_tid']['vocabulary'] = 'forfattere';
  /* Filter criterion: Innhold: Gave for.. (field_target_audience) */
  $handler->display->display_options['filters']['field_target_audience_value']['id'] = 'field_target_audience_value';
  $handler->display->display_options['filters']['field_target_audience_value']['table'] = 'field_data_field_target_audience';
  $handler->display->display_options['filters']['field_target_audience_value']['field'] = 'field_target_audience_value';
  $handler->display->display_options['filters']['field_target_audience_value']['group'] = 1;
  $handler->display->display_options['filters']['field_target_audience_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['operator_id'] = 'field_target_audience_value_op';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['label'] = 'Gave for...';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['operator'] = 'field_target_audience_value_op';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['identifier'] = 'field_target_audience_value';
  $handler->display->display_options['filters']['field_target_audience_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'panel',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Innhold: Has taxonomy term ID (with depth)',
    ),
    'term_node_tid_depth_modifier' => array(
      'type' => 'panel',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Innhold: Has taxonomy term ID depth modifier',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Blokk */
  $handler = $view->new_display('block', 'Blokk', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Forfattere';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: Forfatter */
  $handler->display->display_options['fields']['field_product_author']['id'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['fields']['field_product_author']['field'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author']['label'] = '';
  $handler->display->display_options['fields']['field_product_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_author']['delta_offset'] = '0';
  /* Felt: Innhold: Forfatter */
  $handler->display->display_options['fields']['field_product_author_1']['id'] = 'field_product_author_1';
  $handler->display->display_options['fields']['field_product_author_1']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['fields']['field_product_author_1']['field'] = 'field_product_author';
  $handler->display->display_options['fields']['field_product_author_1']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_product_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_author_1']['separator'] = ', ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Innhold: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Innhold: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Innhold: Publisert eller administrator */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Forfatter (field_product_author) */
  $handler->display->display_options['filters']['field_product_author_tid']['id'] = 'field_product_author_tid';
  $handler->display->display_options['filters']['field_product_author_tid']['table'] = 'field_data_field_product_author';
  $handler->display->display_options['filters']['field_product_author_tid']['field'] = 'field_product_author_tid';
  $handler->display->display_options['filters']['field_product_author_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_product_author_tid']['value'] = '';
  $handler->display->display_options['filters']['field_product_author_tid']['vocabulary'] = 'forfattere';
  $translatables['taxonomy_custom'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('laveste først'),
    t('høyeste først'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('Produkt'),
    t('Klistret'),
    t('Innleggsdato'),
    t('Alfabetisk'),
    t('Pris'),
    t('Alle'),
    t('%1'),
    t('Page'),
    t('Feed'),
    t('Content pane'),
    t('Laveste pris'),
    t('Hovedkategori (field_product_category_main)'),
    t('Forfatter'),
    t('Gave for...'),
    t('View panes'),
    t('Blokk'),
    t('Forfattere'),
  );
  $export['taxonomy_custom'] = $view;

  return $export;
}
