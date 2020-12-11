FROM php:7.2.6-fpm-alpine
USER root
COPY wkhtmltopdf /bin/
RUN mkdir -p /usr/share/fonts/chinese/TrueType/
# COPY simsun.ttc /usr/share/fonts/chinese/TrueType/
COPY simsun.ttf /usr/share/fonts/chinese/TrueType/
RUN chmod +x /bin/wkhtmltopdf \
    # && echo 'http://dl-cdn.alpinelinux.org/alpine/edge/testing' >> /etc/apk/repositories \
    && apk update \
    && apk add --no-cache libgcc libstdc++ libx11 glib libxrender libxext libintl libcrypto1.0 libssl1.0 ttf-freefont fontconfig \
    && apk add --no-cache --virtual .build-deps  g++ make autoconf imagemagick-dev zlib-dev \
    && pecl install igbinary \
    && pecl install redis-4.0.1 && docker-php-ext-enable redis \
    && pecl install yaf-3.0.8 && docker-php-ext-enable yaf \
    && pecl install imagick && docker-php-ext-enable imagick \
    && docker-php-ext-install pdo_mysql mysqli bcmath zip \
    && apk del --no-cache .build-deps && rm -rf /tmp/*
