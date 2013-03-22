<?php
/**
 * @file
 * myview.features.inc
 */

/**
 * Implements hook_views_api().
 */
function myview_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myview_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
