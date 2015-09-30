<?php
/**
 * @file
 * dandelion_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dandelion_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_code-on-github:https://github.com/liquidfridge
  $menu_links['menu-footer-menu_code-on-github:https://github.com/liquidfridge'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://github.com/liquidfridge',
    'router_path' => '',
    'link_title' => 'Code on GitHub',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'icon-github',
        ),
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_code-on-github:https://github.com/liquidfridge',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Code on GitHub');

  return $menu_links;
}
