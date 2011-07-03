<?php
/**
 * @file
 * national_central_point_defaults.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function national_central_point_defaults_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'login';
  $context->description = '';
  $context->tag = 'access-denied';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'access-denied' => 'access-denied',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('access-denied');
  $export['login'] = $context;

  return $export;
}
