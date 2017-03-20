<?php
/**
 * @file
 * vegchi_content_establishment.features.inc
 */

/**
 * Implements hook_node_info().
 */
function vegchi_content_establishment_node_info() {
  $items = array(
    'establishment' => array(
      'name' => t('Establishment'),
      'base' => 'node_content',
      'description' => t('Bar, restaurant, salon, school, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
