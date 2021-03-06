--- chrome/browser/policy/configuration_policy_handler_list_factory.cc.orig	2019-04-30 22:22:34 UTC
+++ chrome/browser/policy/configuration_policy_handler_list_factory.cc
@@ -107,7 +107,7 @@
 #include "chrome/browser/policy/browser_signin_policy_handler.h"
 #endif
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_BSD) || \
     (defined(OS_LINUX) && !defined(OS_CHROMEOS))
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
@@ -962,7 +962,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
     prefs::kAllowPopupsDuringPageUnload,
     base::Value::Type::BOOLEAN },
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_BSD) || \
     (defined(OS_LINUX) && !defined(OS_CHROMEOS))
   { key::kAlternativeBrowserPath,
     browser_switcher::prefs::kAlternativeBrowserPath,
