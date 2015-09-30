<?php
/**
 * @file
 * dandelion_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dandelion_features_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: working group.
  $roles['working group'] = array(
    'name' => 'working group',
    'weight' => 2,
  );

  return $roles;
}
