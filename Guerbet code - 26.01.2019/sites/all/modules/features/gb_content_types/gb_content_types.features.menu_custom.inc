<?php
/**
 * @file
 * gb_content_types.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function gb_content_types_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-social-media-menu.
  $menus['menu-social-media-menu'] = array(
    'menu_name' => 'menu-social-media-menu',
    'title' => 'Social Media menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Social Media menu');

  return $menus;
}
