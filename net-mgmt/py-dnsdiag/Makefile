# Created by: Babak Farrokhi <farrokhi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	dnsdiag
PORTVERSION=	1.6.4
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	farrokhi@FreeBSD.org
COMMENT=	DNS Diagnostics and measurement tools (ping, traceroute)

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dnspython>=1.15.0:dns/py-dnspython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cymruwhois>=1.6:net/py-cymruwhois@${PY_FLAVOR}

USES=		python:3.3+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
