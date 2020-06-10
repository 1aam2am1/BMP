// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkTarWH
#define _C_CkTarWH

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC void CkTarW_setAbortCheck(HCkTarW cHandle, BOOL (*fnAbortCheck)(void));

CK_C_VISIBLE_PUBLIC void CkTarW_setPercentDone(HCkTarW cHandle, BOOL (*fnPercentDone)(int pctDone));

CK_C_VISIBLE_PUBLIC void
CkTarW_setProgressInfo(HCkTarW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));

CK_C_VISIBLE_PUBLIC void CkTarW_setTaskCompleted(HCkTarW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_C_VISIBLE_PUBLIC HCkTarW CkTarW_Create(void);

CK_C_VISIBLE_PUBLIC void CkTarW_Dispose(HCkTarW handle);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getCaptureXmlListing(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putCaptureXmlListing(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getCharset(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putCharset(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_charset(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getDebugLogFilePath(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putDebugLogFilePath(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_debugLogFilePath(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC int CkTarW_getDirMode(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putDirMode(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getDirPrefix(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putDirPrefix(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_dirPrefix(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC int CkTarW_getFileMode(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putFileMode(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkTarW_getGroupId(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putGroupId(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getGroupName(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putGroupName(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_groupName(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC int CkTarW_getHeartbeatMs(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putHeartbeatMs(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getLastErrorHtml(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_lastErrorHtml(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getLastErrorText(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_lastErrorText(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getLastErrorXml(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_lastErrorXml(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getLastMethodSuccess(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putLastMethodSuccess(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getMatchCaseSensitive(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putMatchCaseSensitive(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getMustMatch(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putMustMatch(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_mustMatch(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getMustNotMatch(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putMustNotMatch(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_mustNotMatch(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getNoAbsolutePaths(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putNoAbsolutePaths(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkTarW_getNumDirRoots(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC int CkTarW_getPercentDoneScale(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putPercentDoneScale(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkTarW_getScriptFileMode(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putScriptFileMode(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getSuppressOutput(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putSuppressOutput(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getUntarCaseSensitive(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putUntarCaseSensitive(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getUntarDebugLog(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putUntarDebugLog(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getUntarDiscardPaths(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putUntarDiscardPaths(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getUntarFromDir(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putUntarFromDir(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_untarFromDir(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getUntarMatchPattern(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putUntarMatchPattern(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_untarMatchPattern(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC int CkTarW_getUntarMaxCount(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putUntarMaxCount(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkTarW_getUserId(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putUserId(HCkTarW cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getUserName(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putUserName(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_userName(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_getVerboseLogging(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_putVerboseLogging(HCkTarW cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkTarW_getVersion(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_version(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getWriteFormat(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putWriteFormat(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_writeFormat(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC void CkTarW_getXmlListing(HCkTarW cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkTarW_putXmlListing(HCkTarW cHandle, const wchar_t *newVal);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_xmlListing(HCkTarW cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_AddDirRoot(HCkTarW cHandle, const wchar_t *dirPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_AddDirRoot2(HCkTarW cHandle, const wchar_t *rootPrefix, const wchar_t *rootPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_AddFile(HCkTarW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_AddFile2(HCkTarW cHandle, const wchar_t *filePath, const wchar_t *pathWithinTar);

CK_C_VISIBLE_PUBLIC BOOL
CkTarW_CreateDeb(HCkTarW cHandle, const wchar_t *controlPath, const wchar_t *dataPath, const wchar_t *debPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_GetDirRoot(HCkTarW cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_getDirRoot(HCkTarW cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_ListXml(HCkTarW cHandle, const wchar_t *tarPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const wchar_t *CkTarW_listXml(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_ListXmlAsync(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_LoadTaskCaller(HCkTarW cHandle, HCkTaskW task);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_SaveLastError(HCkTarW cHandle, const wchar_t *path);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_UnlockComponent(HCkTarW cHandle, const wchar_t *unlockCode);

CK_C_VISIBLE_PUBLIC int CkTarW_Untar(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_UntarAsync(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_UntarBz2(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_UntarBz2Async(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL
CkTarW_UntarFirstMatchingToBd(HCkTarW cHandle, const wchar_t *tarPath, const wchar_t *matchPattern, HCkBinDataW bd);

CK_C_VISIBLE_PUBLIC BOOL
CkTarW_UntarFirstMatchingToMemory(HCkTarW cHandle, HCkByteData tarFileBytes, const wchar_t *matchPattern,
                                  HCkByteData outBytes);

CK_C_VISIBLE_PUBLIC int CkTarW_UntarFromMemory(HCkTarW cHandle, HCkByteData tarFileBytes);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_UntarFromMemoryAsync(HCkTarW cHandle, HCkByteData tarFileBytes);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_UntarGz(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_UntarGzAsync(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_UntarZ(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_UntarZAsync(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_VerifyTar(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_VerifyTarAsync(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_WriteTar(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_WriteTarAsync(HCkTarW cHandle, const wchar_t *tarPath);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_WriteTarBz2(HCkTarW cHandle, const wchar_t *bz2Path);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_WriteTarBz2Async(HCkTarW cHandle, const wchar_t *bz2Path);

CK_C_VISIBLE_PUBLIC BOOL CkTarW_WriteTarGz(HCkTarW cHandle, const wchar_t *gzPath);

CK_C_VISIBLE_PUBLIC HCkTaskW CkTarW_WriteTarGzAsync(HCkTarW cHandle, const wchar_t *gzPath);

#endif
