# Created by: Joseph Koshy <jkoshy@FreeBSD.org>
# $FreeBSD$

PORTNAME=	racket
PORTVERSION=	7.3
CATEGORIES=	lang scheme
MASTER_SITES=	http://mirror.racket-lang.org/installers/${PORTVERSION}/ \
		http://www.cs.utah.edu/plt/installers/${PORTVERSION}/ \
		http://www.eecs.northwestern.edu/racket/${PORTVERSION}/ \
		http://mirror.csclub.uwaterloo.ca/racket/racket-installers/${PORTVERSION}/ \
		http://mirror.informatik.uni-tuebingen.de/mirror/racket/${PORTVERSION}/ \
		http://racket.infogroep.be/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src-builtpkgs
DIST_SUBDIR=	${PORTNAME}/${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Interactive, integrated, graphical Scheme programming environment

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING_LESSER.txt

IGNORE_powerpc64=	./lightning/lightning.h:81:2: GNU lightning does not support the current target
BROKEN_i386=		segfaults during build

LIB_DEPENDS=	libffi.so:devel/libffi		\
		libcairo.so:graphics/cairo	\
		libpng.so:graphics/png

MAKE_JOBS_UNSAFE=yes

CONFLICTS=	racket-minimal-[0-9]*

USES=		gnome iconv jpeg libtool localbase sqlite tar:tgz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	-enable-libffi --enable-pthread --enable-places --enable-shared --mandir=${MANDIRS}
WRKSRC=		${WRKDIR}/racket-${PORTVERSION}/src
PATCH_WRKSRC=	${WRKDIR}/racket-${PORTVERSION}
USE_LDCONFIG=	yes
REINPLACE_ARGS=	-i ""
USE_GNOME=	cairo pango

OPTIONS_DEFINE=	DOCS

OPTIONS_DEFINE_amd64=	JIT FUTURES
OPTIONS_DEFINE_i386=	JIT FUTURES
OPTIONS_DEFAULT_amd64=	JIT FUTURES
OPTIONS_DEFAULT_i386=	JIT FUTURES

FUTURES_DESC=	Enable futures
JIT_DESC=	Enable JIT compiler
JIT_CFLAGS=	-msse -msse2 -mfpmath=sse

FUTURES_CONFIGURE_ENABLE=	futures
JIT_CONFIGURE_ENABLE=	jit

post-install:
	${FIND} ${STAGEDIR}${PREFIX} -type d -empty -delete
	${REINPLACE_CMD} -e "s@${STAGEDIR}@@" ${STAGEDIR}${PREFIX}/share/applications/*.desktop

.include <bsd.port.mk>
