<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Columns Stacked'),
  'category' => t('americana'),
  'icon' => 'americana_twocol_stacked.png',
  'theme' => 'americana_twocol_stacked',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
