<?php
/**
 * @file
 * crf_assessments_batch.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function crf_assessments_batch_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-assessment-field_asst_participating_org.node-assessment-field_asst_participating_org"]["DELETED"] = TRUE;
  $overrides["field.node-assessment-field_organizations.node-assessment-field_organizations"]["DELETED"] = TRUE;

 return $overrides;
}
