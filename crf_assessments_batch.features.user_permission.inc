<?php
/**
 * @file
 * crf_assessments_batch.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_assessments_batch_user_default_permissions() {
  $permissions = array();

  // Exported permission: create assessments_batch content.
  $permissions['create assessments_batch content'] = array(
    'name' => 'create assessments_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
      3 => 'trusted',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any assessment content.
  $permissions['delete any assessment content'] = array(
    'name' => 'delete any assessment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any assessments_batch content.
  $permissions['delete any assessments_batch content'] = array(
    'name' => 'delete any assessments_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own assessments_batch content.
  $permissions['delete own assessments_batch content'] = array(
    'name' => 'delete own assessments_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
      3 => 'trusted',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any assessment content.
  $permissions['edit any assessment content'] = array(
    'name' => 'edit any assessment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any assessments_batch content.
  $permissions['edit any assessments_batch content'] = array(
    'name' => 'edit any assessments_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own assessments_batch content.
  $permissions['edit own assessments_batch content'] = array(
    'name' => 'edit own assessments_batch content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
      3 => 'trusted',
    ),
    'module' => 'node',
  );

  return $permissions;
}
