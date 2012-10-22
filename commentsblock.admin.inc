<?php
/*
* @file
* Administration page callbacks for the commentsblock.module.
*/


/**
 * Menu callback setting
 */

function commentsblock_settings_form() {

  //do we render comment form only or complete form+comments?
  $options = array(
    0 => t('Load comments + comment form into a block'),
    1 => t('Only load the comment form'),
  );

  $form['commentsblock_display'] = array(
    '#type' => 'select',
    '#title' => t('Render comment form only?'),
    '#description' => t('Display Form yes or no?'),
    '#options' => $options,
    '#default_value' => variable_get('commentsblock_display', $options[0]),
  );
  $form['commentsblock_display_info'] = array(
    '#type' => 'item',
    '#title' => t('Infos'),
    '#markup' => '<p>If you chose <b>Only load the comment form</b>, <u>ONLY the comment form is rendered into a block</u>. You the can then use the shipped view to display the comments. Otherwise no commenst will show up.</p>',
  );


  $form['commentsblock_display_link'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide "Add new comment"'),
    '#description' => t('Hides "Add new comment" at the node bottom ($links). The "Add new comment" only appears if a minimum of one comment has already been posted"'),
    '#default_value' => variable_get('commentsblock_display_link', 0),
  );

  return system_settings_form($form);
}









