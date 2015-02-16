<?php
/**
 * @file
 * vegchi_content_main_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vegchi_content_main_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'beauty_and_grooming';
  $view->description = 'A list of all vegan-relevant establishments in the database';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Establishments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beauty and Grooming';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_localness' => 'field_localness',
    'field_location' => 'field_location',
    'field_neighborhood' => 'field_neighborhood',
    'field_schtick' => 'field_schtick',
    'field_veganity' => 'field_veganity',
    'field_type' => 'field_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_localness' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-low',
    ),
    'field_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-low',
    ),
    'field_neighborhood' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_schtick' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => 'priority-low',
    ),
    'field_veganity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
    'field_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'responsive' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Localness */
  $handler->display->display_options['fields']['field_localness']['id'] = 'field_localness';
  $handler->display->display_options['fields']['field_localness']['table'] = 'field_data_field_localness';
  $handler->display->display_options['fields']['field_localness']['field'] = 'field_localness';
  $handler->display->display_options['fields']['field_localness']['exclude'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '[field_location-thoroughfare]';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-country' => 'address-hide-country',
    ),
  );
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_location']['separator'] = '<hr />';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['delta_offset'] = '0';
  /* Field: Content: Schtick */
  $handler->display->display_options['fields']['field_schtick']['id'] = 'field_schtick';
  $handler->display->display_options['fields']['field_schtick']['table'] = 'field_data_field_schtick';
  $handler->display->display_options['fields']['field_schtick']['field'] = 'field_schtick';
  $handler->display->display_options['fields']['field_schtick']['delta_offset'] = '0';
  /* Field: Content: Veganity */
  $handler->display->display_options['fields']['field_veganity']['id'] = 'field_veganity';
  $handler->display->display_options['fields']['field_veganity']['table'] = 'field_data_field_veganity';
  $handler->display->display_options['fields']['field_veganity']['field'] = 'field_veganity';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'establishment' => 'establishment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Veganity (field_veganity) */
  $handler->display->display_options['filters']['field_veganity_tid']['id'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['table'] = 'field_data_field_veganity';
  $handler->display->display_options['filters']['field_veganity_tid']['field'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_veganity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['operator_id'] = 'field_veganity_tid_op';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['label'] = 'Veganity';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['operator'] = 'field_veganity_tid_op';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['identifier'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_veganity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_veganity_tid']['vocabulary'] = 'veganity';
  /* Filter criterion: Content: Localness (field_localness) */
  $handler->display->display_options['filters']['field_localness_tid']['id'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['table'] = 'field_data_field_localness';
  $handler->display->display_options['filters']['field_localness_tid']['field'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_localness_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_localness_tid']['expose']['operator_id'] = 'field_localness_tid_op';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['label'] = 'Localness';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['operator'] = 'field_localness_tid_op';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['identifier'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_localness_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_localness_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_localness_tid']['vocabulary'] = 'localness';
  $handler->display->display_options['filters']['field_localness_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['filters']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['filters']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['value'] = '';
  $handler->display->display_options['filters']['field_neighborhood_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_neighborhood_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['operator_id'] = 'field_neighborhood_tid_op';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['label'] = 'Neighborhood';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['operator'] = 'field_neighborhood_tid_op';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['identifier'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_neighborhood_tid']['vocabulary'] = 'neigborhood';
  /* Filter criterion: Content: Schtick (field_schtick) */
  $handler->display->display_options['filters']['field_schtick_tid']['id'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['table'] = 'field_data_field_schtick';
  $handler->display->display_options['filters']['field_schtick_tid']['field'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['value'] = '';
  $handler->display->display_options['filters']['field_schtick_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_schtick_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['operator_id'] = 'field_schtick_tid_op';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['label'] = 'Schtick';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['operator'] = 'field_schtick_tid_op';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['identifier'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_schtick_tid']['vocabulary'] = 'schtick';

  /* Display: Beauty */
  $handler = $view->new_display('page', 'Beauty', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'establishment' => 'establishment',
  );
  /* Filter criterion: Content: Localness (field_localness) */
  $handler->display->display_options['filters']['field_localness_tid']['id'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['table'] = 'field_data_field_localness';
  $handler->display->display_options['filters']['field_localness_tid']['field'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_localness_tid']['expose']['operator_id'] = 'field_localness_tid_op';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['label'] = 'Localness';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['operator'] = 'field_localness_tid_op';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['identifier'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_localness_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_localness_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_localness_tid']['vocabulary'] = 'localness';
  $handler->display->display_options['filters']['field_localness_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['filters']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['filters']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['value'] = '';
  $handler->display->display_options['filters']['field_neighborhood_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['operator_id'] = 'field_neighborhood_tid_op';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['label'] = 'Neighborhood';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['operator'] = 'field_neighborhood_tid_op';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['identifier'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_neighborhood_tid']['vocabulary'] = 'neigborhood';
  /* Filter criterion: Content: Schtick (field_schtick) */
  $handler->display->display_options['filters']['field_schtick_tid']['id'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['table'] = 'field_data_field_schtick';
  $handler->display->display_options['filters']['field_schtick_tid']['field'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['value'] = '';
  $handler->display->display_options['filters']['field_schtick_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['operator_id'] = 'field_schtick_tid_op';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['label'] = 'Schtick';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['operator'] = 'field_schtick_tid_op';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['identifier'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_schtick_tid']['vocabulary'] = 'schtick';
  /* Filter criterion: Content: Veganity (field_veganity) */
  $handler->display->display_options['filters']['field_veganity_tid']['id'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['table'] = 'field_data_field_veganity';
  $handler->display->display_options['filters']['field_veganity_tid']['field'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['operator_id'] = 'field_veganity_tid_op';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['label'] = 'Veganity';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['operator'] = 'field_veganity_tid_op';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['identifier'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_veganity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_veganity_tid']['vocabulary'] = 'veganity';
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    130 => '130',
    8 => '8',
    129 => '129',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'type_of_business';
  $handler->display->display_options['path'] = 'all-things/beauty-and-grooming';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Beauty and Grooming';
  $handler->display->display_options['menu']['description'] = 'Salons, spas, barbers, and vegan personal care';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Food */
  $handler = $view->new_display('page', 'Food', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tasty Treats';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_localness' => 'field_localness',
    'field_location' => 'field_location',
    'field_neighborhood' => 'field_neighborhood',
    'field_schtick' => 'field_schtick',
    'field_veganity' => 'field_veganity',
    'field_type' => 'field_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_localness' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_neighborhood' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_schtick' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_veganity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'establishment' => 'establishment',
  );
  /* Filter criterion: Content: Localness (field_localness) */
  $handler->display->display_options['filters']['field_localness_tid']['id'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['table'] = 'field_data_field_localness';
  $handler->display->display_options['filters']['field_localness_tid']['field'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_localness_tid']['expose']['operator_id'] = 'field_localness_tid_op';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['label'] = 'Localness';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['operator'] = 'field_localness_tid_op';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['identifier'] = 'field_localness_tid';
  $handler->display->display_options['filters']['field_localness_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_localness_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_localness_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_localness_tid']['vocabulary'] = 'localness';
  $handler->display->display_options['filters']['field_localness_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Neighborhood (field_neighborhood) */
  $handler->display->display_options['filters']['field_neighborhood_tid']['id'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['filters']['field_neighborhood_tid']['field'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['value'] = '';
  $handler->display->display_options['filters']['field_neighborhood_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['operator_id'] = 'field_neighborhood_tid_op';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['label'] = 'Neighborhood';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['operator'] = 'field_neighborhood_tid_op';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['identifier'] = 'field_neighborhood_tid';
  $handler->display->display_options['filters']['field_neighborhood_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_neighborhood_tid']['vocabulary'] = 'neigborhood';
  /* Filter criterion: Content: Schtick (field_schtick) */
  $handler->display->display_options['filters']['field_schtick_tid']['id'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['table'] = 'field_data_field_schtick';
  $handler->display->display_options['filters']['field_schtick_tid']['field'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['value'] = '';
  $handler->display->display_options['filters']['field_schtick_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['operator_id'] = 'field_schtick_tid_op';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['label'] = 'Schtick';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['operator'] = 'field_schtick_tid_op';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['identifier'] = 'field_schtick_tid';
  $handler->display->display_options['filters']['field_schtick_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_schtick_tid']['vocabulary'] = 'schtick';
  /* Filter criterion: Content: Veganity (field_veganity) */
  $handler->display->display_options['filters']['field_veganity_tid']['id'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['table'] = 'field_data_field_veganity';
  $handler->display->display_options['filters']['field_veganity_tid']['field'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['operator_id'] = 'field_veganity_tid_op';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['label'] = 'Veganity';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['operator'] = 'field_veganity_tid_op';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['identifier'] = 'field_veganity_tid';
  $handler->display->display_options['filters']['field_veganity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_veganity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_veganity_tid']['vocabulary'] = 'veganity';
  /* Filter criterion: Content: Type (field_type) */
  $handler->display->display_options['filters']['field_type_tid']['id'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_tid']['field'] = 'field_type_tid';
  $handler->display->display_options['filters']['field_type_tid']['value'] = array(
    7 => '7',
    9 => '9',
    108 => '108',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_tid']['vocabulary'] = 'type_of_business';
  $handler->display->display_options['path'] = 'all-things/food';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Food';
  $handler->display->display_options['menu']['description'] = 'Where to get vegan food';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All The Things';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Localness */
  $handler->display->display_options['fields']['field_localness']['id'] = 'field_localness';
  $handler->display->display_options['fields']['field_localness']['table'] = 'field_data_field_localness';
  $handler->display->display_options['fields']['field_localness']['field'] = 'field_localness';
  $handler->display->display_options['fields']['field_localness']['exclude'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '[field_location-thoroughfare]';
  $handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'priority__second';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-country' => 'address-hide-country',
    ),
  );
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_location']['separator'] = '<hr />';
  /* Field: Content: Neighborhood */
  $handler->display->display_options['fields']['field_neighborhood']['id'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['table'] = 'field_data_field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['field'] = 'field_neighborhood';
  $handler->display->display_options['fields']['field_neighborhood']['delta_offset'] = '0';
  /* Field: Content: Schtick */
  $handler->display->display_options['fields']['field_schtick']['id'] = 'field_schtick';
  $handler->display->display_options['fields']['field_schtick']['table'] = 'field_data_field_schtick';
  $handler->display->display_options['fields']['field_schtick']['field'] = 'field_schtick';
  $handler->display->display_options['fields']['field_schtick']['delta_offset'] = '0';
  /* Field: Content: Veganity */
  $handler->display->display_options['fields']['field_veganity']['id'] = 'field_veganity';
  $handler->display->display_options['fields']['field_veganity']['table'] = 'field_data_field_veganity';
  $handler->display->display_options['fields']['field_veganity']['field'] = 'field_veganity';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  $handler->display->display_options['path'] = 'all-things';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All The Things';
  $handler->display->display_options['menu']['description'] = 'This is a list of all the things that we know about.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'All The Things';
  $handler->display->display_options['tab_options']['description'] = 'A list of all the things.';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';
  $export['beauty_and_grooming'] = $view;

  return $export;
}
