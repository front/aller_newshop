<?php
/**
 * @file
 * {SHOP_NAME}_product_book.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function {SHOP_NAME}_product_book_taxonomy_default_vocabularies() {
  return array(
    'b_ker' => array(
      'name' => 'Bøker',
      'machine_name' => 'b_ker',
      'description' => 'Topmost book category',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
    'forfattere' => array(
      'name' => 'Forfatter',
      'machine_name' => 'forfattere',
      'description' => 'Clair Irvin',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
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
    'produkter' => array(
      'name' => 'Produkter',
      'machine_name' => 'produkter',
      'description' => 'Produkter hovedkategori',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-7',
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
