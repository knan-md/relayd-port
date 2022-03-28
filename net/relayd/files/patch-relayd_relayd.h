--- relayd/relayd.h.orig	2022-03-27 20:33:10 UTC
+++ relayd/relayd.h
@@ -58,7 +58,7 @@
 #include <tls.h>
 
 #ifdef __FreeBSD__
-#define	CONF_FILE		"/usr/local/etc/relayd.conf"
+#define	CONF_FILE		"%%PREFIX%%/etc/relayd.conf"
 #else
 #define CONF_FILE		"/etc/relayd.conf"
 #endif
