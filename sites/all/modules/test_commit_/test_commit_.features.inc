<?php
/**
 * @file
 * test_commit_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_commit__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function test_commit__node_info() {
  $items = array(
    'test_feature_' => array(
      'name' => t('test feature'),
      'base' => 'node_content',
      'description' => t('test feature '),
      'has_title' => '1',
      'title_label' => t('test feature '),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
