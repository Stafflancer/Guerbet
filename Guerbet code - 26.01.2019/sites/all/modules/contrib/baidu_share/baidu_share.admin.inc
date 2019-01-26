<?php

/**
 * @file
 * Administration page for the Baidu Share Button.
 */

/**
 * Menu callback: displays the Baidu Share Button module settings page.
 *
 * @ingroup forms
 */
function baidu_share_block_admin_settings() {
  $form['display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Display Settings'),
    '#description' => t('These are settings for the block. To use the block, go to the <a href="@blocks">blocks</a> page to enable and configure the <em>Baidu Share Button</em> block.', array('@blocks' => url('admin/structure/block'))),
  );

  $available_requirements = array(
    '1' => t('Page sharing'),
    '2' => t('Image sharing'),
    '3' => t('Word sharing'),
  );

  $button_sizes = array(
    '1' => t('16*16'),
    '2' => t('24*24'),
    '3' => t('32*32'),
  );

  $default = array(
    'baidu_share_type' => array('1', '2', '3'),
    'baidu_share_size' => 1,
    'css_block' => 'margin:0 1em 1em 1em;float:right;',
  );

  $button_settings = variable_get('baidu_share_block_settings', $default);

  $form['baidu_share_block_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Button Settings'),
    '#tree' => TRUE,
  );

  $form['baidu_share_block_settings']['baidu_share_type'] = array(
    '#type' => 'checkboxes',
    '#title' => t('It can be multi-select code function to support different sharing needs:'),
    '#options' => $available_requirements,
    '#default_value' => $button_settings['baidu_share_type'],
  );

  $form['baidu_share_block_settings']['baidu_share_size'] = array(
    '#type' => 'radios',
    '#title' => t('Button style selection:'),
    '#options' => $button_sizes,
    '#default_value' => $button_settings['baidu_share_size'],
  );

  $form['baidu_share_block_settings']['css_block'] = array(
    '#type' => 'textfield',
    '#title' => t('Optional wrapper with CSS:'),
    '#maxlength' => 256,
    '#default_value' => $button_settings['css_block'],
    '#description' => t('To help with the layout and placement of the button, it will be rendered by default inside a wrapper: 	&lt;div class="baidu-share-wrapper"&gt;	&lt;/div&gt;. You can enter CSS rules to style this wrapper. By default <em>margin:0 1em 1em 1em;float:right;</em>. To disable totally the wrapper, input the word <em>nowrapper</em>.'),
  );

  return system_settings_form($form);
}
