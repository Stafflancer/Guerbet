<?php
/**
 * @file
 * gb_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gb_content_types_node_info() {
  $items = array(
    'event' => array(
      'name' => t('事件'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'homepage' => array(
      'name' => t('主页'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('新闻'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('常规页面'),
      'base' => 'node_content',
      'description' => t('Use <em>Regular pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('伙伴'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product' => array(
      'name' => t('产品'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tiles_section' => array(
      'name' => t('瓷砖部分'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function gb_content_types_paragraphs_info() {
  $items = array(
    'event_section' => array(
      'name' => 'Event section',
      'bundle' => 'event_section',
      'locked' => '1',
    ),
    'one_image_section' => array(
      'name' => '1 image section',
      'bundle' => 'one_image_section',
      'locked' => '1',
    ),
    'partners_section' => array(
      'name' => 'Partners section',
      'bundle' => 'partners_section',
      'locked' => '1',
    ),
    'product_section' => array(
      'name' => 'Product section',
      'bundle' => 'product_section',
      'locked' => '1',
    ),
    'text_section' => array(
      'name' => 'Text Section',
      'bundle' => 'text_section',
      'locked' => '1',
    ),
  );
  return $items;
}
