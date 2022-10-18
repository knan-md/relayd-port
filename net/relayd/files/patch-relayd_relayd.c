--- relayd/relayd.c.orig	2022-10-06 10:06:03 UTC
+++ relayd/relayd.c
@@ -256,6 +256,8 @@ main(int argc, char *argv[])
 		err(1, "unveil");
 #endif
 
+	setproctitle("parent");
+
 	event_init();
 
 	signal_set(&ps->ps_evsigint, SIGINT, parent_sig_handler, ps);
