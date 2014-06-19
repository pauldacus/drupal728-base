<?php
/**
 * @file
 * drupal_7_28_overriden_omega4_theme_panels_panel_everywhere_starter.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupal_7_28_overriden_omega4_theme_panels_panel_everywhere_starter_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
