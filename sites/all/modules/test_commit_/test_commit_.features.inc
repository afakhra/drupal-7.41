<?php
/**
 * @file
 * test_commit_.features.inc
 */

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
