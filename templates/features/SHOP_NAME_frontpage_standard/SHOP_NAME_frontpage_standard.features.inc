<?php
/**
 * @file
 * {SHOP_NAME}_frontpage_standard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function {SHOP_NAME}_frontpage_standard_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function {SHOP_NAME}_frontpage_standard_views_api() {
  return array("version" => "3.0");
}
