<?php

/**
 * @file
 * The output of Baidu Share module.
 *
 * Available variables:
 * - $bd_wrapper_start: The start tag of the baidu share code wrapper.
 * - $bd_wrapper_end: The end tag of the baidu share code wrapper.
 * - $bd_size: The size of the baidu share button image.
 * - $image_share: The image sharing code of baidu share.
 * - $select_share: The text select sharing code of baidu share.
 */
$bd_wrapper_start = isset($bd_wrapper_start) ? $bd_wrapper_start : '';
$bd_size = isset($bd_size) ? $bd_size : '';
$image_share = isset($image_share) ? $image_share : '';
$select_share = isset($select_share) ? $select_share : '';
$bd_wrapper_end = isset($bd_wrapper_end) ? $bd_wrapper_end : '';

print $bd_wrapper_start;
?>
<div class="bdsharebuttonbox">
    <a href="#" class="bds_more" data-cmd="more"></a>
    <a href="#" class="bds_qzone" data-cmd="qzone" title="分享到QQ空间"></a>
    <a href="#" class="bds_tsina" data-cmd="tsina" title="分享到新浪微博"></a>
    <a href="#" class="bds_tqq" data-cmd="tqq" title="分享到腾讯微博"></a>
    <a href="#" class="bds_renren" data-cmd="renren" title="分享到人人网"></a>
    <a href="#" class="bds_weixin" data-cmd="weixin" title="分享到微信"></a>
</div>
<script>
    window._bd_share_config = {
        "common": {
            "bdSnsKey": {},
            "bdText": "",
            "bdMini": "2",
            "bdMiniList": false,
            "bdPic": "",
            "bdStyle": "0",
            "bdSize": "<?php print $bd_size; ?>"
        },
        "share": {}
      <?php
      print $image_share . $select_share;
      ?>
    };
    with (document)0[(getElementsByTagName('head')[0] || body)
        .appendChild(createElement('script'))
        .src = 'http://bdimg.share.baidu.com/static/api/js/share.js?v=89860593.js?cdnversion=' + ~(-new Date() / 36e5)];
</script>
<?php print $bd_wrapper_end; ?>
