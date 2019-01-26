<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php print render($title_suffix); ?>
    </header>
  <?php endif; ?>

  <?php 

    hide($content['comments']);
    hide($content['links']);
    hide($content['field_tags']); 

    print render($content); 

  ?>
</article>