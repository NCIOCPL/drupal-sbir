drush vset maintenance_mode 1
drush dis admin -y
drush dis sbir_roles_permissions -y
drush dis sbir_search -y
drush dis sbir_global_template -y
drush dis sbir_home_page -y
drush dis sbir_social_media -y
drush dis sbir_basic_pages -y
drush dis sbir_email_notifications -y
drush dis sbir_success_stories -y
drush dis sbir_events -y
drush dis sbir_announcements -y
drush dis sbir_wysiwyg -y
drush dis sbir_settings -y
drush dis sbir_base -y
drush dis sbir_subscription -y
drush dis sbir_success_story -y
drush dis sbir_file -y
drush dis sbir_event -y
drush dis sbir_block -y
drush dis sbir_basic_page -y
drush dis sbir_announcement -y

drush en sbir -y

drush php-eval 'update_sbir_block("menu", "menu-footer-menu", "<none>", 0, "", 0)'
drush php-eval 'update_sbir_block("menu", "menu-social-media", "<none>", 0, "", 0)'
drush php-eval 'update_sbir_block("superfish", 1, "<none>", 0, "", 0)'
drush php-eval 'update_sbir_block("sbir_home_page", "home_page_banner", "<none>", 0, "", 0)'
drush php-eval 'set_sbir_permissions()'

drush cc all
drush vset maintenance_mode 0