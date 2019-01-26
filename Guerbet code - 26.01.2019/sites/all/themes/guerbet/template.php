<?php

/**
 * Override or insert variables into the node template.
 */
function guerbet_preprocess_node(&$variables) {
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
}

function guerbet_preprocess_page(&$variables) {
  if (isset($variables['node']->type) && $variables['node']->type == 'news') {
    drupal_set_title(t('News'));
  }
}
