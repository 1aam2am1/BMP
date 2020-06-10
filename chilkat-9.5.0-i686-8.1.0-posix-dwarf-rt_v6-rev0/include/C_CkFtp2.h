// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkFtp2_H
#define _C_CkFtp2_H

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkFtp2_setAbortCheck(HCkFtp2 cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkFtp2_setPercentDone(HCkFtp2 cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkFtp2_setProgressInfo(HCkFtp2 cHandle, void (*fnProgressInfo)(const char *name, const char *value));

CK_C_VISIBLE_PUBLIC void CkFtp2_setTaskCompleted(HCkFtp2 cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkFtp2_setAbortCheck2(HCkFtp2 cHandle, BOOL (*fnAbortCheck2)(void *pContext));

CK_C_VISIBLE_PUBLIC void CkFtp2_setPercentDone2(HCkFtp2 cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));

CK_C_VISIBLE_PUBLIC void
CkFtp2_setProgressInfo2(HCkFtp2 cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));

CK_C_VISIBLE_PUBLIC void
CkFtp2_setTaskCompleted2(HCkFtp2 cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkFtp2_setExternalProgress(HCkFtp2 cHandle, BOOL on);

CK_C_VISIBLE_PUBLIC void CkFtp2_setCallbackContext(HCkFtp2 cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkFtp2 CkFtp2_Create(void);

CK_C_VISIBLE_PUBLIC void CkFtp2_Dispose(HCkFtp2 handle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAbortCurrent(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAbortCurrent(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getAccount(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAccount(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_account(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getActivePortRangeEnd(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putActivePortRangeEnd(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getActivePortRangeStart(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putActivePortRangeStart(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2_getAllocateSize(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAllocateSize(HCkFtp2 cHandle, unsigned long newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAllowMlsd(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAllowMlsd(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2_getAsyncBytesReceived(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2_getAsyncBytesReceived64(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getAsyncBytesReceivedStr(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_asyncBytesReceivedStr(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2_getAsyncBytesSent(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2_getAsyncBytesSent64(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getAsyncBytesSentStr(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_asyncBytesSentStr(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAsyncFinished(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getAsyncLog(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_asyncLog(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2_getAsyncPercentDone(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAsyncSuccess(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAuthSsl(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAuthSsl(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAuthTls(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAuthTls(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoFeat(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoFeat(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoFix(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoFix(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoGetSizeForProgress(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoGetSizeForProgress(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoOptsUtf8(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoOptsUtf8(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoSetUseEpsv(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoSetUseEpsv(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoSyst(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoSyst(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getAutoXcrc(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putAutoXcrc(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getBandwidthThrottleDown(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putBandwidthThrottleDown(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getBandwidthThrottleUp(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putBandwidthThrottleUp(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getClientIpAddress(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putClientIpAddress(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_clientIpAddress(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getCommandCharset(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putCommandCharset(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_commandCharset(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getConnectFailReason(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getConnectTimeout(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putConnectTimeout(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getConnectVerified(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getCrlfMode(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putCrlfMode(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getDataProtection(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putDataProtection(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_dataProtection(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getDebugLogFilePath(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putDebugLogFilePath(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_debugLogFilePath(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getDirListingCharset(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putDirListingCharset(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_dirListingCharset(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getDownloadTransferRate(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getForcePortIpAddress(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putForcePortIpAddress(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_forcePortIpAddress(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getGreeting(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_greeting(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getHasModeZ(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getHeartbeatMs(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHeartbeatMs(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getHostname(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHostname(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_hostname(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getHttpProxyAuthMethod(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHttpProxyAuthMethod(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_httpProxyAuthMethod(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getHttpProxyDomain(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHttpProxyDomain(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_httpProxyDomain(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getHttpProxyHostname(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHttpProxyHostname(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_httpProxyHostname(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getHttpProxyPassword(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHttpProxyPassword(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_httpProxyPassword(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getHttpProxyPort(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHttpProxyPort(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getHttpProxyUsername(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putHttpProxyUsername(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_httpProxyUsername(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getIdleTimeoutMs(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putIdleTimeoutMs(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getIsConnected(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getKeepSessionLog(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putKeepSessionLog(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getLargeFileMeasures(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putLargeFileMeasures(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getLastErrorHtml(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_lastErrorHtml(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getLastErrorText(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_lastErrorText(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getLastErrorXml(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_lastErrorXml(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getLastMethodSuccess(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putLastMethodSuccess(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getLastReply(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_lastReply(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getListPattern(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putListPattern(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_listPattern(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getLoginVerified(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getNumFilesAndDirs(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getPartialTransfer(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getPassive(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPassive(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getPassiveUseHostAddr(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPassiveUseHostAddr(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getPassword(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPassword(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_password(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getPercentDoneScale(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPercentDoneScale(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getPort(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPort(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getPreferIpv6(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPreferIpv6(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getPreferNlst(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putPreferNlst(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getProgressMonSize(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProgressMonSize(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2_getProgressMonSize64(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProgressMonSize64(HCkFtp2 cHandle, __int64 newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getProxyHostname(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProxyHostname(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_proxyHostname(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getProxyMethod(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProxyMethod(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getProxyPassword(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProxyPassword(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_proxyPassword(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getProxyPort(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProxyPort(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getProxyUsername(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putProxyUsername(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_proxyUsername(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getReadTimeout(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putReadTimeout(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getRequireSslCertVerify(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putRequireSslCertVerify(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getRestartNext(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putRestartNext(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getSendBufferSize(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSendBufferSize(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSessionLog(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_sessionLog(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getSkipFinalReply(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSkipFinalReply(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSocksHostname(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSocksHostname(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_socksHostname(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSocksPassword(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSocksPassword(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_socksPassword(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getSocksPort(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSocksPort(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSocksUsername(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSocksUsername(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_socksUsername(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getSocksVersion(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSocksVersion(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getSoRcvBuf(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSoRcvBuf(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2_getSoSndBuf(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSoSndBuf(HCkFtp2 cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getSsl(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSsl(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSslAllowedCiphers(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSslAllowedCiphers(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_sslAllowedCiphers(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSslProtocol(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSslProtocol(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_sslProtocol(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getSslServerCertVerified(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getSyncCreateAllLocalDirs(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSyncCreateAllLocalDirs(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSyncedFiles(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSyncedFiles(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syncedFiles(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSyncMustMatch(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSyncMustMatch(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syncMustMatch(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSyncMustMatchDir(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSyncMustMatchDir(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syncMustMatchDir(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSyncMustNotMatch(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSyncMustNotMatch(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syncMustNotMatch(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSyncMustNotMatchDir(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putSyncMustNotMatchDir(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syncMustNotMatchDir(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getSyncPreview(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syncPreview(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getTlsCipherSuite(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_tlsCipherSuite(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getTlsPinSet(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putTlsPinSet(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_tlsPinSet(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getTlsVersion(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_tlsVersion(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_getUncommonOptions(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putUncommonOptions(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_uncommonOptions(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_getUploadTransferRate(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getUseEpsv(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putUseEpsv(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getUsername(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2_putUsername(HCkFtp2 cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_username(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getUtf8(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putUtf8(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_getVerboseLogging(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_putVerboseLogging(HCkFtp2 cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2_getVersion(HCkFtp2 cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_version(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_AppendFile(HCkFtp2 cHandle, const char *localFilePath, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_AppendFileAsync(HCkFtp2 cHandle, const char *localFilePath, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_AppendFileFromBinaryData(HCkFtp2 cHandle, const char *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_AppendFileFromBinaryDataAsync(HCkFtp2 cHandle, const char *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_AppendFileFromTextData(HCkFtp2 cHandle, const char *remoteFilename, const char *textData, const char *charset);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_AppendFileFromTextDataAsync(HCkFtp2 cHandle, const char *remoteFilename, const char *textData,
                                   const char *charset);

CK_C_VISIBLE_PUBLIC void CkFtp2_AsyncAbort(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_AsyncAppendFileStart(HCkFtp2 cHandle, const char *localFilename, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_AsyncGetFileStart(HCkFtp2 cHandle, const char *remoteFilename, const char *localFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_AsyncPutFileStart(HCkFtp2 cHandle, const char *localFilename, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_ChangeRemoteDir(HCkFtp2 cHandle, const char *remoteDirPath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_ChangeRemoteDirAsync(HCkFtp2 cHandle, const char *remoteDirPath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_CheckConnection(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_CheckConnectionAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_ClearControlChannel(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_ClearControlChannelAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_ClearDirCache(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_ClearSessionLog(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Connect(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_ConnectAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_ConnectOnly(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_ConnectOnlyAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_ConvertToTls(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_ConvertToTlsAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_CreatePlan(HCkFtp2 cHandle, const char *localDir, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_createPlan(HCkFtp2 cHandle, const char *localDir);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_CreatePlanAsync(HCkFtp2 cHandle, const char *localDir);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_CreateRemoteDir(HCkFtp2 cHandle, const char *remoteDirPath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_CreateRemoteDirAsync(HCkFtp2 cHandle, const char *remoteDirPath);

CK_C_VISIBLE_PUBLIC int CkFtp2_DeleteMatching(HCkFtp2 cHandle, const char *remotePattern);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DeleteMatchingAsync(HCkFtp2 cHandle, const char *remotePattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_DeleteRemoteFile(HCkFtp2 cHandle, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DeleteRemoteFileAsync(HCkFtp2 cHandle, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_DeleteTree(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DeleteTreeAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_DetermineProxyMethod(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DetermineProxyMethodAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_DetermineSettings(HCkFtp2 cHandle, HCkString outXmlReport);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_determineSettings(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DetermineSettingsAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_DirTreeXml(HCkFtp2 cHandle, HCkString outStrXml);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_dirTreeXml(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DirTreeXmlAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Disconnect(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DisconnectAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_DownloadTree(HCkFtp2 cHandle, const char *localRoot);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_DownloadTreeAsync(HCkFtp2 cHandle, const char *localRoot);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Feat(HCkFtp2 cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_feat(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_FeatAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkDateTime CkFtp2_GetCreateDt(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetCreateDtAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTime CkFtp2_GetCreateDtByName(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetCreateDtByNameAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetCreateTime(HCkFtp2 cHandle, int index, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetCreateTimeByName(HCkFtp2 cHandle, const char *filename, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetCreateTimeByNameStr(HCkFtp2 cHandle, const char *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getCreateTimeByNameStr(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetCreateTimeByNameStrAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetCreateTimeStr(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getCreateTimeStr(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetCreateTimeStrAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetCurrentRemoteDir(HCkFtp2 cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getCurrentRemoteDir(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetCurrentRemoteDirAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_GetDirCount(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetDirCountAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetFile(HCkFtp2 cHandle, const char *remoteFilePath, const char *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetFileAsync(HCkFtp2 cHandle, const char *remoteFilePath, const char *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetFileBd(HCkFtp2 cHandle, const char *remoteFilePath, HCkBinData binData);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetFileBdAsync(HCkFtp2 cHandle, const char *remoteFilePath, HCkBinData binData);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetFilename(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getFilename(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetFilenameAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_GetFileSb(HCkFtp2 cHandle, const char *remoteFilePath, const char *charset, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_GetFileSbAsync(HCkFtp2 cHandle, const char *remoteFilePath, const char *charset, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetFileToStream(HCkFtp2 cHandle, const char *remoteFilePath, HCkStream toStream);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_GetFileToStreamAsync(HCkFtp2 cHandle, const char *remoteFilePath, HCkStream toStream);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetGroup(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getGroup(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetGroupAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetIsDirectory(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetIsDirectoryAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetIsSymbolicLink(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetIsSymbolicLinkAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTime CkFtp2_GetLastAccessDt(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastAccessDtAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTime CkFtp2_GetLastAccessDtByName(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastAccessDtByNameAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastAccessTime(HCkFtp2 cHandle, int index, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastAccessTimeByName(HCkFtp2 cHandle, const char *filename, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastAccessTimeByNameStr(HCkFtp2 cHandle, const char *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getLastAccessTimeByNameStr(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastAccessTimeByNameStrAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastAccessTimeStr(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getLastAccessTimeStr(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastAccessTimeStrAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTime CkFtp2_GetLastModDt(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastModDtAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTime CkFtp2_GetLastModDtByName(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastModDtByNameAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastModifiedTime(HCkFtp2 cHandle, int index, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_GetLastModifiedTimeByName(HCkFtp2 cHandle, const char *filename, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastModifiedTimeByNameStr(HCkFtp2 cHandle, const char *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getLastModifiedTimeByNameStr(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastModifiedTimeByNameStrAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetLastModifiedTimeStr(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getLastModifiedTimeStr(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetLastModifiedTimeStrAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetOwner(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getOwner(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetOwnerAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetPermissions(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getPermissions(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetPermissionsAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetPermType(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getPermType(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetPermTypeAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_GetRemoteFileBinaryData(HCkFtp2 cHandle, const char *remoteFilename, HCkByteData outData);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetRemoteFileBinaryDataAsync(HCkFtp2 cHandle, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_GetRemoteFileTextC(HCkFtp2 cHandle, const char *remoteFilename, const char *charset, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkFtp2_getRemoteFileTextC(HCkFtp2 cHandle, const char *remoteFilename, const char *charset);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_GetRemoteFileTextCAsync(HCkFtp2 cHandle, const char *remoteFilename, const char *charset);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetRemoteFileTextData(HCkFtp2 cHandle, const char *remoteFilename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getRemoteFileTextData(HCkFtp2 cHandle, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetRemoteFileTextDataAsync(HCkFtp2 cHandle, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC int CkFtp2_GetSize(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetSizeAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2_GetSize64(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC int CkFtp2_GetSizeByName(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetSizeByNameAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2_GetSizeByName64(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetSizeStr(HCkFtp2 cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getSizeStr(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetSizeStrAsync(HCkFtp2 cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetSizeStrByName(HCkFtp2 cHandle, const char *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getSizeStrByName(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetSizeStrByNameAsync(HCkFtp2 cHandle, const char *filename);

CK_C_VISIBLE_PUBLIC HCkCert CkFtp2_GetSslServerCert(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetTextDirListing(HCkFtp2 cHandle, const char *pattern, HCkString outStrRawListing);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getTextDirListing(HCkFtp2 cHandle, const char *pattern);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetTextDirListingAsync(HCkFtp2 cHandle, const char *pattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_GetXmlDirListing(HCkFtp2 cHandle, const char *pattern, HCkString outStrXmlListing);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_getXmlDirListing(HCkFtp2 cHandle, const char *pattern);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_GetXmlDirListingAsync(HCkFtp2 cHandle, const char *pattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_IsUnlocked(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_LargeFileUpload(HCkFtp2 cHandle, const char *localPath, const char *remotePath, int chunkSize);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_LargeFileUploadAsync(HCkFtp2 cHandle, const char *localPath, const char *remotePath, int chunkSize);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_LoadTaskCaller(HCkFtp2 cHandle, HCkTask task);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_LoginAfterConnectOnly(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_LoginAfterConnectOnlyAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2_MGetFiles(HCkFtp2 cHandle, const char *remotePattern, const char *localDir);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_MGetFilesAsync(HCkFtp2 cHandle, const char *remotePattern, const char *localDir);

CK_C_VISIBLE_PUBLIC int CkFtp2_MPutFiles(HCkFtp2 cHandle, const char *pattern);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_MPutFilesAsync(HCkFtp2 cHandle, const char *pattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_NlstXml(HCkFtp2 cHandle, const char *remoteDirPattern, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_nlstXml(HCkFtp2 cHandle, const char *remoteDirPattern);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_NlstXmlAsync(HCkFtp2 cHandle, const char *remoteDirPattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Noop(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_NoopAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_PutFile(HCkFtp2 cHandle, const char *localFilePath, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_PutFileAsync(HCkFtp2 cHandle, const char *localFilePath, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_PutFileBd(HCkFtp2 cHandle, HCkBinData binData, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_PutFileBdAsync(HCkFtp2 cHandle, HCkBinData binData, const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_PutFileFromBinaryData(HCkFtp2 cHandle, const char *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_PutFileFromBinaryDataAsync(HCkFtp2 cHandle, const char *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_PutFileFromTextData(HCkFtp2 cHandle, const char *remoteFilename, const char *textData, const char *charset);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_PutFileFromTextDataAsync(HCkFtp2 cHandle, const char *remoteFilename, const char *textData, const char *charset);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_PutFileSb(HCkFtp2 cHandle, HCkStringBuilder sb, const char *charset, BOOL includeBom,
                                          const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_PutFileSbAsync(HCkFtp2 cHandle, HCkStringBuilder sb, const char *charset, BOOL includeBom,
                      const char *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_PutPlan(HCkFtp2 cHandle, const char *plan, const char *alreadyDoneFilename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_PutPlanAsync(HCkFtp2 cHandle, const char *plan, const char *alreadyDoneFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_PutTree(HCkFtp2 cHandle, const char *localDir);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_PutTreeAsync(HCkFtp2 cHandle, const char *localDir);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Quote(HCkFtp2 cHandle, const char *cmd);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_QuoteAsync(HCkFtp2 cHandle, const char *cmd);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_RemoveRemoteDir(HCkFtp2 cHandle, const char *remoteDirPath);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_RemoveRemoteDirAsync(HCkFtp2 cHandle, const char *remoteDirPath);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_RenameRemoteFile(HCkFtp2 cHandle, const char *existingRemoteFilePath, const char *newRemoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_RenameRemoteFileAsync(HCkFtp2 cHandle, const char *existingRemoteFilePath, const char *newRemoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SaveLastError(HCkFtp2 cHandle, const char *path);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SendCommand(HCkFtp2 cHandle, const char *cmd, HCkString outReply);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_sendCommand(HCkFtp2 cHandle, const char *cmd);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SendCommandAsync(HCkFtp2 cHandle, const char *cmd);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetModeZ(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SetModeZAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2_SetOldestDate(HCkFtp2 cHandle, SYSTEMTIME *oldestDateTime);

CK_C_VISIBLE_PUBLIC void CkFtp2_SetOldestDateStr(HCkFtp2 cHandle, const char *oldestDateTimeStr);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetOption(HCkFtp2 cHandle, const char *option);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetPassword(HCkFtp2 cHandle, HCkSecureString password);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetRemoteFileDateTime(HCkFtp2 cHandle, SYSTEMTIME *dt, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_SetRemoteFileDateTimeStr(HCkFtp2 cHandle, const char *dateTimeStr, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_SetRemoteFileDateTimeStrAsync(HCkFtp2 cHandle, const char *dateTimeStr, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetRemoteFileDt(HCkFtp2 cHandle, HCkDateTime dt, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SetRemoteFileDtAsync(HCkFtp2 cHandle, HCkDateTime dt, const char *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetSecurePassword(HCkFtp2 cHandle, HCkSecureString password);

CK_C_VISIBLE_PUBLIC void CkFtp2_SetSslCertRequirement(HCkFtp2 cHandle, const char *reqName, const char *reqValue);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetSslClientCert(HCkFtp2 cHandle, HCkCert cert);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_SetSslClientCertPem(HCkFtp2 cHandle, const char *pemDataOrFilename, const char *pemPassword);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetSslClientCertPfx(HCkFtp2 cHandle, const char *pfxFilename, const char *pfxPassword);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetTypeAscii(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SetTypeAsciiAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SetTypeBinary(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SetTypeBinaryAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Site(HCkFtp2 cHandle, const char *siteCommand);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SiteAsync(HCkFtp2 cHandle, const char *siteCommand);

CK_C_VISIBLE_PUBLIC void CkFtp2_SleepMs(HCkFtp2 cHandle, int millisec);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Stat(HCkFtp2 cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_stat(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_StatAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SyncDeleteRemote(HCkFtp2 cHandle, const char *localRoot);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SyncDeleteRemoteAsync(HCkFtp2 cHandle, const char *localRoot);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SyncLocalDir(HCkFtp2 cHandle, const char *localRoot, int mode);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SyncLocalDirAsync(HCkFtp2 cHandle, const char *localRoot, int mode);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SyncLocalTree(HCkFtp2 cHandle, const char *localRoot, int mode);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SyncLocalTreeAsync(HCkFtp2 cHandle, const char *localRoot, int mode);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_SyncRemoteTree(HCkFtp2 cHandle, const char *localRoot, int mode);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SyncRemoteTreeAsync(HCkFtp2 cHandle, const char *localRoot, int mode);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2_SyncRemoteTree2(HCkFtp2 cHandle, const char *localDirPath, int mode, BOOL bDescend, BOOL bPreviewOnly);

CK_C_VISIBLE_PUBLIC HCkTask
CkFtp2_SyncRemoteTree2Async(HCkFtp2 cHandle, const char *localDirPath, int mode, BOOL bDescend, BOOL bPreviewOnly);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_Syst(HCkFtp2 cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkFtp2_syst(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkFtp2_SystAsync(HCkFtp2 cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2_UnlockComponent(HCkFtp2 cHandle, const char *unlockCode);

#endif
