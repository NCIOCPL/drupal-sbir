drush vset maintenance_mode 1

drush dis sbir_error_pages -y
drush dis sbir_admin -y
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

drush dis sbir_user_roles -y

drush en sbir -y
drush en sbir_user_roles -y

drush cron

drush cc all

drush vset maintenance_mode 0
