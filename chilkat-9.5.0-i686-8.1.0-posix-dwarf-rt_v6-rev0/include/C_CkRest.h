// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkRest_H
#define _C_CkRest_H

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkRest_setAbortCheck(HCkRest cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkRest_setPercentDone(HCkRest cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkRest_setProgressInfo(HCkRest cHandle, void (*fnProgressInfo)(const char *name, const char *value));

CK_C_VISIBLE_PUBLIC void CkRest_setTaskCompleted(HCkRest cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_C_VISIBLE_PUBLIC void CkRest_setAbortCheck2(HCkRest cHandle, BOOL (*fnAbortCheck2)(void *pContext));

CK_C_VISIBLE_PUBLIC void CkRest_setPercentDone2(HCkRest cHandle, BOOL (*fnPercentDone2)(int pctDone, void *pContext));

CK_C_VISIBLE_PUBLIC void
CkRest_setProgressInfo2(HCkRest cHandle, void (*fnProgressInfo2)(const char *name, const char *value, void *pContext));

CK_C_VISIBLE_PUBLIC void
CkRest_setTaskCompleted2(HCkRest cHandle, void (*fnTaskCompleted2)(HCkTask hTask, void *pContext));

// setExternalProgress is for C callback functions defined in the external programming language (such as Go)
CK_C_VISIBLE_PUBLIC void CkRest_setExternalProgress(HCkRest cHandle, BOOL on);

CK_C_VISIBLE_PUBLIC void CkRest_setCallbackContext(HCkRest cHandle, void *pContext);

CK_C_VISIBLE_PUBLIC HCkRest CkRest_Create(void);

CK_C_VISIBLE_PUBLIC void CkRest_Dispose(HCkRest handle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getAllowHeaderFolding(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putAllowHeaderFolding(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getAllowHeaderQB(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putAllowHeaderQB(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getAuthorization(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRest_putAuthorization(HCkRest cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkRest_authorization(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC int CkRest_getConnectFailReason(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC int CkRest_getConnectTimeoutMs(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putConnectTimeoutMs(HCkRest cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getDebugLogFilePath(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRest_putDebugLogFilePath(HCkRest cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkRest_debugLogFilePath(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getDebugMode(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putDebugMode(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkRest_getHeartbeatMs(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putHeartbeatMs(HCkRest cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getHost(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRest_putHost(HCkRest cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkRest_host(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC int CkRest_getIdleTimeoutMs(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putIdleTimeoutMs(HCkRest cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getLastErrorHtml(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_lastErrorHtml(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_getLastErrorText(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_lastErrorText(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_getLastErrorXml(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_lastErrorXml(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getLastMethodSuccess(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putLastMethodSuccess(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getLastRequestHeader(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_lastRequestHeader(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_getLastRequestStartLine(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_lastRequestStartLine(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC int CkRest_getNumResponseHeaders(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_getPartSelector(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRest_putPartSelector(HCkRest cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkRest_partSelector(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getPercentDoneOnSend(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putPercentDoneOnSend(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getResponseHeader(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_responseHeader(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC int CkRest_getResponseStatusCode(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_getResponseStatusText(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_responseStatusText(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getStreamNonChunked(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putStreamNonChunked(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getUncommonOptions(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRest_putUncommonOptions(HCkRest cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkRest_uncommonOptions(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getUtf8(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putUtf8(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkRest_getVerboseLogging(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_putVerboseLogging(HCkRest cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRest_getVersion(HCkRest cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkRest_version(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_AddHeader(HCkRest cHandle, const char *name, const char *value);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_AddMwsSignature(HCkRest cHandle, const char *httpVerb, const char *uriPath, const char *domain,
                       const char *mwsSecretKey);

CK_C_VISIBLE_PUBLIC BOOL CkRest_AddPathParam(HCkRest cHandle, const char *name, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkRest_AddQueryParam(HCkRest cHandle, const char *name, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkRest_AddQueryParams(HCkRest cHandle, const char *queryString);

CK_C_VISIBLE_PUBLIC BOOL CkRest_AddQueryParamSb(HCkRest cHandle, const char *name, HCkStringBuilder value);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ClearAllHeaders(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ClearAllParts(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ClearAllPathParams(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ClearAllQueryParams(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ClearAuth(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC void CkRest_ClearResponseBodyStream(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_Connect(HCkRest cHandle, const char *hostname, int port, BOOL tls, BOOL autoReconnect);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_ConnectAsync(HCkRest cHandle, const char *hostname, int port, BOOL tls, BOOL autoReconnect);

CK_C_VISIBLE_PUBLIC BOOL CkRest_Disconnect(HCkRest cHandle, int maxWaitMs);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_DisconnectAsync(HCkRest cHandle, int maxWaitMs);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestBd(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkBinData binData,
                     HCkStringBuilder responseBody);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestBdAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkBinData binData,
                          HCkStringBuilder responseBody);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestBinary(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkByteData bodyBytes,
                         HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkRest_fullRequestBinary(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkByteData bodyBytes);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestBinaryAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkByteData bodyBytes);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestFormUrlEncoded(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkRest_fullRequestFormUrlEncoded(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestFormUrlEncodedAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestMultipart(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkRest_fullRequestMultipart(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestMultipartAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestNoBody(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkRest_fullRequestNoBody(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_FullRequestNoBodyAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestNoBodyBd(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkBinData binData);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestNoBodyBdAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkBinData binData);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestNoBodySb(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestNoBodySbAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestSb(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStringBuilder requestBody,
                     HCkStringBuilder responseBody);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestSbAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStringBuilder requestBody,
                          HCkStringBuilder responseBody);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestStream(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStream stream,
                         HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkRest_fullRequestStream(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStream stream);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestStreamAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStream stream);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_FullRequestString(HCkRest cHandle, const char *httpVerb, const char *uriPath, const char *bodyText,
                         HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkRest_fullRequestString(HCkRest cHandle, const char *httpVerb, const char *uriPath, const char *bodyText);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_FullRequestStringAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, const char *bodyText);

CK_C_VISIBLE_PUBLIC BOOL CkRest_GetLastDebugRequest(HCkRest cHandle, HCkBinData bd);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkRest_LastJsonData(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_LoadTaskCaller(HCkRest cHandle, HCkTask task);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ReadRespBd(HCkRest cHandle, HCkBinData responseBody);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_ReadRespBdAsync(HCkRest cHandle, HCkBinData responseBody);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ReadRespBodyBinary(HCkRest cHandle, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_ReadRespBodyBinaryAsync(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ReadRespBodyStream(HCkRest cHandle, HCkStream stream, BOOL autoSetStreamCharset);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_ReadRespBodyStreamAsync(HCkRest cHandle, HCkStream stream, BOOL autoSetStreamCharset);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ReadRespBodyString(HCkRest cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkRest_readRespBodyString(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_ReadRespBodyStringAsync(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC int CkRest_ReadResponseHeader(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_ReadResponseHeaderAsync(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ReadRespSb(HCkRest cHandle, HCkStringBuilder responseBody);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_ReadRespSbAsync(HCkRest cHandle, HCkStringBuilder responseBody);

CK_C_VISIBLE_PUBLIC HCkUrl CkRest_RedirectUrl(HCkRest cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRest_RemoveHeader(HCkRest cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkRest_RemoveQueryParam(HCkRest cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ResponseHdrByName(HCkRest cHandle, const char *name, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkRest_responseHdrByName(HCkRest cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ResponseHdrName(HCkRest cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkRest_responseHdrName(HCkRest cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkRest_ResponseHdrValue(HCkRest cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkRest_responseHdrValue(HCkRest cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SaveLastError(HCkRest cHandle, const char *path);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SendReqBd(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkBinData body);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_SendReqBdAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkBinData body);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_SendReqBinaryBody(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkByteData body);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_SendReqBinaryBodyAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkByteData body);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SendReqFormUrlEncoded(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_SendReqFormUrlEncodedAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SendReqMultipart(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_SendReqMultipartAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SendReqNoBody(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC HCkTask CkRest_SendReqNoBodyAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_SendReqSb(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStringBuilder bodySb);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_SendReqSbAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStringBuilder bodySb);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_SendReqStreamBody(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStream stream);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_SendReqStreamBodyAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, HCkStream stream);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_SendReqStringBody(HCkRest cHandle, const char *httpVerb, const char *uriPath, const char *bodyText);

CK_C_VISIBLE_PUBLIC HCkTask
CkRest_SendReqStringBodyAsync(HCkRest cHandle, const char *httpVerb, const char *uriPath, const char *bodyText);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthAws(HCkRest cHandle, HCkAuthAws authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthAzureAD(HCkRest cHandle, HCkAuthAzureAD authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthAzureSas(HCkRest cHandle, HCkAuthAzureSAS authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthAzureStorage(HCkRest cHandle, HCkAuthAzureStorage authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthBasic(HCkRest cHandle, const char *username, const char *password);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthBasicSecure(HCkRest cHandle, HCkSecureString username, HCkSecureString password);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthGoogle(HCkRest cHandle, HCkAuthGoogle authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthOAuth1(HCkRest cHandle, HCkOAuth1 authProvider, BOOL useQueryParams);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetAuthOAuth2(HCkRest cHandle, HCkOAuth2 authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetMultipartBodyBd(HCkRest cHandle, HCkBinData bodyData);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetMultipartBodyBinary(HCkRest cHandle, HCkByteData bodyData);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetMultipartBodySb(HCkRest cHandle, HCkStringBuilder bodySb);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetMultipartBodyStream(HCkRest cHandle, HCkStream stream);

CK_C_VISIBLE_PUBLIC BOOL CkRest_SetMultipartBodyString(HCkRest cHandle, const char *bodyText);

CK_C_VISIBLE_PUBLIC BOOL
CkRest_SetResponseBodyStream(HCkRest cHandle, int expectedStatus, BOOL autoSetStreamCharset, HCkStream responseStream);

CK_C_VISIBLE_PUBLIC BOOL CkRest_UseConnection(HCkRest cHandle, HCkSocket connection, BOOL autoReconnect);

#endif
