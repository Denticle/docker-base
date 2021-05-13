FROM php:7.2.6-fpm-alpine
USER root
ENV LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib:/usr/local/lib64
ENV LD_RUN_PATH=$LD_RUN_PATH:/usr/local/lib:/usr/local/lib64
COPY SkyAPM-php-sdk-4.1.2 /usr/local/src/SkyAPM-php-sdk-4.1.2
COPY grpc /usr/local/src/grpc
COPY cmake-3.19.1.tar.gz /usr/local/src
RUN docker-php-ext-install mysqli \
    && chmod -R 777 /usr/local/src/grpc/third_party/protobuf \
    && sed -i 's/dl-cdn.alpinelinux.org/mirrors.aliyun.com/g' /etc/apk/repositories \
    && apk update \
    && apk add --no-cache --virtual .build-deps boost-dev ca-certificates autoconf automake libtool g++ make file linux-headers file re2c pkgconf openssl openssl-dev curl-dev \
    && cd /usr/local/src \
    && tar zxf cmake-3.19.1.tar.gz \
    && cd cmake-3.19.1 && ./bootstrap && make -j$(nproc) && make install \
    && cd /usr/local/src/grpc/third_party/protobuf \
    && ./autogen.sh && ./configure && make -j$(nproc) && make install && make clean \
    && cd /usr/local/src/grpc \
    && mkdir -p cmake/build && cd cmake/build && cmake ../.. -DBUILD_SHARED_LIBS=ON -DgRPC_INSTALL=ON \
    && make -j$(nproc) && make install && make clean \
    && cd /usr/local/src/SkyAPM-php-sdk-4.1.2 \
    && phpize && ./configure && make && make install && make clean \
    && rm -rf /usr/local/src/* \
    && apk del --no-cache .build-deps && rm -rf /tmp/* \
    && rm -rf /var/cache/apk/*
