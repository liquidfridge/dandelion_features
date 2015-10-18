<?php
/**
 * @file
 * dandelion_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dandelion_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_0ff17fda-fda4-4a2d-b725-55e49f94fc60';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Notes book',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'notes
notes/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:notes_book';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'wiki_page_body' => NULL,
      'wiki_page_title' => NULL,
      'wiki_page_changed' => NULL,
      'notes_book_title' => NULL,
      'notes_book_body' => NULL,
      'notes_book_changed' => NULL,
      'notes_book_updated' => NULL,
      'notes_book_nav' => NULL,
      'notes_book_tree' => NULL,
      'notes_book_toc' => NULL,
      'notes_book_comments' => NULL,
      'notes_book_contribute' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '87675390-6605-4784-8935-8a62449dfc75';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7bcdce54-78c1-4018-827f-40674b6d6bd6';
    $pane->panel = 'notes_book_body';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '7bcdce54-78c1-4018-827f-40674b6d6bd6';
    $display->content['new-7bcdce54-78c1-4018-827f-40674b6d6bd6'] = $pane;
    $display->panels['notes_book_body'][0] = 'new-7bcdce54-78c1-4018-827f-40674b6d6bd6';
    $pane = new stdClass();
    $pane->pid = 'new-72f7c5d2-e4e0-4a96-81b0-7e5e265a9991';
    $pane->panel = 'notes_book_comments';
    $pane->type = 'node_comment_wrapper';
    $pane->subtype = 'node_comment_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '72f7c5d2-e4e0-4a96-81b0-7e5e265a9991';
    $display->content['new-72f7c5d2-e4e0-4a96-81b0-7e5e265a9991'] = $pane;
    $display->panels['notes_book_comments'][0] = 'new-72f7c5d2-e4e0-4a96-81b0-7e5e265a9991';
    $pane = new stdClass();
    $pane->pid = 'new-0f21f65a-c2fe-4978-80b2-96ad5d061d93';
    $pane->panel = 'notes_book_nav';
    $pane->type = 'node_book_nav';
    $pane->subtype = 'node_book_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '0f21f65a-c2fe-4978-80b2-96ad5d061d93';
    $display->content['new-0f21f65a-c2fe-4978-80b2-96ad5d061d93'] = $pane;
    $display->panels['notes_book_nav'][0] = 'new-0f21f65a-c2fe-4978-80b2-96ad5d061d93';
    $pane = new stdClass();
    $pane->pid = 'new-772f4952-6e6c-4ae8-a17e-8fb00579a09d';
    $pane->panel = 'notes_book_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '772f4952-6e6c-4ae8-a17e-8fb00579a09d';
    $display->content['new-772f4952-6e6c-4ae8-a17e-8fb00579a09d'] = $pane;
    $display->panels['notes_book_title'][0] = 'new-772f4952-6e6c-4ae8-a17e-8fb00579a09d';
    $pane = new stdClass();
    $pane->pid = 'new-e745e1b4-1817-4d95-bc2e-a39e0c030393';
    $pane->panel = 'notes_book_toc';
    $pane->type = 'block';
    $pane->subtype = 'dandelion-notes_menu';
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
    $pane->uuid = 'e745e1b4-1817-4d95-bc2e-a39e0c030393';
    $display->content['new-e745e1b4-1817-4d95-bc2e-a39e0c030393'] = $pane;
    $display->panels['notes_book_toc'][0] = 'new-e745e1b4-1817-4d95-bc2e-a39e0c030393';
    $pane = new stdClass();
    $pane->pid = 'new-8b9584ba-ef7e-4f56-8709-a50df5c421f7';
    $pane->panel = 'notes_book_updated';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '8b9584ba-ef7e-4f56-8709-a50df5c421f7';
    $display->content['new-8b9584ba-ef7e-4f56-8709-a50df5c421f7'] = $pane;
    $display->panels['notes_book_updated'][0] = 'new-8b9584ba-ef7e-4f56-8709-a50df5c421f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7bcdce54-78c1-4018-827f-40674b6d6bd6';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_0ff17fda-fda4-4a2d-b725-55e49f94fc60'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_de1fb681-760f-4e1b-8d23-2e6f5eb8385e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'omega:page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'notes_book_title' => NULL,
      'notes_book_body' => NULL,
      'notes_book_updated' => NULL,
      'page_title' => NULL,
      'page_body' => NULL,
      'page_updated' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '773a809c-7f38-4dc8-b145-a07fd6d7c853';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-00f4292f-9df1-4c34-9db2-c82fea2f7451';
    $pane->panel = 'page_body';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '00f4292f-9df1-4c34-9db2-c82fea2f7451';
    $display->content['new-00f4292f-9df1-4c34-9db2-c82fea2f7451'] = $pane;
    $display->panels['page_body'][0] = 'new-00f4292f-9df1-4c34-9db2-c82fea2f7451';
    $pane = new stdClass();
    $pane->pid = 'new-30581ce6-afef-43b9-b207-5362c0b24d12';
    $pane->panel = 'page_title';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '30581ce6-afef-43b9-b207-5362c0b24d12';
    $display->content['new-30581ce6-afef-43b9-b207-5362c0b24d12'] = $pane;
    $display->panels['page_title'][0] = 'new-30581ce6-afef-43b9-b207-5362c0b24d12';
    $pane = new stdClass();
    $pane->pid = 'new-b410b5e9-5508-4623-9f9c-9a05c477e822';
    $pane->panel = 'page_updated';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'b410b5e9-5508-4623-9f9c-9a05c477e822';
    $display->content['new-b410b5e9-5508-4623-9f9c-9a05c477e822'] = $pane;
    $display->panels['page_updated'][0] = 'new-b410b5e9-5508-4623-9f9c-9a05c477e822';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_de1fb681-760f-4e1b-8d23-2e6f5eb8385e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_e6f146c9-aeb3-415e-8b90-cd5724b0d977';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Admin help page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'admin_help_page' => 'admin_help_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'admin_help_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'admin_help_page_top' => NULL,
      'admin_help_page_body' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aeb5e15c-ee53-4adf-8fc4-1c07570a5fb2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6573a98d-766a-4f36-8198-5a0b4bebb132';
    $pane->panel = 'admin_help_page_body';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6573a98d-766a-4f36-8198-5a0b4bebb132';
    $display->content['new-6573a98d-766a-4f36-8198-5a0b4bebb132'] = $pane;
    $display->panels['admin_help_page_body'][0] = 'new-6573a98d-766a-4f36-8198-5a0b4bebb132';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_e6f146c9-aeb3-415e-8b90-cd5724b0d977'] = $handler;

  return $export;
}
