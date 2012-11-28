/*
 * Allerbok theme scripts.
 */

(function($) {

    Drupal.behaviors.{SHOP_NAME}Theme = {
        attach: function(context) {
            // Smooth scroll width offset.
            $('.view-mode-full .read-more', context).click(function(event) {
                event.preventDefault();
                var padTop = parseInt($('body').outerHeight() - $('body').height(), 10) + 50;
                $('html, body').animate({ scrollTop: $(this.hash).offset().top - padTop }, 500);
            });

            // Taxonomy filters.
            $('.view-taxonomy-custom .view-filters', context).each(function() {
                var viewFilters, priceAsc, priceDesc;

                viewFilters = $('.view-taxonomy-custom .view-filters', context);

                // Prices Asc.
                priceAsc = $('[for="edit-sort-bef-combine-commerce-price-amount-asc"]');
                priceDesc = $('[for="edit-sort-bef-combine-commerce-price-amount-desc"]');

                if (priceAsc.length) {
                    $('i', priceAsc).removeClass('icon-chevron-down').addClass('icon-chevron-up');
                }

                if ($('input[checked="checked"]', priceDesc).length) {
                    priceDesc.hide();
                    priceAsc.show();
                }
                else if ($('input[checked="checked"]', priceAsc).length) {
                    priceAsc.hide();
                    priceDesc.show();
                }
                else {
                    priceAsc.hide();
                }
            });
        }
    };

})(jQuery);
