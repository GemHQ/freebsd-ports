define(`confEBINDIR',`%%PREFIX%%/libexec')
define(`confMANROOT',`%%PREFIX%%/man/cat')
define(`confMANROOTMAN',`%%PREFIX%%/man/man')
define(`confMBINDIR',`%%PREFIX%%/sbin')
define(`confSBINDIR',`%%PREFIX%%/sbin')
define(`confUBINDIR',`%%PREFIX%%/bin')
define(`confNO_STATISTICS_INSTALL',`True')
define(`confHFDIR', `%%PREFIX%%/share/sendmail')
APPENDDEF(`conf_sendmail_ENVDEF', `-DTCPWRAPPERS')
APPENDDEF(`conf_sendmail_LIBS', `-lwrap')"
