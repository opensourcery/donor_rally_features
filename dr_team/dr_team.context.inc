<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dr_team_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'anonymous_front';
  $context->description = 'Anonymous home page blocks';
  $context->tag = 'Donor Rally';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-anon_manage_team' => array(
          'module' => 'boxes',
          'delta' => 'anon_manage_team',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Anonymous home page blocks');
  t('Donor Rally');

  $export['anonymous_front'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dr_sitewide';
  $context->description = 'Sitewide blocks';
  $context->tag = 'Donor Rally';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dr_base-team_links' => array(
          'module' => 'dr_base',
          'delta' => 'team_links',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Donor Rally');
  t('Sitewide blocks');

  $export['dr_sitewide'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'leaderboard';
  $context->description = 'Donor Rally Leader Board';
  $context->tag = 'Donor Rally';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'leaderboard_top:page_1' => 'leaderboard_top:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'dr_base-site_thermometer' => array(
          'module' => 'dr_base',
          'delta' => 'site_thermometer',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'boxes-dr_base_welcome' => array(
          'module' => 'boxes',
          'delta' => 'dr_base_welcome',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-leaderboard_top_ppc-block_1' => array(
          'module' => 'views',
          'delta' => 'leaderboard_top_ppc-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Donor Rally');
  t('Donor Rally Leader Board');

  $export['leaderboard'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team_page';
  $context->description = 'Team landing pages';
  $context->tag = 'Donor Rally';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'team' => 'team',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-team_page_common' => array(
          'module' => 'boxes',
          'delta' => 'team_page_common',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'dr_base-0' => array(
          'module' => 'dr_base',
          'delta' => 0,
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
        'dr_base-1' => array(
          'module' => 'dr_base',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => 2,
        ),
        'dr_base-3' => array(
          'module' => 'dr_base',
          'delta' => 3,
          'region' => 'sidebar_second',
          'weight' => 3,
        ),
        'dr_base-2' => array(
          'module' => 'dr_base',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => 4,
        ),
        'dr_base-6' => array(
          'module' => 'dr_base',
          'delta' => 6,
          'region' => 'sidebar_second',
          'weight' => 5,
        ),
        'dr_base-7' => array(
          'module' => 'dr_base',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => 6,
        ),
        'views-dr_team_logo-block_1' => array(
          'module' => 'views',
          'delta' => 'dr_team_logo-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-team_information-block_1' => array(
          'module' => 'views',
          'delta' => 'team_information-block_1',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'views-team_blog-block' => array(
          'module' => 'views',
          'delta' => 'team_blog-block',
          'region' => 'content_bottom',
          'weight' => 2,
        ),
        'dr_base-5' => array(
          'module' => 'dr_base',
          'delta' => 5,
          'region' => 'content_bottom',
          'weight' => 3,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'team-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Donor Rally');
  t('Team landing pages');

  $export['team_page'] = $context;
  return $export;
}
