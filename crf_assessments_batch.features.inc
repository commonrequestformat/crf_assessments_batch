<?php
/**
 * @file
 * crf_assessments_batch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_assessments_batch_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_assessments_batch_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_field_default_fields_alter().
 */
function crf_assessments_batch_field_default_fields_alter(&$data) {
  if (isset($data['node-assessment-field_asst_participating_org'])) {
    unset($data['node-assessment-field_asst_participating_org']);
  }
  if (isset($data['node-assessment-field_organizations'])) {
    unset($data['node-assessment-field_organizations']);
  }
}

/**
 * Implements hook_node_info().
 */
function crf_assessments_batch_node_info() {
  $items = array(
    'assessments_batch' => array(
      'name' => t('Assessments'),
      'base' => 'node_content',
      'description' => t('A batch of assessments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
