#!/bin/sh
set -e
php-fpm &
node -allow-root &
supervisord -c /etc/supervisor/supervisord.conf &
nginx -g 'daemon off;'