<?php
/**
 * @file
 * vegchi_taxo_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vegchi_taxo_type_taxonomy_default_vocabularies() {
  return array(
    'type_of_business' => array(
      'name' => 'Type of Business',
      'machine_name' => 'type_of_business',
      'description' => 'Basic business type. Restaurant, salon, animal hospital, whatever.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
