<?php
/**
 * @file
 * getopenoutreach_panels_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function getopenoutreach_panels_settings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'Front page panel that uses mini panels for displaying views content panes.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'front-page',
    'css' => 'div.radix-layouts-footer div.panel-pane {
  margin-top: 3em;
}',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_sutro';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'pane_style' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
          'jumbotron' => 0,
          'well' => 0,
        ),
      ),
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'header' => NULL,
      'footer' => NULL,
    ),
    'style' => 'kalacustomize',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c0111ac5-9e5b-428a-9cc6-32ec373587eb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-330210f1-27b7-4753-8e31-5dff8a2c6469';
    $pane->panel = 'column1';
    $pane->type = 'views';
    $pane->subtype = 'article';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '330210f1-27b7-4753-8e31-5dff8a2c6469';
    $display->content['new-330210f1-27b7-4753-8e31-5dff8a2c6469'] = $pane;
    $display->panels['column1'][0] = 'new-330210f1-27b7-4753-8e31-5dff8a2c6469';
    $pane = new stdClass();
    $pane->pid = 'new-83bb7725-d215-43dd-9c50-7691283557ae';
    $pane->panel = 'column2';
    $pane->type = 'views';
    $pane->subtype = 'blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '83bb7725-d215-43dd-9c50-7691283557ae';
    $display->content['new-83bb7725-d215-43dd-9c50-7691283557ae'] = $pane;
    $display->panels['column2'][0] = 'new-83bb7725-d215-43dd-9c50-7691283557ae';
    $pane = new stdClass();
    $pane->pid = 'new-a426c09d-41aa-4d37-b176-cf63e18b5d3e';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'follow-site';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a426c09d-41aa-4d37-b176-cf63e18b5d3e';
    $display->content['new-a426c09d-41aa-4d37-b176-cf63e18b5d3e'] = $pane;
    $display->panels['footer'][0] = 'new-a426c09d-41aa-4d37-b176-cf63e18b5d3e';
    $pane = new stdClass();
    $pane->pid = 'new-c55041bf-8c2c-4574-9557-f5316763a59a';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c55041bf-8c2c-4574-9557-f5316763a59a';
    $display->content['new-c55041bf-8c2c-4574-9557-f5316763a59a'] = $pane;
    $display->panels['footer'][1] = 'new-c55041bf-8c2c-4574-9557-f5316763a59a';
    $pane = new stdClass();
    $pane->pid = 'new-e16bc128-b4a7-4fe6-9e2a-85d223777c89';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'hosted_by-hosted-by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e16bc128-b4a7-4fe6-9e2a-85d223777c89';
    $display->content['new-e16bc128-b4a7-4fe6-9e2a-85d223777c89'] = $pane;
    $display->panels['footer'][2] = 'new-e16bc128-b4a7-4fe6-9e2a-85d223777c89';
    $pane = new stdClass();
    $pane->pid = 'new-5c03b41f-ecfb-4e76-afbc-c37e97ab1c23';
    $pane->panel = 'header';
    $pane->type = 'views';
    $pane->subtype = 'highlighted';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_full',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5c03b41f-ecfb-4e76-afbc-c37e97ab1c23';
    $display->content['new-5c03b41f-ecfb-4e76-afbc-c37e97ab1c23'] = $pane;
    $display->panels['header'][0] = 'new-5c03b41f-ecfb-4e76-afbc-c37e97ab1c23';
    $pane = new stdClass();
    $pane->pid = 'new-e8840cca-ef6d-4f43-b0b6-91be974d4da8';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'front_page_upper_section';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = 'e8840cca-ef6d-4f43-b0b6-91be974d4da8';
    $display->content['new-e8840cca-ef6d-4f43-b0b6-91be974d4da8'] = $pane;
    $display->panels['header'][1] = 'new-e8840cca-ef6d-4f43-b0b6-91be974d4da8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
