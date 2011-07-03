<?php
/**
 * @file
 * national_central_point_defaults.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function national_central_point_defaults_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
