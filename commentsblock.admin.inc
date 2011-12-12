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
    0 => t('Yes'),
    1 => t('No'),
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
    '#markup' => '<p>If you chose YES, <u>ONLY the comment form is rendered into a block</u>. You the can then use the shipped view to display the comments otherwise no commenst will show up. If you chose NO the <u>complete comments form+comments are rendered into a block.</u></p>',
  );

  return system_settings_form($form);
}









