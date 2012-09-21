<?php
/**
 * @file
 * crf_assessments_batch.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crf_assessments_batch_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'assessments_batch';
  $view->description = 'Indicator Data for an Indicator Data Batch';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Assessments Batch';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cluster' => 'field_cluster',
    'field_ind_coverage' => 'field_ind_coverage',
    'field_ind_target' => 'field_ind_target',
    'field_ind_date' => 'field_ind_date',
    'field_locations' => 'field_locations',
    'field_ind_def' => 'field_ind_def',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cluster' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_coverage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_def' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Assessments (field_assessments) */
  $handler->display->display_options['relationships']['field_assessments_nid']['id'] = 'field_assessments_nid';
  $handler->display->display_options['relationships']['field_assessments_nid']['table'] = 'field_data_field_assessments';
  $handler->display->display_options['relationships']['field_assessments_nid']['field'] = 'field_assessments_nid';
  $handler->display->display_options['relationships']['field_assessments_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_assessments_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['title_field']['label'] = 'Assessment Title';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_field']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_field']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_field']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = 0;
  /* Field: Content: Geographic Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_locations']['label'] = 'Geographical Area(s) ';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Organization(s) */
  $handler->display->display_options['fields']['field_organizations']['id'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['table'] = 'field_data_field_organizations';
  $handler->display->display_options['fields']['field_organizations']['field'] = 'field_organizations';
  $handler->display->display_options['fields']['field_organizations']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_organizations']['label'] = 'Leading/Coordinating Organizations';
  $handler->display->display_options['fields']['field_organizations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organizations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organizations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organizations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_organizations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organizations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organizations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organizations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organizations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_organizations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organizations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organizations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organizations']['field_api_classes'] = 0;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['label'] = 'Cluster(s)';
  $handler->display->display_options['fields']['field_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Assessment Start Date */
  $handler->display->display_options['fields']['field_asst_start_date']['id'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['table'] = 'field_data_field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['field'] = 'field_asst_start_date';
  $handler->display->display_options['fields']['field_asst_start_date']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_asst_start_date']['field_api_classes'] = 0;
  /* Field: Content: Assessment Status */
  $handler->display->display_options['fields']['field_asst_status']['id'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['table'] = 'field_data_field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['field'] = 'field_asst_status';
  $handler->display->display_options['fields']['field_asst_status']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_asst_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_status']['field_api_classes'] = 0;
  /* Field: Content: Assessment Report */
  $handler->display->display_options['fields']['field_asst_report']['id'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['table'] = 'field_data_field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['field'] = 'field_asst_report';
  $handler->display->display_options['fields']['field_asst_report']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_asst_report']['label'] = 'Report';
  $handler->display->display_options['fields']['field_asst_report']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_report']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_report']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_asst_report']['field_api_classes'] = 0;
  /* Field: Content: Assessment Questionnaire */
  $handler->display->display_options['fields']['field_asst_questionnaire']['id'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['table'] = 'field_data_field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['field'] = 'field_asst_questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_asst_questionnaire']['label'] = 'Questionnaire';
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_questionnaire']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_questionnaire']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_asst_questionnaire']['field_api_classes'] = 0;
  /* Field: Content: Assessment Data */
  $handler->display->display_options['fields']['field_asst_data']['id'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['table'] = 'field_data_field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['field'] = 'field_asst_data';
  $handler->display->display_options['fields']['field_asst_data']['relationship'] = 'field_assessments_nid';
  $handler->display->display_options['fields']['field_asst_data']['label'] = 'Data';
  $handler->display->display_options['fields']['field_asst_data']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asst_data']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asst_data']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_asst_data']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Node UUID */
  $handler->display->display_options['arguments']['uuid']['id'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['table'] = 'node';
  $handler->display->display_options['arguments']['uuid']['field'] = 'uuid';
  $handler->display->display_options['arguments']['uuid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uuid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uuid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['uuid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uuid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uuid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uuid']['glossary'] = 0;
  $handler->display->display_options['arguments']['uuid']['limit'] = '0';
  $handler->display->display_options['arguments']['uuid']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['uuid']['break_phrase'] = 0;
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
    'assessments_batch' => 'assessments_batch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Geographic Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Geographic Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;

  /* Display: Table */
  $handler = $view->new_display('block', 'Table', 'table');

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_data_overlay');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_locations',
    'other_lon' => 'field_locations',
    'wkt' => 'field_location',
    'other_top' => 'field_ind_date',
    'other_right' => 'field_ind_date',
    'other_bottom' => 'field_ind_date',
    'other_left' => 'field_ind_date',
    'name_field' => 'field_locations',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Map */
  $handler = $view->new_display('block', 'Map', 'map');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'indicator_data_batch';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['assessments_batch'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('field_assessments'),
    t('Assessment Title'),
    t('Geographical Area(s) '),
    t('Leading/Coordinating Organizations'),
    t('Cluster(s)'),
    t('Assessment Start Date'),
    t('Assessment Status'),
    t('Report'),
    t('Questionnaire'),
    t('Data'),
    t('All'),
    t('Geographic Location'),
    t('Table'),
    t('OpenLayers Data Overlay'),
    t('Map'),
  );
  $export['assessments_batch'] = $view;

  return $export;
}
