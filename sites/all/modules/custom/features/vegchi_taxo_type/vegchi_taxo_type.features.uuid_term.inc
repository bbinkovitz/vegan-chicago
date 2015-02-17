<?php
/**
 * @file
 * vegchi_taxo_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function vegchi_taxo_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Food',
    'description' => 'Prepared food, takeaway, dine-in',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '1f02e3e0-b176-4442-a026-790cb194dba4',
    'vocabulary_machine_name' => 'type_of_business',
  );
  $terms[] = array(
    'name' => 'Coffee shop',
    'description' => 'Place where you can get a pour-over, a pastry, and maybe even buy coffee beans.',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '5eb4f427-6f7f-4ef1-845a-e7d4801b2bbd',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '1f02e3e0-b176-4442-a026-790cb194dba4',
    ),
  );
  $terms[] = array(
    'name' => 'Fashion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '6299c706-ef67-4f9b-9496-5a1ef49fd186',
    'vocabulary_machine_name' => 'type_of_business',
  );
  $terms[] = array(
    'name' => 'Health+Beauty',
    'description' => 'Beauty, hygeine, and external wellness products and services.',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '6a41f702-8246-4b3a-ba1b-54312ca801df',
    'vocabulary_machine_name' => 'type_of_business',
  );
  $terms[] = array(
    'name' => 'Bath and body',
    'description' => 'Soaps, shampoos, lotions, balms, etc.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'aa590499-b2ea-4f14-8093-54e8e72d3342',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '6a41f702-8246-4b3a-ba1b-54312ca801df',
    ),
  );
  $terms[] = array(
    'name' => 'Group',
    'description' => 'A meetup, a jam band, a quilting circle, and an activist cell all count as groups.',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => 'bb77eef2-e6bb-4c0b-acdc-d4cee9512434',
    'vocabulary_machine_name' => 'type_of_business',
  );
  $terms[] = array(
    'name' => 'Ice cream shop',
    'description' => 'Shop that sells primarily ice cream.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'be7db455-22a3-4b5e-88f0-c6f198f2ab31',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '1f02e3e0-b176-4442-a026-790cb194dba4',
    ),
  );
  $terms[] = array(
    'name' => 'Restaurant',
    'description' => 'Place for buying prepared food.',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'dec207d5-2941-49bc-87b4-c2d4d3d1af94',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '1f02e3e0-b176-4442-a026-790cb194dba4',
    ),
  );
  $terms[] = array(
    'name' => 'Salon/spa',
    'description' => 'Where you get pampered and pretty.',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'e5c8bdaf-ea90-45e9-b4b8-945a7c42b82b',
    'vocabulary_machine_name' => 'type_of_business',
  );
  $terms[] = array(
    'name' => 'Shoes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f8eee440-8bbd-4e6b-b0d2-19ac46f2f9dd',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '6299c706-ef67-4f9b-9496-5a1ef49fd186',
    ),
  );
  $terms[] = array(
    'name' => 'Bakery',
    'description' => 'Bread, pastry, desserts, any kind of bakery.',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'fa8722ab-9184-4464-8ec9-7d98d784ef95',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '1f02e3e0-b176-4442-a026-790cb194dba4',
    ),
  );
  $terms[] = array(
    'name' => 'Bar',
    'description' => 'Drink, drink, this town is so great.',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'fbe81b96-aefa-4f7c-8d42-3b0103eb0284',
    'vocabulary_machine_name' => 'type_of_business',
    'parent' => array(
      0 => '1f02e3e0-b176-4442-a026-790cb194dba4',
    ),
  );
  return $terms;
}
