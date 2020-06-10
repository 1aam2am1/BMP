// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkSFtpWH
#define _C_CkSFtpWH

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkSFtpW_setAbortCheck(HCkSFtpW cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkSFtpW_setPercentDone(HCkSFtpW cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkSFtpW_setProgressInfo(HCkSFtpW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));

CK_C_VISIBLE_PUBLIC void CkSFtpW_setTaskCompleted(HCkSFtpW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkSFtpW CkSFtpW_Create(void);

CK_C_VISIBLE_PUBLIC void CkSFtpW_Dispose(HCkSFtpW handle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getAbortCurrent(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putAbortCurrent(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getAccumulateBuffer(HCkSFtpW cHandle, HCkByteData retval);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getAuthFailReason(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getBandwidthThrottleDown(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putBandwidthThrottleDown(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getBandwidthThrottleUp(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putBandwidthThrottleUp(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getClientIdentifier(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putClientIdentifier(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_clientIdentifier(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getClientIpAddress(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putClientIpAddress(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_clientIpAddress(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getConnectTimeoutMs(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putConnectTimeoutMs(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getDebugLogFilePath(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putDebugLogFilePath(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_debugLogFilePath(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getDisconnectCode(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getDisconnectReason(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_disconnectReason(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getEnableCache(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putEnableCache(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getEnableCompression(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putEnableCompression(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getFilenameCharset(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putFilenameCharset(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_filenameCharset(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getForceCipher(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putForceCipher(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_forceCipher(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getForceV3(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putForceV3(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getHeartbeatMs(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHeartbeatMs(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHostKeyAlg(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHostKeyAlg(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_hostKeyAlg(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHostKeyFingerprint(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_hostKeyFingerprint(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHttpProxyAuthMethod(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHttpProxyAuthMethod(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_httpProxyAuthMethod(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHttpProxyDomain(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHttpProxyDomain(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_httpProxyDomain(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHttpProxyHostname(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHttpProxyHostname(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_httpProxyHostname(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHttpProxyPassword(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHttpProxyPassword(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_httpProxyPassword(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getHttpProxyPort(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHttpProxyPort(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getHttpProxyUsername(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putHttpProxyUsername(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_httpProxyUsername(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getIdleTimeoutMs(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putIdleTimeoutMs(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getIncludeDotDirs(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putIncludeDotDirs(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getInitializeFailCode(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getInitializeFailReason(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_initializeFailReason(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getIsConnected(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getKeepSessionLog(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putKeepSessionLog(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getLastErrorHtml(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_lastErrorHtml(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getLastErrorText(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_lastErrorText(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getLastErrorXml(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_lastErrorXml(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getLastMethodSuccess(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putLastMethodSuccess(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getMaxPacketSize(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putMaxPacketSize(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getPasswordChangeRequested(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getPercentDoneScale(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putPercentDoneScale(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getPreferIpv6(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putPreferIpv6(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getPreserveDate(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putPreserveDate(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getProtocolVersion(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getReadDirMustMatch(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putReadDirMustMatch(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_readDirMustMatch(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getReadDirMustNotMatch(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putReadDirMustNotMatch(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_readDirMustNotMatch(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getServerIdentifier(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_serverIdentifier(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSessionLog(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_sessionLog(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSocksHostname(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSocksHostname(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_socksHostname(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSocksPassword(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSocksPassword(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_socksPassword(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getSocksPort(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSocksPort(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSocksUsername(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSocksUsername(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_socksUsername(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getSocksVersion(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSocksVersion(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getSoRcvBuf(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSoRcvBuf(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getSoSndBuf(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSoSndBuf(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getSyncCreateAllLocalDirs(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncCreateAllLocalDirs(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSyncDirectives(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncDirectives(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_syncDirectives(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSyncedFiles(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncedFiles(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_syncedFiles(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSyncMustMatch(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncMustMatch(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_syncMustMatch(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSyncMustMatchDir(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncMustMatchDir(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_syncMustMatchDir(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSyncMustNotMatch(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncMustNotMatch(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_syncMustNotMatch(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getSyncMustNotMatchDir(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putSyncMustNotMatchDir(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_syncMustNotMatchDir(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getTcpNoDelay(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putTcpNoDelay(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getUncommonOptions(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putUncommonOptions(HCkSFtpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_uncommonOptions(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_getUploadChunkSize(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putUploadChunkSize(HCkSFtpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getUtcMode(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putUtcMode(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_getVerboseLogging(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_putVerboseLogging(HCkSFtpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkSFtpW_getVersion(HCkSFtpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_version(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC unsigned long CkSFtpW_getXferByteCount(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC __int64 CkSFtpW_getXferByteCount64(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_AccumulateBytes(HCkSFtpW cHandle, const wchar_t *handle, int maxBytes);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_AccumulateBytesAsync(HCkSFtpW cHandle, const wchar_t *handle, int maxBytes);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_Add64(HCkSFtpW cHandle, const wchar_t *n1, const wchar_t *n2, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_add64(HCkSFtpW cHandle, const wchar_t *n1, const wchar_t *n2);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_AuthenticatePk(HCkSFtpW cHandle, const wchar_t *username, HCkSshKeyW privateKey);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_AuthenticatePkAsync(HCkSFtpW cHandle, const wchar_t *username, HCkSshKeyW privateKey);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_AuthenticatePw(HCkSFtpW cHandle, const wchar_t *login, const wchar_t *password);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_AuthenticatePwAsync(HCkSFtpW cHandle, const wchar_t *login, const wchar_t *password);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_AuthenticatePwPk(HCkSFtpW cHandle, const wchar_t *username, const wchar_t *password, HCkSshKeyW privateKey);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_AuthenticatePwPkAsync(HCkSFtpW cHandle, const wchar_t *username, const wchar_t *password,
                              HCkSshKeyW privateKey);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_AuthenticateSecPw(HCkSFtpW cHandle, HCkSecureStringW login, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_AuthenticateSecPwAsync(HCkSFtpW cHandle, HCkSecureStringW login, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_AuthenticateSecPwPk(HCkSFtpW cHandle, HCkSecureStringW username, HCkSecureStringW password,
                            HCkSshKeyW privateKey);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_AuthenticateSecPwPkAsync(HCkSFtpW cHandle, HCkSecureStringW username, HCkSecureStringW password,
                                 HCkSshKeyW privateKey);

CK_C_VISIBLE_PUBLIC void CkSFtpW_ClearAccumulateBuffer(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_ClearCache(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC void CkSFtpW_ClearSessionLog(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_CloseHandle(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_CloseHandleAsync(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_Connect(HCkSFtpW cHandle, const wchar_t *domainName, int port);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_ConnectAsync(HCkSFtpW cHandle, const wchar_t *domainName, int port);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ConnectThroughSsh(HCkSFtpW cHandle, HCkSshW sshConn, const wchar_t *hostname, int port);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_ConnectThroughSshAsync(HCkSFtpW cHandle, HCkSshW sshConn, const wchar_t *hostname, int port);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_CopyFileAttr(HCkSFtpW cHandle, const wchar_t *localFilename, const wchar_t *remoteFilename, BOOL isHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_CopyFileAttrAsync(HCkSFtpW cHandle, const wchar_t *localFilename, const wchar_t *remoteFilename, BOOL isHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_CreateDir(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_CreateDirAsync(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC void CkSFtpW_Disconnect(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_DownloadBd(HCkSFtpW cHandle, const wchar_t *remoteFilePath, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_DownloadBdAsync(HCkSFtpW cHandle, const wchar_t *remoteFilePath, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_DownloadFile(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *toFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_DownloadFileAsync(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *toFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_DownloadFileByName(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_DownloadFileByNameAsync(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_DownloadSb(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *charset, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_DownloadSbAsync(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *charset, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_Eof(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_FileExists(HCkSFtpW cHandle, const wchar_t *remotePath, BOOL followLinks);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_FileExistsAsync(HCkSFtpW cHandle, const wchar_t *remotePath, BOOL followLinks);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_Fsync(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_FsyncAsync(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC HCkDateTimeW
CkSFtpW_GetFileCreateDt(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileCreateDtAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileCreateTime(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                          SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileCreateTimeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                             HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_getFileCreateTimeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileCreateTimeStrAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileGroup(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                     HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_getFileGroup(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileGroupAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileLastAccess(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                          SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC HCkDateTimeW
CkSFtpW_GetFileLastAccessDt(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileLastAccessDtAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileLastAccessStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                             HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_getFileLastAccessStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileLastAccessStrAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileLastModified(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                            SYSTEMTIME *outSysTime);

CK_C_VISIBLE_PUBLIC HCkDateTimeW
CkSFtpW_GetFileLastModifiedDt(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileLastModifiedDtAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileLastModifiedStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                               HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_getFileLastModifiedStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileLastModifiedStrAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileOwner(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                     HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_getFileOwner(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFileOwnerAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC int
CkSFtpW_GetFilePermissions(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_GetFilePermissionsAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC int
CkSFtpW_GetFileSize32(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC __int64 CkSFtpW_GetFileSize64(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks,
                                                  BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_GetFileSizeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle,
                       HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_getFileSizeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_HardLink(HCkSFtpW cHandle, const wchar_t *oldPath, const wchar_t *newPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_HardLinkAsync(HCkSFtpW cHandle, const wchar_t *oldPath, const wchar_t *newPath);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_InitializeSftp(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_InitializeSftpAsync(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC HCkJsonObjectW CkSFtpW_LastJsonData(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_LastReadFailed(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC int CkSFtpW_LastReadNumBytes(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_LoadTaskCaller(HCkSFtpW cHandle, HCkTaskW task);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_OpenDir(HCkSFtpW cHandle, const wchar_t *path, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_openDir(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_OpenDirAsync(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_OpenFile(HCkSFtpW cHandle, const wchar_t *remotePath, const wchar_t *access, const wchar_t *createDisposition,
                 HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_openFile(HCkSFtpW cHandle, const wchar_t *remotePath, const wchar_t *access, const wchar_t *createDisposition);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_OpenFileAsync(HCkSFtpW cHandle, const wchar_t *remotePath, const wchar_t *access,
                                                   const wchar_t *createDisposition);

CK_C_VISIBLE_PUBLIC HCkSFtpDirW CkSFtpW_ReadDir(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_ReadDirAsync(HCkSFtpW cHandle, const wchar_t *handle);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_ReadFileBd(HCkSFtpW cHandle, const wchar_t *handle, int numBytes, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_ReadFileBdAsync(HCkSFtpW cHandle, const wchar_t *handle, int numBytes, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileBytes(HCkSFtpW cHandle, const wchar_t *handle, int numBytes, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_ReadFileBytesAsync(HCkSFtpW cHandle, const wchar_t *handle, int numBytes);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileBytes32(HCkSFtpW cHandle, const wchar_t *handle, int offset, int numBytes, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileBytes64(HCkSFtpW cHandle, const wchar_t *handle, __int64 offset, int numBytes, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileBytes64s(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *offset, int numBytes,
                         HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileText(HCkSFtpW cHandle, const wchar_t *handle, int numBytes, const wchar_t *charset, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_readFileText(HCkSFtpW cHandle, const wchar_t *handle, int numBytes, const wchar_t *charset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_ReadFileTextAsync(HCkSFtpW cHandle, const wchar_t *handle, int numBytes, const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileText32(HCkSFtpW cHandle, const wchar_t *handle, int offset, int numBytes, const wchar_t *charset,
                       HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_readFileText32(HCkSFtpW cHandle, const wchar_t *handle, int offset, int numBytes, const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileText64(HCkSFtpW cHandle, const wchar_t *handle, __int64 offset, int numBytes, const wchar_t *charset,
                       HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_readFileText64(HCkSFtpW cHandle, const wchar_t *handle, __int64 offset, int numBytes, const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ReadFileText64s(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *offset, int numBytes,
                        const wchar_t *charset, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_readFileText64s(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *offset, int numBytes,
                        const wchar_t *charset);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_ReadLink(HCkSFtpW cHandle, const wchar_t *path, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkSFtpW_readLink(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_ReadLinkAsync(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_RealPath(HCkSFtpW cHandle, const wchar_t *originalPath, const wchar_t *composePath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkSFtpW_realPath(HCkSFtpW cHandle, const wchar_t *originalPath, const wchar_t *composePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_RealPathAsync(HCkSFtpW cHandle, const wchar_t *originalPath, const wchar_t *composePath);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_RemoveDir(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_RemoveDirAsync(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_RemoveFile(HCkSFtpW cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_RemoveFileAsync(HCkSFtpW cHandle, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_RenameFileOrDir(HCkSFtpW cHandle, const wchar_t *oldPath, const wchar_t *newPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_RenameFileOrDirAsync(HCkSFtpW cHandle, const wchar_t *oldPath, const wchar_t *newPath);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ResumeDownloadFileByName(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_ResumeDownloadFileByNameAsync(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_ResumeUploadFileByName(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_ResumeUploadFileByNameAsync(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_SaveLastError(HCkSFtpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_SendIgnore(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_SendIgnoreAsync(HCkSFtpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetCreateDt(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, HCkDateTimeW createDateTime);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetCreateDtAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, HCkDateTimeW createDateTime);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetCreateTime(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, SYSTEMTIME *createDateTime);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetCreateTimeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bIsHandle, const wchar_t *dateTimeStr);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetCreateTimeStrAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bIsHandle,
                              const wchar_t *dateTimeStr);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetLastAccessDt(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, HCkDateTimeW accessDateTime);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetLastAccessDtAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, HCkDateTimeW accessDateTime);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetLastAccessTime(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, SYSTEMTIME *accessDateTime);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetLastAccessTimeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bIsHandle, const wchar_t *dateTimeStr);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetLastAccessTimeStrAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bIsHandle,
                                  const wchar_t *dateTimeStr);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetLastModifiedDt(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, HCkDateTimeW modifiedDateTime);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetLastModifiedDtAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle,
                               HCkDateTimeW modifiedDateTime);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetLastModifiedTime(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, SYSTEMTIME *modifiedDateTime);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_SetLastModifiedTimeStr(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bIsHandle,
                                                        const wchar_t *dateTimeStr);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetLastModifiedTimeStrAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL bIsHandle,
                                    const wchar_t *dateTimeStr);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetOwnerAndGroup(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, const wchar_t *owner,
                         const wchar_t *group);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetOwnerAndGroupAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, const wchar_t *owner,
                              const wchar_t *group);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SetPermissions(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, int permissions);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SetPermissionsAsync(HCkSFtpW cHandle, const wchar_t *pathOrHandle, BOOL isHandle, int permissions);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_SymLink(HCkSFtpW cHandle, const wchar_t *oldPath, const wchar_t *newPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_SymLinkAsync(HCkSFtpW cHandle, const wchar_t *oldPath, const wchar_t *newPath);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SyncTreeDownload(HCkSFtpW cHandle, const wchar_t *remoteRoot, const wchar_t *localRoot, int mode, BOOL recurse);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SyncTreeDownloadAsync(HCkSFtpW cHandle, const wchar_t *remoteRoot, const wchar_t *localRoot, int mode,
                              BOOL recurse);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_SyncTreeUpload(HCkSFtpW cHandle, const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode,
                       BOOL bRecurse);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_SyncTreeUploadAsync(HCkSFtpW cHandle, const wchar_t *localBaseDir, const wchar_t *remoteBaseDir, int mode,
                            BOOL bRecurse);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_UnlockComponent(HCkSFtpW cHandle, const wchar_t *unlockCode);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_UploadBd(HCkSFtpW cHandle, HCkBinDataW binData, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_UploadBdAsync(HCkSFtpW cHandle, HCkBinDataW binData, const wchar_t *remoteFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_UploadFile(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *fromLocalFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_UploadFileAsync(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *fromLocalFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_UploadFileByName(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_UploadFileByNameAsync(HCkSFtpW cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_UploadSb(HCkSFtpW cHandle, HCkStringBuilderW sb, const wchar_t *remoteFilePath, const wchar_t *charset,
                 BOOL includeBom);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_UploadSbAsync(HCkSFtpW cHandle, HCkStringBuilderW sb, const wchar_t *remoteFilePath, const wchar_t *charset,
                      BOOL includeBom);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_WriteFileBd(HCkSFtpW cHandle, const wchar_t *handle, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_WriteFileBdAsync(HCkSFtpW cHandle, const wchar_t *handle, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC BOOL CkSFtpW_WriteFileBytes(HCkSFtpW cHandle, const wchar_t *handle, HCkByteData byteData);

CK_C_VISIBLE_PUBLIC HCkTaskW CkSFtpW_WriteFileBytesAsync(HCkSFtpW cHandle, const wchar_t *handle, HCkByteData byteData);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileBytes32(HCkSFtpW cHandle, const wchar_t *handle, int offset, HCkByteData data);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileBytes64(HCkSFtpW cHandle, const wchar_t *handle, __int64 offset64, HCkByteData data);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileBytes64s(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *offset64, HCkByteData data);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileText(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *charset, const wchar_t *textData);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkSFtpW_WriteFileTextAsync(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *charset, const wchar_t *textData);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileText32(HCkSFtpW cHandle, const wchar_t *handle, int offset32, const wchar_t *charset,
                        const wchar_t *textData);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileText64(HCkSFtpW cHandle, const wchar_t *handle, __int64 offset64, const wchar_t *charset,
                        const wchar_t *textData);

CK_C_VISIBLE_PUBLIC BOOL
CkSFtpW_WriteFileText64s(HCkSFtpW cHandle, const wchar_t *handle, const wchar_t *offset64, const wchar_t *charset,
                         const wchar_t *textData);

#endif
