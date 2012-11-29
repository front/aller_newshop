<?php
/**
 * @file
 * {SHOP_NAME}_product_book.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function {SHOP_NAME}_product_book_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-produkter.
  $menus['menu-produkter'] = array(
    'menu_name' => 'menu-produkter',
    'title' => 'Bøker',
    'description' => 'Bøkene vi har i vårt assortement',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bøkene vi har i vårt assortement');
  t('Bøker');


  return $menus;
}
