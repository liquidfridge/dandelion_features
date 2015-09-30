<?php
/**
 * @file
 * dandelion_features.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function dandelion_features_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'dandelion_page_body';
  $picture_mapping->machine_name = 'dandelion_page_body';
  $picture_mapping->breakpoint_group = 'phoebe';
  $picture_mapping->mapping = array(
    'breakpoints.theme.phoebe.xxlarge' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_1200',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_2400',
      ),
    ),
    'breakpoints.theme.phoebe.xlarge' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_1000',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_2000',
      ),
    ),
    'breakpoints.theme.phoebe.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_800',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_1600',
      ),
    ),
    'breakpoints.theme.phoebe.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_800',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_1600',
      ),
    ),
    'breakpoints.theme.phoebe.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_400',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 's_800',
      ),
    ),
  );
  $export['dandelion_page_body'] = $picture_mapping;

  return $export;
}
