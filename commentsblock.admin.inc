<?php
/*
* @file
* Administration page callbacks for the commentsblock.module.
*/

/**
 * Menu callback setting
 */
function commentsblock_settings_form($form,$form_state) {

  $config = config('commentsblock.settings');
  $form['#config'] = 'commentsblock.settings'; 
  $form['commentsblock_hide_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide "Add new comment"'),
    '#description' => t('Hides "Add new comment" at the node links. The "Add new comment" only appears if a minimum of one comment has already been posted'),
    '#default_value' => $config->get('commentsblock_hide_link'),
  );

  $form['commentsblock_hide_node_comments'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide node comments and form'),
    '#description' => t('Hides the normal list of comments and the comment form from the node display itself. Use if you use the "Main page content" block in your layout. WARNING: this setting will hide the comments and comment form for all nodes in all layouts.'),
    '#default_value' => $config->get('commentsblock_hide_node_comments'),
  );
  
  // Add a submit button
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return system_settings_form($form);
}

