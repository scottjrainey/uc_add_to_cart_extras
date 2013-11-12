<?php

/**
 * Implements hook_views_data_alter().
 */
function uc_add_to_cart_extras_views_data_alter(&$data) {
  $data['uc_products']['add_to_cart_quantity'] = array(
    'title' => t('Quantity input field'),
    'help' => t('Adds a quantity input field and creates an add to cart field around the view.'),
    'real field' => 'nid',
    'field' => array(
      'handler' => 'uc_add_to_cart_extras_handler_field_quantity',
    ),
  );
}