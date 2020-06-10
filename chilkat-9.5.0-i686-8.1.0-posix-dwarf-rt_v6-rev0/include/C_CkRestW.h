// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkRestWH
#define _C_CkRestWH

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkRestW_setAbortCheck(HCkRestW cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkRestW_setPercentDone(HCkRestW cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkRestW_setProgressInfo(HCkRestW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));

CK_C_VISIBLE_PUBLIC void CkRestW_setTaskCompleted(HCkRestW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkRestW CkRestW_Create(void);

CK_C_VISIBLE_PUBLIC void CkRestW_Dispose(HCkRestW handle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getAllowHeaderFolding(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putAllowHeaderFolding(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getAllowHeaderQB(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putAllowHeaderQB(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getAuthorization(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRestW_putAuthorization(HCkRestW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_authorization(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC int CkRestW_getConnectFailReason(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC int CkRestW_getConnectTimeoutMs(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putConnectTimeoutMs(HCkRestW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getDebugLogFilePath(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRestW_putDebugLogFilePath(HCkRestW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_debugLogFilePath(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getDebugMode(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putDebugMode(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkRestW_getHeartbeatMs(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putHeartbeatMs(HCkRestW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getHost(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRestW_putHost(HCkRestW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_host(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC int CkRestW_getIdleTimeoutMs(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putIdleTimeoutMs(HCkRestW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getLastErrorHtml(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_lastErrorHtml(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_getLastErrorText(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_lastErrorText(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_getLastErrorXml(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_lastErrorXml(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getLastMethodSuccess(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putLastMethodSuccess(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getLastRequestHeader(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_lastRequestHeader(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_getLastRequestStartLine(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_lastRequestStartLine(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC int CkRestW_getNumResponseHeaders(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_getPartSelector(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRestW_putPartSelector(HCkRestW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_partSelector(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getPercentDoneOnSend(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putPercentDoneOnSend(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getResponseHeader(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_responseHeader(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC int CkRestW_getResponseStatusCode(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_getResponseStatusText(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_responseStatusText(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getStreamNonChunked(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putStreamNonChunked(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getUncommonOptions(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkRestW_putUncommonOptions(HCkRestW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_uncommonOptions(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_getVerboseLogging(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_putVerboseLogging(HCkRestW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkRestW_getVersion(HCkRestW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_version(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_AddHeader(HCkRestW cHandle, const wchar_t *name, const wchar_t *value);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_AddMwsSignature(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *domain,
                        const wchar_t *mwsSecretKey);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_AddPathParam(HCkRestW cHandle, const wchar_t *name, const wchar_t *value);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_AddQueryParam(HCkRestW cHandle, const wchar_t *name, const wchar_t *value);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_AddQueryParams(HCkRestW cHandle, const wchar_t *queryString);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_AddQueryParamSb(HCkRestW cHandle, const wchar_t *name, HCkStringBuilderW value);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ClearAllHeaders(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ClearAllParts(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ClearAllPathParams(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ClearAllQueryParams(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ClearAuth(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC void CkRestW_ClearResponseBodyStream(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_Connect(HCkRestW cHandle, const wchar_t *hostname, int port, BOOL tls, BOOL autoReconnect);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_ConnectAsync(HCkRestW cHandle, const wchar_t *hostname, int port, BOOL tls, BOOL autoReconnect);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_Disconnect(HCkRestW cHandle, int maxWaitMs);

CK_C_VISIBLE_PUBLIC HCkTaskW CkRestW_DisconnectAsync(HCkRestW cHandle, int maxWaitMs);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestBd(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkBinDataW binData,
                      HCkStringBuilderW responseBody);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestBdAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkBinDataW binData,
                           HCkStringBuilderW responseBody);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestBinary(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkByteData bodyBytes,
                          HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkRestW_fullRequestBinary(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkByteData bodyBytes);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestBinaryAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath,
                               HCkByteData bodyBytes);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestFormUrlEncoded(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkRestW_fullRequestFormUrlEncoded(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestFormUrlEncodedAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestMultipart(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkRestW_fullRequestMultipart(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestMultipartAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestNoBody(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkRestW_fullRequestNoBody(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestNoBodyAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestNoBodyBd(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestNoBodyBdAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath,
                                 HCkBinDataW binData);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestNoBodySb(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestNoBodySbAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath,
                                 HCkStringBuilderW sb);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestSb(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStringBuilderW requestBody,
                      HCkStringBuilderW responseBody);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestSbAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath,
                           HCkStringBuilderW requestBody, HCkStringBuilderW responseBody);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestStream(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStreamW stream,
                          HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkRestW_fullRequestStream(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStreamW stream);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestStreamAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStreamW stream);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_FullRequestString(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText,
                          HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *
CkRestW_fullRequestString(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_FullRequestStringAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath,
                               const wchar_t *bodyText);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_GetLastDebugRequest(HCkRestW cHandle, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC HCkJsonObjectW CkRestW_LastJsonData(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_LoadTaskCaller(HCkRestW cHandle, HCkTaskW task);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ReadRespBd(HCkRestW cHandle, HCkBinDataW responseBody);

CK_C_VISIBLE_PUBLIC HCkTaskW CkRestW_ReadRespBdAsync(HCkRestW cHandle, HCkBinDataW responseBody);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ReadRespBodyBinary(HCkRestW cHandle, HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC HCkTaskW CkRestW_ReadRespBodyBinaryAsync(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ReadRespBodyStream(HCkRestW cHandle, HCkStreamW stream, BOOL autoSetStreamCharset);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_ReadRespBodyStreamAsync(HCkRestW cHandle, HCkStreamW stream, BOOL autoSetStreamCharset);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ReadRespBodyString(HCkRestW cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_readRespBodyString(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkRestW_ReadRespBodyStringAsync(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC int CkRestW_ReadResponseHeader(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC HCkTaskW CkRestW_ReadResponseHeaderAsync(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ReadRespSb(HCkRestW cHandle, HCkStringBuilderW responseBody);

CK_C_VISIBLE_PUBLIC HCkTaskW CkRestW_ReadRespSbAsync(HCkRestW cHandle, HCkStringBuilderW responseBody);

CK_C_VISIBLE_PUBLIC HCkUrlW CkRestW_RedirectUrl(HCkRestW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_RemoveHeader(HCkRestW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_RemoveQueryParam(HCkRestW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ResponseHdrByName(HCkRestW cHandle, const wchar_t *name, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_responseHdrByName(HCkRestW cHandle, const wchar_t *name);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ResponseHdrName(HCkRestW cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_responseHdrName(HCkRestW cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_ResponseHdrValue(HCkRestW cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkRestW_responseHdrValue(HCkRestW cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SaveLastError(HCkRestW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SendReqBd(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkBinDataW body);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqBdAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkBinDataW body);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SendReqBinaryBody(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkByteData body);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqBinaryBodyAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkByteData body);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SendReqFormUrlEncoded(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqFormUrlEncodedAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SendReqMultipart(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqMultipartAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SendReqNoBody(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqNoBodyAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SendReqSb(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStringBuilderW bodySb);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqSbAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStringBuilderW bodySb);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SendReqStreamBody(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStreamW stream);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqStreamBodyAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, HCkStreamW stream);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SendReqStringBody(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath, const wchar_t *bodyText);

CK_C_VISIBLE_PUBLIC HCkTaskW
CkRestW_SendReqStringBodyAsync(HCkRestW cHandle, const wchar_t *httpVerb, const wchar_t *uriPath,
                               const wchar_t *bodyText);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthAws(HCkRestW cHandle, HCkAuthAwsW authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthAzureAD(HCkRestW cHandle, HCkAuthAzureADW authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthAzureSas(HCkRestW cHandle, HCkAuthAzureSASW authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthAzureStorage(HCkRestW cHandle, HCkAuthAzureStorageW authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthBasic(HCkRestW cHandle, const wchar_t *username, const wchar_t *password);

CK_C_VISIBLE_PUBLIC BOOL
CkRestW_SetAuthBasicSecure(HCkRestW cHandle, HCkSecureStringW username, HCkSecureStringW password);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthGoogle(HCkRestW cHandle, HCkAuthGoogleW authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthOAuth1(HCkRestW cHandle, HCkOAuth1W authProvider, BOOL useQueryParams);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetAuthOAuth2(HCkRestW cHandle, HCkOAuth2W authProvider);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetMultipartBodyBd(HCkRestW cHandle, HCkBinDataW bodyData);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetMultipartBodyBinary(HCkRestW cHandle, HCkByteData bodyData);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetMultipartBodySb(HCkRestW cHandle, HCkStringBuilderW bodySb);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetMultipartBodyStream(HCkRestW cHandle, HCkStreamW stream);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetMultipartBodyString(HCkRestW cHandle, const wchar_t *bodyText);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_SetResponseBodyStream(HCkRestW cHandle, int expectedStatus, BOOL autoSetStreamCharset,
                                                       HCkStreamW responseStream);

CK_C_VISIBLE_PUBLIC BOOL CkRestW_UseConnection(HCkRestW cHandle, HCkSocketW connection, BOOL autoReconnect);

#endif
