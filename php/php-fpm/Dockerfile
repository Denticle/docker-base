FROM denticle/php-sky:v1.0.1
USER root
COPY wkhtmltopdf /bin/
COPY entrypoint.sh /bin/
COPY ./node /bin
RUN mkdir -p /usr/share/fonts/chinese/TrueType/ \
    && mkdir /run/nginx/ \
    && mkdir -p /var/log/cron \
    && addgroup -g 1000 -S go \
    && adduser go -D -G go -u 1000 -s /bin/sh \
    && ln -s /bin/node /usr/bin/node
COPY simsun.ttc /usr/share/fonts/chinese/TrueType/
COPY simsun.ttf /usr/share/fonts/chinese/TrueType/
RUN chmod +x /bin/wkhtmltopdf \
    && sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories \
    && apk update \
    && apk add --no-cache libgcc libpng imagemagick-libs libstdc++ libx11 glib libxrender libmcrypt libxext libintl libcrypto1.0 libssl1.0 ttf-freefont fontconfig supervisor nginx \
    && apk add --no-cache --repository http://mirrors.aliyun.com/alpine/edge/community gnu-libiconv \
    && apk add --no-cache --virtual .build-deps  g++ make autoconf imagemagick-dev zlib-dev libpng-dev libmcrypt-dev \
    && pecl channel-update pecl.php.net \
    && pecl install igbinary \
    && pecl install redis-4.0.1 && docker-php-ext-enable redis \
    && pecl install mcrypt && docker-php-ext-enable mcrypt \
    && pecl install yaf-3.0.8 && docker-php-ext-enable yaf \
    && pecl install mongodb-1.7.1 && docker-php-ext-enable mongodb \
    && docker-php-ext-install pdo_mysql bcmath zip gd \
    && apk del --no-cache .build-deps && rm -rf /tmp/*
ENV LD_PRELOAD /usr/lib/preloadable_libiconv.so php    
ENTRYPOINT ["/bin/entrypoint.sh" ]
EXPOSE 5921    