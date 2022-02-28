PORTNAME=	ksokoban
PORTVERSION=	g20220227
CATEGORIES=	games

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Japanese warehouse keeper sokoban game

USES=		cmake compiler:c++11-lang gettext kde:5 qt:5

USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	a7d4e6f2

USE_KDE=	auth codecs config configwidgets coreaddons i18n kio \
		libkdegames service widgetsaddons xmlgui ecm_build
USE_QT=		concurrent core dbus gui network widgets xml buildtools_build \
		qmake_build

.include <bsd.port.mk>
