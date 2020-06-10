// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkFtp2WH
#define _C_CkFtp2WH

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkFtp2W_setAbortCheck(HCkFtp2W cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkFtp2W_setPercentDone(HCkFtp2W cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkFtp2W_setProgressInfo(HCkFtp2W cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));

CK_C_VISIBLE_PUBLIC void CkFtp2W_setTaskCompleted(HCkFtp2W cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkFtp2W CkFtp2W_Create(void);

CK_C_VISIBLE_PUBLIC void CkFtp2W_Dispose(HCkFtp2W handle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAbortCurrent(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAbortCurrent(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getAccount(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAccount(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_account(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getActivePortRangeEnd(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putActivePortRangeEnd(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getActivePortRangeStart(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putActivePortRangeStart(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2W_getAllocateSize(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAllocateSize(HCkFtp2W cHandle, unsigned long newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAllowMlsd(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAllowMlsd(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2W_getAsyncBytesReceived(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2W_getAsyncBytesReceived64(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getAsyncBytesReceivedStr(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_asyncBytesReceivedStr(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC unsigned long CkFtp2W_getAsyncBytesSent(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2W_getAsyncBytesSent64(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getAsyncBytesSentStr(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_asyncBytesSentStr(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAuthSsl(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAuthSsl(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAuthTls(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAuthTls(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoFeat(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoFeat(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoFix(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoFix(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoGetSizeForProgress(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoGetSizeForProgress(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoOptsUtf8(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoOptsUtf8(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoSetUseEpsv(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoSetUseEpsv(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoSyst(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoSyst(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoXcrc(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putAutoXcrc(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getBandwidthThrottleDown(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putBandwidthThrottleDown(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getBandwidthThrottleUp(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putBandwidthThrottleUp(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getClientIpAddress(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putClientIpAddress(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_clientIpAddress(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getCommandCharset(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putCommandCharset(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_commandCharset(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getConnectFailReason(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getConnectTimeout(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putConnectTimeout(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getConnectVerified(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getCrlfMode(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putCrlfMode(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getDataProtection(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putDataProtection(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_dataProtection(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getDebugLogFilePath(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putDebugLogFilePath(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_debugLogFilePath(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getDirListingCharset(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putDirListingCharset(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_dirListingCharset(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getDownloadTransferRate(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getForcePortIpAddress(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putForcePortIpAddress(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_forcePortIpAddress(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getGreeting(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_greeting(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getHasModeZ(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getHeartbeatMs(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHeartbeatMs(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getHostname(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHostname(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_hostname(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyAuthMethod(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyAuthMethod(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyAuthMethod(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyDomain(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyDomain(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyDomain(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyHostname(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyHostname(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyHostname(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyPassword(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyPassword(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyPassword(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getHttpProxyPort(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyPort(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyUsername(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyUsername(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyUsername(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getIdleTimeoutMs(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putIdleTimeoutMs(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getIsConnected(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getKeepSessionLog(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putKeepSessionLog(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getLargeFileMeasures(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putLargeFileMeasures(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getLastErrorHtml(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastErrorHtml(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getLastErrorText(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastErrorText(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getLastErrorXml(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastErrorXml(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getLastMethodSuccess(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putLastMethodSuccess(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getLastReply(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastReply(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getListPattern(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putListPattern(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_listPattern(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getLoginVerified(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getNumFilesAndDirs(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getPartialTransfer(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getPassive(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPassive(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getPassiveUseHostAddr(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPassiveUseHostAddr(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getPassword(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPassword(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_password(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getPercentDoneScale(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPercentDoneScale(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getPort(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPort(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getPreferIpv6(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPreferIpv6(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getPreferNlst(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putPreferNlst(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getProgressMonSize(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProgressMonSize(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2W_getProgressMonSize64(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProgressMonSize64(HCkFtp2W cHandle, __int64 newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getProxyHostname(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProxyHostname(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_proxyHostname(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getProxyMethod(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProxyMethod(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getProxyPassword(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProxyPassword(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_proxyPassword(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getProxyPort(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProxyPort(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getProxyUsername(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putProxyUsername(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_proxyUsername(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getReadTimeout(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putReadTimeout(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getRequireSslCertVerify(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putRequireSslCertVerify(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getRestartNext(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putRestartNext(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSessionLog(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sessionLog(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSocksHostname(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSocksHostname(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_socksHostname(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSocksPassword(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSocksPassword(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_socksPassword(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getSocksPort(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSocksPort(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSocksUsername(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSocksUsername(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_socksUsername(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getSocksVersion(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSocksVersion(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getSoRcvBuf(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSoRcvBuf(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getSoSndBuf(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSoSndBuf(HCkFtp2W cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getSsl(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSsl(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSslAllowedCiphers(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSslAllowedCiphers(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sslAllowedCiphers(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSslProtocol(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSslProtocol(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sslProtocol(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getSslServerCertVerified(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getSyncCreateAllLocalDirs(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSyncCreateAllLocalDirs(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSyncedFiles(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSyncedFiles(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncedFiles(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSyncMustMatch(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSyncMustMatch(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncMustMatch(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSyncMustMatchDir(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSyncMustMatchDir(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncMustMatchDir(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSyncMustNotMatch(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSyncMustNotMatch(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncMustNotMatch(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSyncMustNotMatchDir(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putSyncMustNotMatchDir(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncMustNotMatchDir(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getSyncPreview(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncPreview(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getTlsCipherSuite(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_tlsCipherSuite(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getTlsPinSet(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putTlsPinSet(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_tlsPinSet(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getTlsVersion(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_tlsVersion(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getUncommonOptions(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putUncommonOptions(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_uncommonOptions(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_getUploadTransferRate(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getUseEpsv(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putUseEpsv(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getUsername(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putUsername(HCkFtp2W cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_username(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_getVerboseLogging(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_putVerboseLogging(HCkFtp2W cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkFtp2W_getVersion(HCkFtp2W cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_version(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_AppendFile(HCkFtp2W cHandle, const wchar_t *localFilePath, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_AppendFileAsync(HCkFtp2W cHandle, const wchar_t *localFilePath, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_AppendFileFromBinaryData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_AppendFileFromBinaryDataAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_AppendFileFromTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *textData,
                               const wchar_t *charset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_AppendFileFromTextDataAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *textData,
                                    const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_ChangeRemoteDir(HCkFtp2W cHandle, const wchar_t *remoteDirPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_ChangeRemoteDirAsync(HCkFtp2W cHandle, const wchar_t *remoteDirPath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_CheckConnection(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_CheckConnectionAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_ClearControlChannel(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_ClearControlChannelAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_ClearDirCache(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_ClearSessionLog(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Connect(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_ConnectAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_ConnectOnly(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_ConnectOnlyAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_ConvertToTls(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_ConvertToTlsAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_CreatePlan(HCkFtp2W cHandle, const wchar_t *localDir, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_createPlan(HCkFtp2W cHandle, const wchar_t *localDir);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_CreatePlanAsync(HCkFtp2W cHandle, const wchar_t *localDir);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_CreateRemoteDir(HCkFtp2W cHandle, const wchar_t *remoteDirPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_CreateRemoteDirAsync(HCkFtp2W cHandle, const wchar_t *remoteDirPath);

CK_C_VISIBLE_PUBLIC int CkFtp2W_DeleteMatching(HCkFtp2W cHandle, const wchar_t *remotePattern);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DeleteMatchingAsync(HCkFtp2W cHandle, const wchar_t *remotePattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_DeleteRemoteFile(HCkFtp2W cHandle, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DeleteRemoteFileAsync(HCkFtp2W cHandle, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_DeleteTree(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DeleteTreeAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_DetermineProxyMethod(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DetermineProxyMethodAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_DetermineSettings(HCkFtp2W cHandle, HCkString outXmlReport);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_determineSettings(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DetermineSettingsAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_DirTreeXml(HCkFtp2W cHandle, HCkString outStrXml);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_dirTreeXml(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DirTreeXmlAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Disconnect(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DisconnectAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_DownloadTree(HCkFtp2W cHandle, const wchar_t *localRoot);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_DownloadTreeAsync(HCkFtp2W cHandle, const wchar_t *localRoot);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Feat(HCkFtp2W cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_feat(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_FeatAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetCreateDt(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetCreateDtAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetCreateDtByName(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetCreateDtByNameAsync(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTime(HCkFtp2W cHandle, int index, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTimeByName(HCkFtp2W cHandle, const wchar_t *filename, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getCreateTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetCreateTimeByNameStrAsync(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTimeStr(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getCreateTimeStr(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetCreateTimeStrAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetCurrentRemoteDir(HCkFtp2W cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getCurrentRemoteDir(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetCurrentRemoteDirAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_GetDirCount(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetDirCountAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetFile(HCkFtp2W cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_GetFileAsync(HCkFtp2W cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetFileBd(HCkFtp2W cHandle, const wchar_t *remoteFilePath, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_GetFileBdAsync(HCkFtp2W cHandle, const wchar_t *remoteFilePath, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetFilename(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getFilename(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetFilenameAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetFileSb(HCkFtp2W cHandle, const wchar_t *remoteFilePath, const wchar_t *charset, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_GetFileSbAsync(HCkFtp2W cHandle, const wchar_t *remoteFilePath, const wchar_t *charset, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetFileToStream(HCkFtp2W cHandle, const wchar_t *remoteFilePath, HCkStreamW toStream);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_GetFileToStreamAsync(HCkFtp2W cHandle, const wchar_t *remoteFilePath, HCkStreamW toStream);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetGroup(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getGroup(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetGroupAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetIsDirectory(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetIsDirectoryAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetIsSymbolicLink(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetIsSymbolicLinkAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetLastModDt(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetLastModDtAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetLastModDtByName(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetLastModDtByNameAsync(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastModifiedTime(HCkFtp2W cHandle, int index, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetLastModifiedTimeByName(HCkFtp2W cHandle, const wchar_t *filename, SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetLastModifiedTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getLastModifiedTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetLastModifiedTimeByNameStrAsync(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastModifiedTimeStr(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getLastModifiedTimeStr(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetLastModifiedTimeStrAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetOwner(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getOwner(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetOwnerAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetPermissions(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getPermissions(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetPermissionsAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetPermType(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getPermType(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetPermTypeAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetRemoteFileBinaryData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData outData);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetRemoteFileBinaryDataAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetRemoteFileTextC(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *charset, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkFtp2W_getRemoteFileTextC(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *charset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_GetRemoteFileTextCAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetRemoteFileTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getRemoteFileTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetRemoteFileTextDataAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC int CkFtp2W_GetSize(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetSizeAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2W_GetSize64(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC int CkFtp2W_GetSizeByName(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetSizeByNameAsync(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC __int64 CkFtp2W_GetSizeByName64(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetSizeStr(HCkFtp2W cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getSizeStr(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetSizeStrAsync(HCkFtp2W cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetSizeStrByName(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getSizeStrByName(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetSizeStrByNameAsync(HCkFtp2W cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkCertW CkFtp2W_GetSslServerCert(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_GetTextDirListing(HCkFtp2W cHandle, const wchar_t *pattern, HCkString outStrRawListing);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getTextDirListing(HCkFtp2W cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetTextDirListingAsync(HCkFtp2W cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_GetXmlDirListing(HCkFtp2W cHandle, const wchar_t *pattern, HCkString outStrXmlListing);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getXmlDirListing(HCkFtp2W cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_GetXmlDirListingAsync(HCkFtp2W cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_IsUnlocked(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_LargeFileUpload(HCkFtp2W cHandle, const wchar_t *localPath, const wchar_t *remotePath, int chunkSize);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_LargeFileUploadAsync(HCkFtp2W cHandle, const wchar_t *localPath, const wchar_t *remotePath, int chunkSize);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_LoadTaskCaller(HCkFtp2W cHandle, HCkTaskW task);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_LoginAfterConnectOnly(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_LoginAfterConnectOnlyAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC int CkFtp2W_MGetFiles(HCkFtp2W cHandle, const wchar_t *remotePattern, const wchar_t *localDir);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_MGetFilesAsync(HCkFtp2W cHandle, const wchar_t *remotePattern, const wchar_t *localDir);

CK_C_VISIBLE_PUBLIC int CkFtp2W_MPutFiles(HCkFtp2W cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_MPutFilesAsync(HCkFtp2W cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_NlstXml(HCkFtp2W cHandle, const wchar_t *remoteDirPattern, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_nlstXml(HCkFtp2W cHandle, const wchar_t *remoteDirPattern);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_NlstXmlAsync(HCkFtp2W cHandle, const wchar_t *remoteDirPattern);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Noop(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_NoopAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_PutFile(HCkFtp2W cHandle, const wchar_t *localFilePath, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_PutFileAsync(HCkFtp2W cHandle, const wchar_t *localFilePath, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_PutFileBd(HCkFtp2W cHandle, HCkBinDataW binData, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_PutFileBdAsync(HCkFtp2W cHandle, HCkBinDataW binData, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_PutFileFromBinaryData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_PutFileFromBinaryDataAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData content);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_PutFileFromTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *textData,
                            const wchar_t *charset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_PutFileFromTextDataAsync(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *textData,
                                 const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_PutFileSb(HCkFtp2W cHandle, HCkStringBuilderW sb, const wchar_t *charset, BOOL includeBom,
                  const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_PutFileSbAsync(HCkFtp2W cHandle, HCkStringBuilderW sb, const wchar_t *charset, BOOL includeBom,
                       const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_PutPlan(HCkFtp2W cHandle, const wchar_t *plan, const wchar_t *alreadyDoneFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_PutPlanAsync(HCkFtp2W cHandle, const wchar_t *plan, const wchar_t *alreadyDoneFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_PutTree(HCkFtp2W cHandle, const wchar_t *localDir);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_PutTreeAsync(HCkFtp2W cHandle, const wchar_t *localDir);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Quote(HCkFtp2W cHandle, const wchar_t *cmd);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_QuoteAsync(HCkFtp2W cHandle, const wchar_t *cmd);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_RemoveRemoteDir(HCkFtp2W cHandle, const wchar_t *remoteDirPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_RemoveRemoteDirAsync(HCkFtp2W cHandle, const wchar_t *remoteDirPath);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_RenameRemoteFile(HCkFtp2W cHandle, const wchar_t *existingRemoteFilePath, const wchar_t *newRemoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_RenameRemoteFileAsync(HCkFtp2W cHandle, const wchar_t *existingRemoteFilePath,
                                                           const wchar_t *newRemoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SaveLastError(HCkFtp2W cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SendCommand(HCkFtp2W cHandle, const wchar_t *cmd, HCkString outReply);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sendCommand(HCkFtp2W cHandle, const wchar_t *cmd);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SendCommandAsync(HCkFtp2W cHandle, const wchar_t *cmd);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetModeZ(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SetModeZAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC void CkFtp2W_SetOldestDate(HCkFtp2W cHandle, SYSTEMTIME *oldestDateTime);

CK_C_VISIBLE_PUBLIC void CkFtp2W_SetOldestDateStr(HCkFtp2W cHandle, const wchar_t *oldestDateTimeStr);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetOption(HCkFtp2W cHandle, const wchar_t *option);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetPassword(HCkFtp2W cHandle, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetRemoteFileDateTime(HCkFtp2W cHandle, SYSTEMTIME *dt, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_SetRemoteFileDateTimeStr(HCkFtp2W cHandle, const wchar_t *dateTimeStr, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_SetRemoteFileDateTimeStrAsync(HCkFtp2W cHandle, const wchar_t *dateTimeStr, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetRemoteFileDt(HCkFtp2W cHandle, HCkDateTimeW dt, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_SetRemoteFileDtAsync(HCkFtp2W cHandle, HCkDateTimeW dt, const wchar_t *remoteFilename);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetSecurePassword(HCkFtp2W cHandle, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC void
CkFtp2W_SetSslCertRequirement(HCkFtp2W cHandle, const wchar_t *reqName, const wchar_t *reqValue);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetSslClientCert(HCkFtp2W cHandle, HCkCertW cert);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_SetSslClientCertPem(HCkFtp2W cHandle, const wchar_t *pemDataOrFilename, const wchar_t *pemPassword);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_SetSslClientCertPfx(HCkFtp2W cHandle, const wchar_t *pfxFilename, const wchar_t *pfxPassword);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetTypeAscii(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SetTypeAsciiAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SetTypeBinary(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SetTypeBinaryAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Site(HCkFtp2W cHandle, const wchar_t *siteCommand);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SiteAsync(HCkFtp2W cHandle, const wchar_t *siteCommand);

CK_C_VISIBLE_PUBLIC void CkFtp2W_SleepMs(HCkFtp2W cHandle, int millisec);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Stat(HCkFtp2W cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_stat(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_StatAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SyncDeleteRemote(HCkFtp2W cHandle, const wchar_t *localRoot);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SyncDeleteRemoteAsync(HCkFtp2W cHandle, const wchar_t *localRoot);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SyncLocalDir(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SyncLocalDirAsync(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SyncLocalTree(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SyncLocalTreeAsync(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_SyncRemoteTree(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SyncRemoteTreeAsync(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);

CK_C_VISIBLE_PUBLIC BOOL
CkFtp2W_SyncRemoteTree2(HCkFtp2W cHandle, const wchar_t *localDirPath, int mode, BOOL bDescend, BOOL bPreviewOnly);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkFtp2W_SyncRemoteTree2Async(HCkFtp2W cHandle, const wchar_t *localDirPath, int mode, BOOL bDescend, BOOL bPreviewOnly);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_Syst(HCkFtp2W cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syst(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkFtp2W_SystAsync(HCkFtp2W cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkFtp2W_UnlockComponent(HCkFtp2W cHandle, const wchar_t *unlockCode);

#endif
