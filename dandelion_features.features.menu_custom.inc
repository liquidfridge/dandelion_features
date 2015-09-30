<?php
/**
 * @file
 * dandelion_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function dandelion_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer menu',
    'description' => '',
  );
  // Exported menu: menu-front-menu.
  $menus['menu-front-menu'] = array(
    'menu_name' => 'menu-front-menu',
    'title' => 'Front menu',
    'description' => 'Front page menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer menu');
  t('Front menu');
  t('Front page menu');


  return $menus;
}
