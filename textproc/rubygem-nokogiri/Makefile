# $FreeBSD$

PORTNAME=	nokogiri
PORTVERSION=	1.10.3
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	HTML, XML, SAX, and Reader parser

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error
RUN_DEPENDS=	rubygem-pkg-config>=1.1.7:devel/rubygem-pkg-config \
		rubygem-mini_portile2>=2.4.0:devel/rubygem-mini_portile2

USES=		gem gnome pkgconfig gettext-runtime
USE_GNOME=	libxml2 libxslt
USE_RUBY=	yes

CONFIGURE_ARGS=	--use-system-libraries

PLIST_FILES=	bin/nokogiri

post-install:
	${FIND} ${STAGEDIR}${PREFIX}/${GEMS_BASE_DIR} -name '*.o' -o -name '*.so' | ${XARGS} ${STRIP_CMD}
	${RMDIR} ${STAGEDIR}${PREFIX}/${GEM_LIB_DIR}/ports/

.include <bsd.port.mk>
