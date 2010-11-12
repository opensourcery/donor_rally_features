<?php

/**
 * Implementation of hook_default_box().
 */
function dr_team_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'anon_manage_team';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Create and Manage links';
  $box->options = array(
    'body' => '<ul>
  <li><a href="/user/register">Create your team</a></li>
  <li><a href="/user/login">Manage your team</a></li>
</ul>',
    'format' => '1',
  );

  $export['anon_manage_team'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'dr_base_welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Let\'s get started!';
  $box->description = 'Donor Rally Intro Text';
  $box->options = array(
    'body' => '<div id="donor-rally-intro-copy">
You can use this open source application to organize a team of fans to help you raise money for a common cause.

Getting Started

<ol>
  <li>If you didn\'t set a campaign fundraising goal during the install process, <a href="?q=admin/settings/donor-rally">you should do that now</a>.</li>

  <li>Now you\'ll want to contact a group of people that may want to participate in the fundraiser by creating teams that will use personal fundraising pages to help you raise money. They\'ll need to sign up on this site and create a team page. Send them a link to this page and ask them to click the create team button on the top right of the screen. Or you can copy this link yourself and send them directly to the sign-up form.</li>

<li>Before you actually send that blast communication out, you\'ll want to edit this help text box and change it to some language that helps explain your cause to the public. Careful, once you do, this help text will vanish! :)</li>

<li>Once your teams have all created and customized their team pages, you\'ll be ready to get the word out on the world wide web! Remember that as an administrator, you\'re able to create "admin blog posts," which are blog posts that will appear on every team blog on across the system. Use this ability to keep your teams apprised of the fundraising campaign\'s progress, and to remind them of looming deadlines.</li>

<li>Have fun.</li>
</ol>
</div>',
    'format' => '2',
  );

  $export['dr_base_welcome'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'team_page_common';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Team landing page common text';
  $box->options = array(
    'body' => 'This text is common across all team landing pages.',
    'format' => 1,
  );

  $export['team_page_common'] = $box;
  return $export;
}
