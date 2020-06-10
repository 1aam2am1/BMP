// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkHttp_H
#define _C_CkHttp_H

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkHttp_setAbortCheck(HCkHttp cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkHttp_setPercentDone(HCkHttp cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkHttp_setProgressInfo(HCkHttp cHandle, void (*fnProgressInfo)(const char *name, const char *value));

CK_C_VISIBLE_PUBLIC void CkHttp_setTaskCompleted(HCkHttp cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkHttp_setAbortCheck2(HCkHttp cHandle, BOOL (*fnAbortCheck2)(void *pContext));

CK_C_VISIBLE_PUBLIC void CkHttp_setPercentDone2(HCkHttp cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));

CK_C_VISIBLE_PUBLIC void
CkHttp_setProgressInfo2(HCkHttp cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));

CK_C_VISIBLE_PUBLIC void
CkHttp_setTaskCompleted2(HCkHttp cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkHttp_setExternalProgress(HCkHttp cHandle, BOOL on);

CK_C_VISIBLE_PUBLIC void CkHttp_setCallbackContext(HCkHttp cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkHttp CkHttp_Create(void);

CK_C_VISIBLE_PUBLIC void CkHttp_Dispose(HCkHttp handle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getAbortCurrent(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putAbortCurrent(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getAccept(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAccept(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_accept(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getAcceptCharset(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAcceptCharset(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_acceptCharset(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getAcceptLanguage(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAcceptLanguage(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_acceptLanguage(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getAllowGzip(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putAllowGzip(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getAllowHeaderFolding(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putAllowHeaderFolding(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getAuthToken(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAuthToken(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_authToken(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getAutoAddHostHeader(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putAutoAddHostHeader(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getAwsAccessKey(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAwsAccessKey(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_awsAccessKey(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getAwsEndpoint(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAwsEndpoint(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_awsEndpoint(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getAwsRegion(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAwsRegion(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_awsRegion(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getAwsSecretKey(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAwsSecretKey(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_awsSecretKey(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getAwsSignatureVersion(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putAwsSignatureVersion(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getAwsSubResources(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putAwsSubResources(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_awsSubResources(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getBandwidthThrottleDown(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putBandwidthThrottleDown(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getBandwidthThrottleUp(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putBandwidthThrottleUp(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getBasicAuth(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putBasicAuth(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getBgLastErrorText(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_bgLastErrorText(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getBgPercentDone(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getBgResultData(HCkHttp cHandle, HCkByteData retval);

CK_C_VISIBLE_PUBLIC int CkHttp_getBgResultInt(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getBgResultString(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_bgResultString(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getBgTaskFinished(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getBgTaskRunning(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getBgTaskSuccess(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getClientIpAddress(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putClientIpAddress(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_clientIpAddress(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getConnectFailReason(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getConnection(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putConnection(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_connection(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getConnectTimeout(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putConnectTimeout(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getCookieDir(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putCookieDir(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_cookieDir(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getDebugLogFilePath(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putDebugLogFilePath(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_debugLogFilePath(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getDefaultFreshPeriod(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putDefaultFreshPeriod(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getDigestAuth(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putDigestAuth(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getEventLogCount(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getFetchFromCache(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putFetchFromCache(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getFinalRedirectUrl(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_finalRedirectUrl(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getFollowRedirects(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putFollowRedirects(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getFreshnessAlgorithm(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putFreshnessAlgorithm(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getHeartbeatMs(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putHeartbeatMs(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getIgnoreMustRevalidate(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putIgnoreMustRevalidate(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getIgnoreNoCache(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putIgnoreNoCache(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getKeepEventLog(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putKeepEventLog(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getKeepResponseBody(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putKeepResponseBody(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastContentType(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastContentType(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastErrorHtml(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastErrorHtml(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastErrorText(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastErrorText(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastErrorXml(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastErrorXml(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastHeader(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastHeader(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getLastMethodSuccess(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putLastMethodSuccess(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastModDate(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastModDate(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastResponseBody(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastResponseBody(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastResponseHeader(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastResponseHeader(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getLastStatus(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLastStatusText(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_lastStatusText(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getLMFactor(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putLMFactor(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getLogin(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putLogin(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_login(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getLoginDomain(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putLoginDomain(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_loginDomain(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getMaxConnections(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMaxConnections(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getMaxFreshPeriod(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMaxFreshPeriod(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC unsigned long CkHttp_getMaxResponseSize(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMaxResponseSize(HCkHttp cHandle, unsigned long newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getMaxUrlLen(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMaxUrlLen(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getMimicFireFox(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMimicFireFox(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getMimicIE(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMimicIE(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getMinFreshPeriod(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putMinFreshPeriod(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getNegotiateAuth(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putNegotiateAuth(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getNtlmAuth(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putNtlmAuth(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getNumCacheLevels(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putNumCacheLevels(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getNumCacheRoots(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getOAuth1(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuth1(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthCallback(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthCallback(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthCallback(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthConsumerKey(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthConsumerKey(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthConsumerKey(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthConsumerSecret(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthConsumerSecret(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthConsumerSecret(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthRealm(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthRealm(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthRealm(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthSigMethod(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthSigMethod(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthSigMethod(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthToken(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthToken(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthToken(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthTokenSecret(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthTokenSecret(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthTokenSecret(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getOAuthVerifier(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putOAuthVerifier(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_oAuthVerifier(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getPassword(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putPassword(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_password(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getPercentDoneScale(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putPercentDoneScale(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getPreferIpv6(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putPreferIpv6(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getProxyAuthMethod(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putProxyAuthMethod(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_proxyAuthMethod(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getProxyDomain(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putProxyDomain(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_proxyDomain(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getProxyLogin(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putProxyLogin(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_proxyLogin(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getProxyLoginDomain(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putProxyLoginDomain(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_proxyLoginDomain(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getProxyPassword(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putProxyPassword(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_proxyPassword(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getProxyPort(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putProxyPort(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getReadTimeout(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putReadTimeout(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getRedirectVerb(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putRedirectVerb(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_redirectVerb(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getReferer(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putReferer(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_referer(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getRequiredContentType(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putRequiredContentType(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_requiredContentType(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getRequireSslCertVerify(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putRequireSslCertVerify(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getS3Ssl(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putS3Ssl(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getSaveCookies(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSaveCookies(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getSendBufferSize(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSendBufferSize(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getSendCookies(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSendCookies(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getSessionLogFilename(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSessionLogFilename(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_sessionLogFilename(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getSniHostname(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSniHostname(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_sniHostname(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getSocksHostname(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSocksHostname(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_socksHostname(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getSocksPassword(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSocksPassword(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_socksPassword(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getSocksPort(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSocksPort(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getSocksUsername(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSocksUsername(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_socksUsername(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC int CkHttp_getSocksVersion(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSocksVersion(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getSoRcvBuf(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSoRcvBuf(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttp_getSoSndBuf(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putSoSndBuf(HCkHttp cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getSslAllowedCiphers(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSslAllowedCiphers(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_sslAllowedCiphers(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getSslProtocol(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putSslProtocol(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_sslProtocol(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getStreamResponseBodyPath(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putStreamResponseBodyPath(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_streamResponseBodyPath(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getTlsCipherSuite(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_tlsCipherSuite(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getTlsPinSet(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putTlsPinSet(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_tlsPinSet(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getTlsVersion(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_tlsVersion(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_getUncommonOptions(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putUncommonOptions(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_uncommonOptions(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getUpdateCache(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putUpdateCache(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getUseBgThread(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putUseBgThread(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getUseIEProxy(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putUseIEProxy(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getUserAgent(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttp_putUserAgent(HCkHttp cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkHttp_userAgent(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getUtf8(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putUtf8(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getVerboseLogging(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_putVerboseLogging(HCkHttp cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttp_getVersion(HCkHttp cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkHttp_version(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_getWasRedirected(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_AddCacheRoot(HCkHttp cHandle, const char *dir);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_AddQuickHeader(HCkHttp cHandle, const char *headerFieldName, const char *headerFieldValue);

CK_C_VISIBLE_PUBLIC HCkHttpResponse CkHttp_BgResponseObject(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_BgTaskAbort(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_ClearBgEventLog(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_ClearHeaders(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_ClearInMemoryCookies(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC void CkHttp_ClearUrlVars(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_CloseAllConnections(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_CloseAllConnectionsAsync(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_CreateOcspRequest(HCkHttp cHandle, HCkJsonObject requestDetails, HCkBinData ocspRequest);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_CreateTimestampRequest(HCkHttp cHandle, const char *hashAlg, const char *hashVal, const char *reqPolicyOid,
                              BOOL addNonce, BOOL reqTsaCert, HCkBinData tmestampToken);

CK_C_VISIBLE_PUBLIC void CkHttp_DnsCacheClear(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_Download(HCkHttp cHandle, const char *url, const char *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_DownloadAsync(HCkHttp cHandle, const char *url, const char *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_DownloadAppend(HCkHttp cHandle, const char *url, const char *filename);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_DownloadAppendAsync(HCkHttp cHandle, const char *url, const char *filename);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_DownloadBd(HCkHttp cHandle, const char *url, HCkBinData binData);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_DownloadBdAsync(HCkHttp cHandle, const char *url, HCkBinData binData);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_DownloadHash(HCkHttp cHandle, const char *url, const char *hashAlgorithm, const char *encoding,
                    HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_downloadHash(HCkHttp cHandle, const char *url, const char *hashAlgorithm, const char *encoding);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_DownloadHashAsync(HCkHttp cHandle, const char *url, const char *hashAlgorithm, const char *encoding);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_DownloadSb(HCkHttp cHandle, const char *url, const char *charset, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_DownloadSbAsync(HCkHttp cHandle, const char *url, const char *charset, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_EventLogName(HCkHttp cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_eventLogName(HCkHttp cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_EventLogValue(HCkHttp cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_eventLogValue(HCkHttp cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_ExtractMetaRefreshUrl(HCkHttp cHandle, const char *htmlContent, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_extractMetaRefreshUrl(HCkHttp cHandle, const char *htmlContent);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_G_SvcOauthAccessToken(HCkHttp cHandle, const char *iss, const char *scope, const char *subEmail, int numSec,
                             HCkCert cert, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_g_SvcOauthAccessToken(HCkHttp cHandle, const char *iss, const char *scope, const char *subEmail, int numSec,
                             HCkCert cert);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_G_SvcOauthAccessTokenAsync(HCkHttp cHandle, const char *iss, const char *scope, const char *subEmail, int numSec,
                                  HCkCert cert);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_G_SvcOauthAccessToken2(HCkHttp cHandle, HCkHashtable claimParams, int numSec, HCkCert cert, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_g_SvcOauthAccessToken2(HCkHttp cHandle, HCkHashtable claimParams, int numSec, HCkCert cert);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_G_SvcOauthAccessToken2Async(HCkHttp cHandle, HCkHashtable claimParams, int numSec, HCkCert cert);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_GenTimeStamp(HCkHttp cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_genTimeStamp(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_GetCacheRoot(HCkHttp cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_getCacheRoot(HCkHttp cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_GetCookieXml(HCkHttp cHandle, const char *domain, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_getCookieXml(HCkHttp cHandle, const char *domain);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_GetDomain(HCkHttp cHandle, const char *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_getDomain(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkHttpResponse CkHttp_GetHead(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_GetHeadAsync(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_GetRequestHeader(HCkHttp cHandle, const char *name, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_getRequestHeader(HCkHttp cHandle, const char *name);

CK_C_VISIBLE_PUBLIC HCkCert CkHttp_GetServerSslCert(HCkHttp cHandle, const char *domain, int port);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_GetServerSslCertAsync(HCkHttp cHandle, const char *domain, int port);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_GetUrlPath(HCkHttp cHandle, const char *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_getUrlPath(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_HasRequestHeader(HCkHttp cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_IsUnlocked(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkHttp_LastJsonData(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_LoadTaskCaller(HCkHttp cHandle, HCkTask task);

CK_C_VISIBLE_PUBLIC int CkHttp_ParseOcspReply(HCkHttp cHandle, HCkBinData ocspReply, HCkJsonObject replyData);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PBinary(HCkHttp cHandle, const char *verb, const char *url, HCkByteData byteData, const char *contentType,
               BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PBinaryAsync(HCkHttp cHandle, const char *verb, const char *url, HCkByteData byteData, const char *contentType,
                    BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PBinaryBd(HCkHttp cHandle, const char *verb, const char *url, HCkBinData data, const char *contentType, BOOL md5,
                 BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PBinaryBdAsync(HCkHttp cHandle, const char *verb, const char *url, HCkBinData data, const char *contentType,
                      BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_PostBinary(HCkHttp cHandle, const char *url, HCkByteData byteData, const char *contentType, BOOL md5, BOOL gzip,
                  HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_postBinary(HCkHttp cHandle, const char *url, HCkByteData byteData, const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PostBinaryAsync(HCkHttp cHandle, const char *url, HCkByteData byteData, const char *contentType, BOOL md5,
                       BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkHttpResponse CkHttp_PostJson(HCkHttp cHandle, const char *url, const char *jsonText);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_PostJsonAsync(HCkHttp cHandle, const char *url, const char *jsonText);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PostJson2(HCkHttp cHandle, const char *url, const char *contentType, const char *jsonText);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PostJson2Async(HCkHttp cHandle, const char *url, const char *contentType, const char *jsonText);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PostJson3(HCkHttp cHandle, const char *url, const char *contentType, HCkJsonObject json);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PostJson3Async(HCkHttp cHandle, const char *url, const char *contentType, HCkJsonObject json);

CK_C_VISIBLE_PUBLIC HCkHttpResponse CkHttp_PostUrlEncoded(HCkHttp cHandle, const char *url, HCkHttpRequest req);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_PostUrlEncodedAsync(HCkHttp cHandle, const char *url, HCkHttpRequest req);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PostXml(HCkHttp cHandle, const char *endpointUrl, const char *xmlContent, const char *xmlCharset);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PostXmlAsync(HCkHttp cHandle, const char *endpointUrl, const char *xmlContent, const char *xmlCharset);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PText(HCkHttp cHandle, const char *verb, const char *url, const char *textData, const char *charset,
             const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PTextAsync(HCkHttp cHandle, const char *verb, const char *url, const char *textData, const char *charset,
                  const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_PTextSb(HCkHttp cHandle, const char *verb, const char *url, HCkStringBuilder textData, const char *charset,
               const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PTextSbAsync(HCkHttp cHandle, const char *verb, const char *url, HCkStringBuilder textData, const char *charset,
                    const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_PutBinary(HCkHttp cHandle, const char *url, HCkByteData byteData, const char *contentType, BOOL md5, BOOL gzip,
                 HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_putBinary(HCkHttp cHandle, const char *url, HCkByteData byteData, const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PutBinaryAsync(HCkHttp cHandle, const char *url, HCkByteData byteData, const char *contentType, BOOL md5,
                      BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_PutText(HCkHttp cHandle, const char *url, const char *textData, const char *charset, const char *contentType,
               BOOL md5, BOOL gzip, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_putText(HCkHttp cHandle, const char *url, const char *textData, const char *charset, const char *contentType,
               BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_PutTextAsync(HCkHttp cHandle, const char *url, const char *textData, const char *charset,
                    const char *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_QuickDeleteStr(HCkHttp cHandle, const char *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_quickDeleteStr(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickDeleteStrAsync(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_QuickGet(HCkHttp cHandle, const char *url, HCkByteData outData);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickGetAsync(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_QuickGetBd(HCkHttp cHandle, const char *url, HCkBinData binData);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickGetBdAsync(HCkHttp cHandle, const char *url, HCkBinData binData);

CK_C_VISIBLE_PUBLIC HCkHttpResponse CkHttp_QuickGetObj(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickGetObjAsync(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_QuickGetSb(HCkHttp cHandle, const char *url, HCkStringBuilder sbContent);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickGetSbAsync(HCkHttp cHandle, const char *url, HCkStringBuilder sbContent);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_QuickGetStr(HCkHttp cHandle, const char *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_quickGetStr(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickGetStrAsync(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_QuickPutStr(HCkHttp cHandle, const char *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_quickPutStr(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickPutStrAsync(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC HCkHttpResponse CkHttp_QuickRequest(HCkHttp cHandle, const char *verb, const char *url);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_QuickRequestAsync(HCkHttp cHandle, const char *verb, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_RemoveQuickHeader(HCkHttp cHandle, const char *headerFieldName);

CK_C_VISIBLE_PUBLIC void CkHttp_RemoveRequestHeader(HCkHttp cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_RenderGet(HCkHttp cHandle, const char *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_renderGet(HCkHttp cHandle, const char *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_ResumeDownload(HCkHttp cHandle, const char *url, const char *targetFilename);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_ResumeDownloadAsync(HCkHttp cHandle, const char *url, const char *targetFilename);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_ResumeDownloadBd(HCkHttp cHandle, const char *url, HCkBinData binData);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_ResumeDownloadBdAsync(HCkHttp cHandle, const char *url, HCkBinData binData);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_S3_CreateBucket(HCkHttp cHandle, const char *bucketPath);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_S3_CreateBucketAsync(HCkHttp cHandle, const char *bucketPath);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_S3_DeleteBucket(HCkHttp cHandle, const char *bucketPath);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_S3_DeleteBucketAsync(HCkHttp cHandle, const char *bucketPath);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_S3_DeleteMultipleObjects(HCkHttp cHandle, const char *bucketName, HCkStringArray objectNames);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_DeleteMultipleObjectsAsync(HCkHttp cHandle, const char *bucketName, HCkStringArray objectNames);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_S3_DeleteObject(HCkHttp cHandle, const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_DeleteObjectAsync(HCkHttp cHandle, const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_DownloadBd(HCkHttp cHandle, const char *bucketPath, const char *objectName, HCkBinData bd);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_DownloadBdAsync(HCkHttp cHandle, const char *bucketPath, const char *objectName, HCkBinData bd);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_DownloadBytes(HCkHttp cHandle, const char *bucketPath, const char *objectName, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_DownloadBytesAsync(HCkHttp cHandle, const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_DownloadFile(HCkHttp cHandle, const char *bucketPath, const char *objectName, const char *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_DownloadFileAsync(HCkHttp cHandle, const char *bucketPath, const char *objectName, const char *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_DownloadString(HCkHttp cHandle, const char *bucketPath, const char *objectName, const char *charset,
                         HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_s3_DownloadString(HCkHttp cHandle, const char *bucketPath, const char *objectName, const char *charset);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_DownloadStringAsync(HCkHttp cHandle, const char *bucketPath, const char *objectName, const char *charset);

CK_C_VISIBLE_PUBLIC int CkHttp_S3_FileExists(HCkHttp cHandle, const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_S3_FileExistsAsync(HCkHttp cHandle, const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_GenerateUrl(HCkHttp cHandle, const char *bucket, const char *path, HCkDateTime expire, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_s3_GenerateUrl(HCkHttp cHandle, const char *bucket, const char *path, HCkDateTime expire);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_GenerateUrlV4(HCkHttp cHandle, BOOL useHttps, const char *bucketName, const char *path, int numSecondsValid,
                        const char *awsService, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkHttp_s3_GenerateUrlV4(HCkHttp cHandle, BOOL useHttps, const char *bucketName, const char *path, int numSecondsValid,
                        const char *awsService);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_S3_ListBucketObjects(HCkHttp cHandle, const char *bucketPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_s3_ListBucketObjects(HCkHttp cHandle, const char *bucketPath);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_S3_ListBucketObjectsAsync(HCkHttp cHandle, const char *bucketPath);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_S3_ListBuckets(HCkHttp cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_s3_ListBuckets(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_S3_ListBucketsAsync(HCkHttp cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_UploadBd(HCkHttp cHandle, HCkBinData bd, const char *contentType, const char *bucketPath,
                   const char *objectName);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_UploadBdAsync(HCkHttp cHandle, HCkBinData bd, const char *contentType, const char *bucketPath,
                        const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_UploadBytes(HCkHttp cHandle, HCkByteData contentBytes, const char *contentType, const char *bucketPath,
                      const char *objectName);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_UploadBytesAsync(HCkHttp cHandle, HCkByteData contentBytes, const char *contentType, const char *bucketPath,
                           const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_UploadFile(HCkHttp cHandle, const char *localFilePath, const char *contentType, const char *bucketPath,
                     const char *objectName);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_UploadFileAsync(HCkHttp cHandle, const char *localFilePath, const char *contentType, const char *bucketPath,
                          const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_S3_UploadString(HCkHttp cHandle, const char *objectContent, const char *charset, const char *contentType,
                       const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_S3_UploadStringAsync(HCkHttp cHandle, const char *objectContent, const char *charset, const char *contentType,
                            const char *bucketPath, const char *objectName);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SaveLastError(HCkHttp cHandle, const char *path);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetCookieXml(HCkHttp cHandle, const char *domain, const char *cookieXml);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetOAuthRsaKey(HCkHttp cHandle, HCkPrivateKey privKey);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetPassword(HCkHttp cHandle, HCkSecureString password);

CK_C_VISIBLE_PUBLIC void
CkHttp_SetRequestHeader(HCkHttp cHandle, const char *headerFieldName, const char *headerFieldValue);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetSecurePassword(HCkHttp cHandle, HCkSecureString password);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetSslClientCert(HCkHttp cHandle, HCkCert cert);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_SetSslClientCertPem(HCkHttp cHandle, const char *pemDataOrPath, const char *pemPassword);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetSslClientCertPfx(HCkHttp cHandle, const char *pfxPath, const char *pfxPassword);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_SetUrlVar(HCkHttp cHandle, const char *name, const char *value);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_SharePointOnlineAuth(HCkHttp cHandle, const char *siteUrl, const char *username, HCkSecureString password,
                            HCkJsonObject extraInfo);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_SharePointOnlineAuthAsync(HCkHttp cHandle, const char *siteUrl, const char *username, HCkSecureString password,
                                 HCkJsonObject extraInfo);

CK_C_VISIBLE_PUBLIC void CkHttp_SleepMs(HCkHttp cHandle, int millisec);

CK_C_VISIBLE_PUBLIC HCkHttpResponse
CkHttp_SynchronousRequest(HCkHttp cHandle, const char *domain, int port, BOOL ssl, HCkHttpRequest req);

CK_C_VISIBLE_PUBLIC HCkTask
CkHttp_SynchronousRequestAsync(HCkHttp cHandle, const char *domain, int port, BOOL ssl, HCkHttpRequest req);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_UnlockComponent(HCkHttp cHandle, const char *unlockCode);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_UrlDecode(HCkHttp cHandle, const char *str, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_urlDecode(HCkHttp cHandle, const char *str);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_UrlEncode(HCkHttp cHandle, const char *str, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_urlEncode(HCkHttp cHandle, const char *str);

CK_C_VISIBLE_PUBLIC int CkHttp_VerifyTimestampReply(HCkHttp cHandle, HCkBinData timestampReply, HCkCert tsaCert);

CK_C_VISIBLE_PUBLIC BOOL CkHttp_XmlRpc(HCkHttp cHandle, const char *urlEndpoint, const char *xmlIn, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_xmlRpc(HCkHttp cHandle, const char *urlEndpoint, const char *xmlIn);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_XmlRpcAsync(HCkHttp cHandle, const char *urlEndpoint, const char *xmlIn);

CK_C_VISIBLE_PUBLIC BOOL
CkHttp_XmlRpcPut(HCkHttp cHandle, const char *urlEndpoint, const char *xmlIn, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkHttp_xmlRpcPut(HCkHttp cHandle, const char *urlEndpoint, const char *xmlIn);

CK_C_VISIBLE_PUBLIC HCkTask CkHttp_XmlRpcPutAsync(HCkHttp cHandle, const char *urlEndpoint, const char *xmlIn);

#endif
