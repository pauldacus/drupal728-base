<?php
/**
 * @file
 * drupal_7_28_overriden_omega4_theme_panels_panel_everywhere_starter.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupal_7_28_overriden_omega4_theme_panels_panel_everywhere_starter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupal_7_28_overriden_omega4_theme_panels_panel_everywhere_starter_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
