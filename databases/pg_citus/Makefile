# Created by: Matthew Seaman
# $FreeBSD$

PORTNAME=	citus
PORTVERSION=	8.2.1
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	databases
PKGNAMEPREFIX=	pg_

MAINTAINER=	matthew@FreeBSD.org
COMMENT=	Horizontally scale Postgresql using sharding and replication

LICENSE=	AGPLv3

BROKEN_i386=		fails to compile: transaction/backend_data.c:727:2: error: unknown type name 'pg_atomic_uint64'; did you mean 'pg_atomic_uint32'?

USES=		gmake pgsql:10+ autoreconf readline
WANT_PGSQL=	lib server
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	ANONSTATS

ANONSTATS_DESC=	Enable anonymous statistics collection
ANONSTATS_CONFIGURE_WITH=	libcurl
ANONSTATS_LIB_DEPENDS=		libcurl.so:ftp/curl

USE_GITHUB=	yes
GH_ACCOUNT=	citusdata

INSTALL_TARGET=	install-strip
MAKE_ARGS=	INSTALL="${INSTALL} -c"

.include <bsd.port.mk>
