<?php
/**
 * @file
 * Default theme implementation for displaying search results.
 *
 * This template collects each invocation of theme_search_result(). This and
 * the child template are dependent to one another sharing the markup for
 * definition lists.
 *
 * Note that modules may implement their own search type and theme function
 * completely bypassing this template.
 *
 * Available variables:
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 *
 *
 * @see template_preprocess_search_results()
 *
 * @ingroup themeable
 */
?>
<?php $page_number = $_GET['page']; ?>
<?php $item_number = 1; ?>
<?php if (isset($page_number) && is_numeric($page_number)) : ?>
  <?php $item_number = $page_number * 10 + 1; ?>
<?php endif; ?>
<pre>
  <?php print_r($params); ?>
</pre>
<?php if ($search_results): ?>
  <div class="panel-pane pane-page-title">
    <div class="pane-content">
      <h1><?php print t('Search Results'); ?></h1>
    </div>
  </div>
  <h2 class="search-totals"><span id="search-total"><?php print $search_totals; ?></span><span id="search-term"><?php print $search_term; ?></span></h2>
  <ol start="<?php print $item_number; ?>" class="search-results <?php print $module; ?>-results">
    <?php print $search_results; ?>
  </ol>
  <?php print $pager; ?>
<?php else : ?>
  <h2><?php print t('Your search yielded no results'); ?></h2>
  <?php print search_help('search#noresults', drupal_help_arg()); ?>
<?php endif; ?>
