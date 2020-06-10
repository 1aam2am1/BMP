// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkHttpWH
#define _C_CkHttpWH

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkHttpW_setAbortCheck(HCkHttpW cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkHttpW_setPercentDone(HCkHttpW cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkHttpW_setProgressInfo(HCkHttpW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));

CK_C_VISIBLE_PUBLIC void CkHttpW_setTaskCompleted(HCkHttpW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkHttpW CkHttpW_Create(void);

CK_C_VISIBLE_PUBLIC void CkHttpW_Dispose(HCkHttpW handle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getAbortCurrent(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAbortCurrent(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAccept(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAccept(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_accept(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAcceptCharset(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAcceptCharset(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_acceptCharset(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAcceptLanguage(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAcceptLanguage(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_acceptLanguage(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getAllowGzip(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAllowGzip(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getAllowHeaderFolding(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAllowHeaderFolding(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAuthToken(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAuthToken(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_authToken(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getAutoAddHostHeader(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAutoAddHostHeader(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAwsAccessKey(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAwsAccessKey(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_awsAccessKey(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAwsEndpoint(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAwsEndpoint(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_awsEndpoint(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAwsRegion(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAwsRegion(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_awsRegion(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAwsSecretKey(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAwsSecretKey(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_awsSecretKey(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getAwsSignatureVersion(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAwsSignatureVersion(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getAwsSubResources(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putAwsSubResources(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_awsSubResources(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getBandwidthThrottleDown(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putBandwidthThrottleDown(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getBandwidthThrottleUp(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putBandwidthThrottleUp(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getBasicAuth(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putBasicAuth(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getClientIpAddress(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putClientIpAddress(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_clientIpAddress(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getConnectFailReason(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getConnection(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putConnection(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_connection(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getConnectTimeout(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putConnectTimeout(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getCookieDir(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putCookieDir(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_cookieDir(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getDebugLogFilePath(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putDebugLogFilePath(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_debugLogFilePath(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getDefaultFreshPeriod(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putDefaultFreshPeriod(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getDigestAuth(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putDigestAuth(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getFetchFromCache(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putFetchFromCache(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getFinalRedirectUrl(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_finalRedirectUrl(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getFollowRedirects(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putFollowRedirects(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getFreshnessAlgorithm(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putFreshnessAlgorithm(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getHeartbeatMs(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putHeartbeatMs(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getIgnoreMustRevalidate(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putIgnoreMustRevalidate(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getIgnoreNoCache(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putIgnoreNoCache(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getKeepResponseBody(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putKeepResponseBody(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastContentType(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastContentType(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastErrorHtml(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastErrorHtml(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastErrorText(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastErrorText(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastErrorXml(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastErrorXml(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastHeader(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastHeader(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getLastMethodSuccess(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putLastMethodSuccess(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastModDate(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastModDate(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastResponseBody(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastResponseBody(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastResponseHeader(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastResponseHeader(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getLastStatus(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLastStatusText(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_lastStatusText(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getLMFactor(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putLMFactor(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLogin(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putLogin(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_login(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getLoginDomain(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putLoginDomain(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_loginDomain(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getMaxConnections(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMaxConnections(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getMaxFreshPeriod(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMaxFreshPeriod(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC unsigned long CkHttpW_getMaxResponseSize(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMaxResponseSize(HCkHttpW cHandle, unsigned long newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getMaxUrlLen(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMaxUrlLen(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getMimicFireFox(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMimicFireFox(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getMimicIE(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMimicIE(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getMinFreshPeriod(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putMinFreshPeriod(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getNegotiateAuth(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putNegotiateAuth(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getNtlmAuth(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putNtlmAuth(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getNumCacheLevels(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putNumCacheLevels(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getNumCacheRoots(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getOAuth1(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuth1(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthCallback(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthCallback(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthCallback(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthConsumerKey(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthConsumerKey(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthConsumerKey(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthConsumerSecret(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthConsumerSecret(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthConsumerSecret(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthRealm(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthRealm(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthRealm(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthSigMethod(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthSigMethod(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthSigMethod(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthToken(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthToken(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthToken(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthTokenSecret(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthTokenSecret(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthTokenSecret(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getOAuthVerifier(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putOAuthVerifier(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_oAuthVerifier(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getPassword(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putPassword(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_password(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getPercentDoneScale(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putPercentDoneScale(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getPreferIpv6(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putPreferIpv6(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getProxyAuthMethod(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putProxyAuthMethod(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_proxyAuthMethod(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getProxyDomain(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putProxyDomain(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_proxyDomain(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getProxyLogin(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putProxyLogin(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_proxyLogin(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getProxyLoginDomain(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putProxyLoginDomain(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_proxyLoginDomain(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getProxyPassword(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putProxyPassword(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_proxyPassword(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getProxyPort(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putProxyPort(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getReadTimeout(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putReadTimeout(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getRedirectVerb(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putRedirectVerb(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_redirectVerb(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getReferer(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putReferer(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_referer(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getRequiredContentType(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putRequiredContentType(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_requiredContentType(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getRequireSslCertVerify(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putRequireSslCertVerify(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getS3Ssl(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putS3Ssl(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getSaveCookies(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSaveCookies(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getSendBufferSize(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSendBufferSize(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getSendCookies(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSendCookies(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSessionLogFilename(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSessionLogFilename(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_sessionLogFilename(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSniHostname(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSniHostname(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_sniHostname(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSocksHostname(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSocksHostname(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_socksHostname(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSocksPassword(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSocksPassword(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_socksPassword(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getSocksPort(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSocksPort(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSocksUsername(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSocksUsername(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_socksUsername(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC int CkHttpW_getSocksVersion(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSocksVersion(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getSoRcvBuf(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSoRcvBuf(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkHttpW_getSoSndBuf(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSoSndBuf(HCkHttpW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSslAllowedCiphers(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSslAllowedCiphers(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_sslAllowedCiphers(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getSslProtocol(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putSslProtocol(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_sslProtocol(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getStreamResponseBodyPath(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putStreamResponseBodyPath(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_streamResponseBodyPath(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getTlsCipherSuite(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_tlsCipherSuite(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getTlsPinSet(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putTlsPinSet(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_tlsPinSet(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getTlsVersion(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_tlsVersion(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_getUncommonOptions(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putUncommonOptions(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_uncommonOptions(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getUpdateCache(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putUpdateCache(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getUseIEProxy(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putUseIEProxy(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getUserAgent(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkHttpW_putUserAgent(HCkHttpW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_userAgent(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getVerboseLogging(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_putVerboseLogging(HCkHttpW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkHttpW_getVersion(HCkHttpW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_version(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_getWasRedirected(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_AddCacheRoot(HCkHttpW cHandle, const wchar_t *dir);

CK_C_VISIBLE_PUBLIC void CkHttpW_ClearHeaders(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_ClearInMemoryCookies(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC void CkHttpW_ClearUrlVars(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_CloseAllConnections(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_CloseAllConnectionsAsync(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_CreateOcspRequest(HCkHttpW cHandle, HCkJsonObjectW requestDetails, HCkBinDataW ocspRequest);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_CreateTimestampRequest(HCkHttpW cHandle, const wchar_t *hashAlg, const wchar_t *hashVal,
                               const wchar_t *reqPolicyOid, BOOL addNonce, BOOL reqTsaCert, HCkBinDataW tmestampToken);

CK_C_VISIBLE_PUBLIC void CkHttpW_DnsCacheClear(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_Download(HCkHttpW cHandle, const wchar_t *url, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_DownloadAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_DownloadAppend(HCkHttpW cHandle, const wchar_t *url, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_DownloadAppendAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *filename);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_DownloadBd(HCkHttpW cHandle, const wchar_t *url, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_DownloadBdAsync(HCkHttpW cHandle, const wchar_t *url, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_DownloadHash(HCkHttpW cHandle, const wchar_t *url, const wchar_t *hashAlgorithm, const wchar_t *encoding,
                     HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_downloadHash(HCkHttpW cHandle, const wchar_t *url, const wchar_t *hashAlgorithm, const wchar_t *encoding);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_DownloadHashAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *hashAlgorithm, const wchar_t *encoding);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_DownloadSb(HCkHttpW cHandle, const wchar_t *url, const wchar_t *charset, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_DownloadSbAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *charset, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_ExtractMetaRefreshUrl(HCkHttpW cHandle, const wchar_t *htmlContent, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_extractMetaRefreshUrl(HCkHttpW cHandle, const wchar_t *htmlContent);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_G_SvcOauthAccessToken(HCkHttpW cHandle, const wchar_t *iss, const wchar_t *scope, const wchar_t *subEmail,
                              int numSec, HCkCertW cert, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_g_SvcOauthAccessToken(HCkHttpW cHandle, const wchar_t *iss, const wchar_t *scope, const wchar_t *subEmail,
                              int numSec, HCkCertW cert);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_G_SvcOauthAccessTokenAsync(HCkHttpW cHandle, const wchar_t *iss, const wchar_t *scope, const wchar_t *subEmail,
                                   int numSec, HCkCertW cert);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_G_SvcOauthAccessToken2(HCkHttpW cHandle, HCkHashtableW claimParams, int numSec, HCkCertW cert,
                               HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_g_SvcOauthAccessToken2(HCkHttpW cHandle, HCkHashtableW claimParams, int numSec, HCkCertW cert);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_G_SvcOauthAccessToken2Async(HCkHttpW cHandle, HCkHashtableW claimParams, int numSec, HCkCertW cert);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_GenTimeStamp(HCkHttpW cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_genTimeStamp(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_GetCacheRoot(HCkHttpW cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_getCacheRoot(HCkHttpW cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_GetCookieXml(HCkHttpW cHandle, const wchar_t *domain, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_getCookieXml(HCkHttpW cHandle, const wchar_t *domain);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_GetDomain(HCkHttpW cHandle, const wchar_t *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_getDomain(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW CkHttpW_GetHead(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_GetHeadAsync(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_GetRequestHeader(HCkHttpW cHandle, const wchar_t *name, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_getRequestHeader(HCkHttpW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC HCkCertW CkHttpW_GetServerSslCert(HCkHttpW cHandle, const wchar_t *domain, int port);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_GetServerSslCertAsync(HCkHttpW cHandle, const wchar_t *domain, int port);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_GetUrlPath(HCkHttpW cHandle, const wchar_t *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_getUrlPath(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_HasRequestHeader(HCkHttpW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_IsUnlocked(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC HCkJsonObjectW CkHttpW_LastJsonData(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_LoadTaskCaller(HCkHttpW cHandle, HCkTaskW task);

CK_C_VISIBLE_PUBLIC int CkHttpW_ParseOcspReply(HCkHttpW cHandle, HCkBinDataW ocspReply, HCkJsonObjectW replyData);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PBinary(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, HCkByteData byteData,
                const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PBinaryAsync(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, HCkByteData byteData,
                     const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PBinaryBd(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, HCkBinDataW data,
                  const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PBinaryBdAsync(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, HCkBinDataW data,
                       const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_PostBinary(HCkHttpW cHandle, const wchar_t *url, HCkByteData byteData, const wchar_t *contentType, BOOL md5,
                   BOOL gzip, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_postBinary(HCkHttpW cHandle, const wchar_t *url, HCkByteData byteData, const wchar_t *contentType, BOOL md5,
                   BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PostBinaryAsync(HCkHttpW cHandle, const wchar_t *url, HCkByteData byteData, const wchar_t *contentType,
                        BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW CkHttpW_PostJson(HCkHttpW cHandle, const wchar_t *url, const wchar_t *jsonText);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_PostJsonAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *jsonText);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PostJson2(HCkHttpW cHandle, const wchar_t *url, const wchar_t *contentType, const wchar_t *jsonText);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PostJson2Async(HCkHttpW cHandle, const wchar_t *url, const wchar_t *contentType, const wchar_t *jsonText);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PostJson3(HCkHttpW cHandle, const wchar_t *url, const wchar_t *contentType, HCkJsonObjectW json);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PostJson3Async(HCkHttpW cHandle, const wchar_t *url, const wchar_t *contentType, HCkJsonObjectW json);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW CkHttpW_PostUrlEncoded(HCkHttpW cHandle, const wchar_t *url, HCkHttpRequestW req);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_PostUrlEncodedAsync(HCkHttpW cHandle, const wchar_t *url, HCkHttpRequestW req);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PostXml(HCkHttpW cHandle, const wchar_t *endpointUrl, const wchar_t *xmlContent, const wchar_t *xmlCharset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PostXmlAsync(HCkHttpW cHandle, const wchar_t *endpointUrl, const wchar_t *xmlContent,
                     const wchar_t *xmlCharset);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PText(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, const wchar_t *textData,
              const wchar_t *charset, const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PTextAsync(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, const wchar_t *textData,
                   const wchar_t *charset, const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_PTextSb(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, HCkStringBuilderW textData,
                const wchar_t *charset, const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PTextSbAsync(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url, HCkStringBuilderW textData,
                     const wchar_t *charset, const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_PutBinary(HCkHttpW cHandle, const wchar_t *url, HCkByteData byteData, const wchar_t *contentType, BOOL md5,
                  BOOL gzip, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_putBinary(HCkHttpW cHandle, const wchar_t *url, HCkByteData byteData, const wchar_t *contentType, BOOL md5,
                  BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PutBinaryAsync(HCkHttpW cHandle, const wchar_t *url, HCkByteData byteData, const wchar_t *contentType, BOOL md5,
                       BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_PutText(HCkHttpW cHandle, const wchar_t *url, const wchar_t *textData, const wchar_t *charset,
                const wchar_t *contentType, BOOL md5, BOOL gzip, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_putText(HCkHttpW cHandle, const wchar_t *url, const wchar_t *textData, const wchar_t *charset,
                const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_PutTextAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *textData, const wchar_t *charset,
                     const wchar_t *contentType, BOOL md5, BOOL gzip);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_QuickDeleteStr(HCkHttpW cHandle, const wchar_t *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_quickDeleteStr(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickDeleteStrAsync(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_QuickGet(HCkHttpW cHandle, const wchar_t *url, HCkByteData outData);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickGetAsync(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_QuickGetBd(HCkHttpW cHandle, const wchar_t *url, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickGetBdAsync(HCkHttpW cHandle, const wchar_t *url, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW CkHttpW_QuickGetObj(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickGetObjAsync(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_QuickGetSb(HCkHttpW cHandle, const wchar_t *url, HCkStringBuilderW sbContent);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickGetSbAsync(HCkHttpW cHandle, const wchar_t *url, HCkStringBuilderW sbContent);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_QuickGetStr(HCkHttpW cHandle, const wchar_t *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_quickGetStr(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickGetStrAsync(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_QuickPutStr(HCkHttpW cHandle, const wchar_t *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_quickPutStr(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickPutStrAsync(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW CkHttpW_QuickRequest(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_QuickRequestAsync(HCkHttpW cHandle, const wchar_t *verb, const wchar_t *url);

CK_C_VISIBLE_PUBLIC void CkHttpW_RemoveRequestHeader(HCkHttpW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_RenderGet(HCkHttpW cHandle, const wchar_t *url, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_renderGet(HCkHttpW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_ResumeDownload(HCkHttpW cHandle, const wchar_t *url, const wchar_t *targetFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_ResumeDownloadAsync(HCkHttpW cHandle, const wchar_t *url, const wchar_t *targetFilename);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_ResumeDownloadBd(HCkHttpW cHandle, const wchar_t *url, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_ResumeDownloadBdAsync(HCkHttpW cHandle, const wchar_t *url, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_CreateBucket(HCkHttpW cHandle, const wchar_t *bucketPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_S3_CreateBucketAsync(HCkHttpW cHandle, const wchar_t *bucketPath);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_DeleteBucket(HCkHttpW cHandle, const wchar_t *bucketPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_S3_DeleteBucketAsync(HCkHttpW cHandle, const wchar_t *bucketPath);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_S3_DeleteMultipleObjects(HCkHttpW cHandle, const wchar_t *bucketName, HCkStringArrayW objectNames);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_DeleteMultipleObjectsAsync(HCkHttpW cHandle, const wchar_t *bucketName, HCkStringArrayW objectNames);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_DeleteObject(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_DeleteObjectAsync(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_DownloadBd(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_DownloadBdAsync(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_DownloadBytes(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_DownloadBytesAsync(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_DownloadFile(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName,
                                                 const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_DownloadFileAsync(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName,
                             const wchar_t *localFilePath);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_DownloadString(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName,
                          const wchar_t *charset, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_s3_DownloadString(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName,
                          const wchar_t *charset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_DownloadStringAsync(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName,
                               const wchar_t *charset);

CK_C_VISIBLE_PUBLIC int CkHttpW_S3_FileExists(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_FileExistsAsync(HCkHttpW cHandle, const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_GenerateUrl(HCkHttpW cHandle, const wchar_t *bucket, const wchar_t *path, HCkDateTimeW expire,
                       HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_s3_GenerateUrl(HCkHttpW cHandle, const wchar_t *bucket, const wchar_t *path, HCkDateTimeW expire);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_GenerateUrlV4(HCkHttpW cHandle, BOOL useHttps, const wchar_t *bucketName, const wchar_t *path,
                         int numSecondsValid, const wchar_t *awsService, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_s3_GenerateUrlV4(HCkHttpW cHandle, BOOL useHttps, const wchar_t *bucketName, const wchar_t *path,
                         int numSecondsValid, const wchar_t *awsService);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_ListBucketObjects(HCkHttpW cHandle, const wchar_t *bucketPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_s3_ListBucketObjects(HCkHttpW cHandle, const wchar_t *bucketPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_S3_ListBucketObjectsAsync(HCkHttpW cHandle, const wchar_t *bucketPath);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_ListBuckets(HCkHttpW cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_s3_ListBuckets(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_S3_ListBucketsAsync(HCkHttpW cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_UploadBd(HCkHttpW cHandle, HCkBinDataW bd, const wchar_t *contentType, const wchar_t *bucketPath,
                    const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_UploadBdAsync(HCkHttpW cHandle, HCkBinDataW bd, const wchar_t *contentType, const wchar_t *bucketPath,
                         const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_UploadBytes(HCkHttpW cHandle, HCkByteData contentBytes, const wchar_t *contentType,
                                                const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_UploadBytesAsync(HCkHttpW cHandle, HCkByteData contentBytes, const wchar_t *contentType,
                            const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_S3_UploadFile(HCkHttpW cHandle, const wchar_t *localFilePath, const wchar_t *contentType,
                      const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_UploadFileAsync(HCkHttpW cHandle, const wchar_t *localFilePath, const wchar_t *contentType,
                           const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_S3_UploadString(HCkHttpW cHandle, const wchar_t *objectContent, const wchar_t *charset,
                                                 const wchar_t *contentType, const wchar_t *bucketPath,
                                                 const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_S3_UploadStringAsync(HCkHttpW cHandle, const wchar_t *objectContent, const wchar_t *charset,
                             const wchar_t *contentType, const wchar_t *bucketPath, const wchar_t *objectName);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SaveLastError(HCkHttpW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SetCookieXml(HCkHttpW cHandle, const wchar_t *domain, const wchar_t *cookieXml);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SetOAuthRsaKey(HCkHttpW cHandle, HCkPrivateKeyW privKey);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SetPassword(HCkHttpW cHandle, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC void
CkHttpW_SetRequestHeader(HCkHttpW cHandle, const wchar_t *headerFieldName, const wchar_t *headerFieldValue);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SetSecurePassword(HCkHttpW cHandle, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SetSslClientCert(HCkHttpW cHandle, HCkCertW cert);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_SetSslClientCertPem(HCkHttpW cHandle, const wchar_t *pemDataOrPath, const wchar_t *pemPassword);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_SetSslClientCertPfx(HCkHttpW cHandle, const wchar_t *pfxPath, const wchar_t *pfxPassword);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SetUrlVar(HCkHttpW cHandle, const wchar_t *name, const wchar_t *value);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_SharePointOnlineAuth(HCkHttpW cHandle, const wchar_t *siteUrl, const wchar_t *username,
                                                      HCkSecureStringW password, HCkJsonObjectW extraInfo);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_SharePointOnlineAuthAsync(HCkHttpW cHandle, const wchar_t *siteUrl, const wchar_t *username,
                                  HCkSecureStringW password, HCkJsonObjectW extraInfo);

CK_C_VISIBLE_PUBLIC void CkHttpW_SleepMs(HCkHttpW cHandle, int millisec);

CK_C_VISIBLE_PUBLIC HCkHttpResponseW
CkHttpW_SynchronousRequest(HCkHttpW cHandle, const wchar_t *domain, int port, BOOL ssl, HCkHttpRequestW req);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkHttpW_SynchronousRequestAsync(HCkHttpW cHandle, const wchar_t *domain, int port, BOOL ssl, HCkHttpRequestW req);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_UnlockComponent(HCkHttpW cHandle, const wchar_t *unlockCode);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_UrlDecode(HCkHttpW cHandle, const wchar_t *str, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_urlDecode(HCkHttpW cHandle, const wchar_t *str);

CK_C_VISIBLE_PUBLIC BOOL CkHttpW_UrlEncode(HCkHttpW cHandle, const wchar_t *str, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_urlEncode(HCkHttpW cHandle, const wchar_t *str);

CK_C_VISIBLE_PUBLIC int CkHttpW_VerifyTimestampReply(HCkHttpW cHandle, HCkBinDataW timestampReply, HCkCertW tsaCert);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_XmlRpc(HCkHttpW cHandle, const wchar_t *urlEndpoint, const wchar_t *xmlIn, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkHttpW_xmlRpc(HCkHttpW cHandle, const wchar_t *urlEndpoint, const wchar_t *xmlIn);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_XmlRpcAsync(HCkHttpW cHandle, const wchar_t *urlEndpoint, const wchar_t *xmlIn);

CK_C_VISIBLE_PUBLIC BOOL
CkHttpW_XmlRpcPut(HCkHttpW cHandle, const wchar_t *urlEndpoint, const wchar_t *xmlIn, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkHttpW_xmlRpcPut(HCkHttpW cHandle, const wchar_t *urlEndpoint, const wchar_t *xmlIn);

CK_C_VISIBLE_PUBLIC HCkTaskW CkHttpW_XmlRpcPutAsync(HCkHttpW cHandle, const wchar_t *urlEndpoint, const wchar_t *xmlIn);

#endif
