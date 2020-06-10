// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkMhtWH
#define _C_CkMhtWH

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkMhtW_setAbortCheck(HCkMhtW cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkMhtW_setPercentDone(HCkMhtW cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkMhtW_setProgressInfo(HCkMhtW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));

CK_C_VISIBLE_PUBLIC void CkMhtW_setTaskCompleted(HCkMhtW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkMhtW CkMhtW_Create(void);

CK_C_VISIBLE_PUBLIC void CkMhtW_Dispose(HCkMhtW handle);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getAbortCurrent(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putAbortCurrent(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getBaseUrl(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putBaseUrl(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_baseUrl(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC int CkMhtW_getConnectTimeout(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putConnectTimeout(HCkMhtW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getDebugHtmlAfter(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putDebugHtmlAfter(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_debugHtmlAfter(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getDebugHtmlBefore(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putDebugHtmlBefore(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_debugHtmlBefore(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getDebugLogFilePath(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putDebugLogFilePath(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_debugLogFilePath(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getDebugTagCleaning(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putDebugTagCleaning(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getEmbedImages(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putEmbedImages(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getEmbedLocalOnly(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putEmbedLocalOnly(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getFetchFromCache(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putFetchFromCache(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkMhtW_getHeartbeatMs(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putHeartbeatMs(HCkMhtW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getIgnoreMustRevalidate(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putIgnoreMustRevalidate(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getIgnoreNoCache(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putIgnoreNoCache(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getLastErrorHtml(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_lastErrorHtml(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getLastErrorText(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_lastErrorText(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getLastErrorXml(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_lastErrorXml(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getLastMethodSuccess(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putLastMethodSuccess(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getNoScripts(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putNoScripts(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getNtlmAuth(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putNtlmAuth(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkMhtW_getNumCacheLevels(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putNumCacheLevels(HCkMhtW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkMhtW_getNumCacheRoots(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getPreferIpv6(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putPreferIpv6(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getPreferMHTScripts(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putPreferMHTScripts(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getProxy(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putProxy(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_proxy(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getProxyLogin(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putProxyLogin(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_proxyLogin(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getProxyPassword(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putProxyPassword(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_proxyPassword(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC int CkMhtW_getReadTimeout(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putReadTimeout(HCkMhtW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getRequireSslCertVerify(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putRequireSslCertVerify(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getSocksHostname(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putSocksHostname(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_socksHostname(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getSocksPassword(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putSocksPassword(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_socksPassword(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC int CkMhtW_getSocksPort(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putSocksPort(HCkMhtW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getSocksUsername(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putSocksUsername(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_socksUsername(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC int CkMhtW_getSocksVersion(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putSocksVersion(HCkMhtW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUnpackDirect(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUnpackDirect(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUnpackUseRelPaths(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUnpackUseRelPaths(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUpdateCache(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUpdateCache(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUseCids(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUseCids(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUseFilename(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUseFilename(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUseIEProxy(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUseIEProxy(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getUseInline(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putUseInline(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_getVerboseLogging(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_putVerboseLogging(HCkMhtW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkMhtW_getVersion(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_version(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getWebSiteLogin(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putWebSiteLogin(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_webSiteLogin(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getWebSiteLoginDomain(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putWebSiteLoginDomain(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_webSiteLoginDomain(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_getWebSitePassword(HCkMhtW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkMhtW_putWebSitePassword(HCkMhtW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_webSitePassword(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_AddCacheRoot(HCkMhtW cHandle, const wchar_t *dir);

CK_C_VISIBLE_PUBLIC void CkMhtW_AddCustomHeader(HCkMhtW cHandle, const wchar_t *name, const wchar_t *value);

CK_C_VISIBLE_PUBLIC void CkMhtW_AddExternalStyleSheet(HCkMhtW cHandle, const wchar_t *url);

CK_C_VISIBLE_PUBLIC void CkMhtW_ClearCustomHeaders(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC void CkMhtW_ExcludeImagesMatching(HCkMhtW cHandle, const wchar_t *pattern);

CK_C_VISIBLE_PUBLIC BOOL
CkMhtW_GetAndSaveEML(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *emlPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkMhtW_GetAndSaveEMLAsync(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *emlPath);

CK_C_VISIBLE_PUBLIC BOOL
CkMhtW_GetAndSaveMHT(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *mhtPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkMhtW_GetAndSaveMHTAsync(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *mhtPath);

CK_C_VISIBLE_PUBLIC BOOL
CkMhtW_GetAndZipEML(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *zipEntryFilename,
                    const wchar_t *zipFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkMhtW_GetAndZipEMLAsync(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *zipEntryFilename,
                         const wchar_t *zipFilename);

CK_C_VISIBLE_PUBLIC BOOL
CkMhtW_GetAndZipMHT(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *zipEntryFilename,
                    const wchar_t *zipFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkMhtW_GetAndZipMHTAsync(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, const wchar_t *zipEntryFilename,
                         const wchar_t *zipFilename);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_GetCacheRoot(HCkMhtW cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_getCacheRoot(HCkMhtW cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_GetEML(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_getEML(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkMhtW_GetEMLAsync(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_GetMHT(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_getMHT(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkMhtW_GetMHTAsync(HCkMhtW cHandle, const wchar_t *url_or_htmlFilepath);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_HtmlToEML(HCkMhtW cHandle, const wchar_t *htmlText, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_htmlToEML(HCkMhtW cHandle, const wchar_t *htmlText);

CK_C_VISIBLE_PUBLIC HCkTaskW CkMhtW_HtmlToEMLAsync(HCkMhtW cHandle, const wchar_t *htmlText);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_HtmlToEMLFile(HCkMhtW cHandle, const wchar_t *html, const wchar_t *emlFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkMhtW_HtmlToEMLFileAsync(HCkMhtW cHandle, const wchar_t *html, const wchar_t *emlFilename);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_HtmlToMHT(HCkMhtW cHandle, const wchar_t *htmlText, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkMhtW_htmlToMHT(HCkMhtW cHandle, const wchar_t *htmlText);

CK_C_VISIBLE_PUBLIC HCkTaskW CkMhtW_HtmlToMHTAsync(HCkMhtW cHandle, const wchar_t *htmlText);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_HtmlToMHTFile(HCkMhtW cHandle, const wchar_t *html, const wchar_t *mhtFilename);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkMhtW_HtmlToMHTFileAsync(HCkMhtW cHandle, const wchar_t *html, const wchar_t *mhtFilename);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_IsUnlocked(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_LoadTaskCaller(HCkMhtW cHandle, HCkTaskW task);

CK_C_VISIBLE_PUBLIC void CkMhtW_RemoveCustomHeader(HCkMhtW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC void CkMhtW_RestoreDefaults(HCkMhtW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_SaveLastError(HCkMhtW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkMhtW_UnlockComponent(HCkMhtW cHandle, const wchar_t *unlockCode);

CK_C_VISIBLE_PUBLIC BOOL
CkMhtW_UnpackMHT(HCkMhtW cHandle, const wchar_t *mhtFilename, const wchar_t *unpackDir, const wchar_t *htmlFilename,
                 const wchar_t *partsSubDir);

CK_C_VISIBLE_PUBLIC BOOL
CkMhtW_UnpackMHTString(HCkMhtW cHandle, const wchar_t *mhtString, const wchar_t *unpackDir, const wchar_t *htmlFilename,
                       const wchar_t *partsSubDir);

#endif
