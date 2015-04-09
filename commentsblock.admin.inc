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

  // Do we render comment form only or complete form+comments?
  $options = array(
    0 => t('Only load the comment form'),
    1 => t('Load comments + comment form into a block'),
  );
  
  $form['commentsblock_display'] = array(
    '#type' => 'select',
    '#title' => t('Render comment form only?'),
    '#description' => t('Should the comments be shown together with the form?'),
	'#default_value' => $config->get('commentsblock_display'),
    '#options' => $options,
  );
  
  $form['commentsblock_display_info'] = array(
    '#type' => 'item',
    '#title' => t('Info'),
    '#markup' => '<p>If you choose <em>Only load the comment form</em>, <strong>ONLY</strong> the comment form is rendered into a block. You can then use the view shipped with the module to display the comments. Otherwise no comments will be shown.</p>',
  );

  $form['commentsblock_display_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide "Add new comment"'),
    '#description' => t('Hides "Add new comment" at the node links. The "Add new comment" only appears if a minimum of one comment has already been posted'),
    '#default_value' => $config->get('commentsblock_display_link'),
  );
  
  // Add a submit button
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  // Return the form
    return $form;
}

// Add a submit function to process config
function commentsblock_settings_form_submit($form, &$form_state) {
    $config = config('commentsblock.settings');
    $config->set('commentsblock_display', $form_state['values']['commentsblock_display']);
    $config->set('commentsblock_display_link', $form_state['values']['commentsblock_display_link']);
    $config->save();
    backdrop_set_message(t('The configuration options have been saved.'));
}
