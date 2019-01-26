<?php  
// dpm($node);
// dpm($content);
$text_pos = empty($node->field_text_position[LANGUAGE_NONE][0]['value']) ? 'top' : $node->field_text_position[LANGUAGE_NONE][0]['value'];
?>

<h2<?php print $title_attributes; ?>><?php print $title; ?></h2>

<?php if ($text_pos == 'top' && $node->field_tile_type[LANGUAGE_NONE][0]['value'] != '1 image tile'): ?>
  <?php print $content['body'][0]['#markup']; ?>
<?php endif; ?>


<?php if ($node->field_tile_type[LANGUAGE_NONE][0]['value'] == 'Video tile'): ?>
  <a href="<?php print $node->field_youku_video_url[LANGUAGE_NONE][0]['video_url']; ?>" target="_blank">
    <?php print render($content['field_image']); ?>
  </a>
<?php else: ?>
	<?php if (empty($node->field_link[LANGUAGE_NONE][0]['url'])): ?>
  	<?php print render($content['field_image']); ?>
  <?php else: ?>
  	<a href="<?php print $node->field_link[LANGUAGE_NONE][0]['url']; ?>">
	    <?php print render($content['field_image']); ?>
	  </a>
  <?php endif; ?>
<?php endif; ?>

<?php if ($text_pos == 'bottom' && $node->field_tile_type[LANGUAGE_NONE][0]['value'] != '1 image tile'): ?>
  <?php print $content['body'][0]['#markup']; ?>
<?php endif; ?>
