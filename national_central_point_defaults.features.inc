<?php
/**
 * @file
 * national_central_point_defaults.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function national_central_point_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
