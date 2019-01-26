(function($, Drupal) {
  Drupal.behaviors.main_script = {
    attach:function(context, settings) {


    //
    $('#block-menu-menu-social-media-menu li:last-child').unbind('click').bind('click', function() {
      $(this).find('.field-name-qr-code').slideToggle();
    });


    // $('.field-name-field-product-section .field-name-field-logo-up').each(function() {
    //   if (!$(this).find('.field').hasClass('field-type-image')) {
    //     $(this).closest('.field-item').addClass('full-width');
    //   }
    // });





    }
  }
}(jQuery, Drupal));
