# Created by: Johannes M Dieterich <jmd@FreeBSD.org>
# $FreeBSD$

PORTNAME=	f18
DISTVERSION=	g20190422
CATEGORIES=	devel

MAINTAINER=	jmd@FreeBSD.org
COMMENT=	Fortran compiler targeting LLVM

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64
BROKEN_FreeBSD_11=	could not read symbols: File format not recognized

BUILD_DEPENDS=	llvm80>=0:devel/llvm80
RUN_DEPENDS=	llvm80>=0:devel/llvm80

USES=		cmake:noninja compiler:c++11-lib libedit perl5 tar:xz \
		shebangfix
_USES_PYTHON?=	python:build
USES+=		${_USES_PYTHON}

USE_GITHUB=	yes
GH_ACCOUNT=	flang-compiler
GH_TAGNAME=	9e178f2

CMAKE_ARGS+=	-DLLVM_DIR=${LOCALBASE}/llvm80/lib/cmake/llvm \
		-DBUILD_WITH_CLANG=${LOCALBASE}/llvm80

MAKE_JOBS_UNSAFE=	yes

.include <bsd.port.mk>
