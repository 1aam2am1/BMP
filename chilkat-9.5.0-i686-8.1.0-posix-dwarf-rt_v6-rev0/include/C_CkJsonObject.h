// This is a generated source file for Chilkat version 9.5.0.82
#ifndef _C_CkJsonObject_H
#define _C_CkJsonObject_H

#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_Create(void);

CK_C_VISIBLE_PUBLIC void CkJsonObject_Dispose(HCkJsonObject handle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getDebugLogFilePath(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putDebugLogFilePath(HCkJsonObject cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_debugLogFilePath(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getDelimiterChar(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putDelimiterChar(HCkJsonObject cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_delimiterChar(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_getEmitCompact(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putEmitCompact(HCkJsonObject cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_getEmitCrLf(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putEmitCrLf(HCkJsonObject cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC int CkJsonObject_getI(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putI(HCkJsonObject cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkJsonObject_getJ(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putJ(HCkJsonObject cHandle, int newVal);

CK_C_VISIBLE_PUBLIC int CkJsonObject_getK(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putK(HCkJsonObject cHandle, int newVal);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getLastErrorHtml(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_lastErrorHtml(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getLastErrorText(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_lastErrorText(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getLastErrorXml(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_lastErrorXml(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_getLastMethodSuccess(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putLastMethodSuccess(HCkJsonObject cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getPathPrefix(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putPathPrefix(HCkJsonObject cHandle, const char *newVal);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_pathPrefix(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC int CkJsonObject_getSize(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_getUtf8(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putUtf8(HCkJsonObject cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_getVerboseLogging(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC void CkJsonObject_putVerboseLogging(HCkJsonObject cHandle, BOOL newVal);

CK_C_VISIBLE_PUBLIC void CkJsonObject_getVersion(HCkJsonObject cHandle, HCkString retval);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_version(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AddArrayAt(HCkJsonObject cHandle, int index, const char *name);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_AddArrayCopyAt(HCkJsonObject cHandle, int index, const char *name, HCkJsonArray jarr);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AddBoolAt(HCkJsonObject cHandle, int index, const char *name, BOOL value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AddIntAt(HCkJsonObject cHandle, int index, const char *name, int value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AddNullAt(HCkJsonObject cHandle, int index, const char *name);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_AddNumberAt(HCkJsonObject cHandle, int index, const char *name, const char *numericStr);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AddObjectAt(HCkJsonObject cHandle, int index, const char *name);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_AddObjectCopyAt(HCkJsonObject cHandle, int index, const char *name, HCkJsonObject jsonObj);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_AddStringAt(HCkJsonObject cHandle, int index, const char *name, const char *value);

CK_C_VISIBLE_PUBLIC HCkJsonArray CkJsonObject_AppendArray(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AppendArrayCopy(HCkJsonObject cHandle, const char *name, HCkJsonArray jarr);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AppendBool(HCkJsonObject cHandle, const char *name, BOOL value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AppendInt(HCkJsonObject cHandle, const char *name, int value);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_AppendObject(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AppendObjectCopy(HCkJsonObject cHandle, const char *name, HCkJsonObject jsonObj);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AppendString(HCkJsonObject cHandle, const char *name, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_AppendStringArray(HCkJsonObject cHandle, const char *name, HCkStringTable values);

CK_C_VISIBLE_PUBLIC HCkJsonArray CkJsonObject_ArrayAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkJsonArray CkJsonObject_ArrayOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_BoolAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_BoolOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_BytesOf(HCkJsonObject cHandle, const char *jsonPath, const char *encoding, HCkBinData bd);

CK_C_VISIBLE_PUBLIC void CkJsonObject_Clear(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_Clone(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_DateOf(HCkJsonObject cHandle, const char *jsonPath, HCkDateTime dateTime);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_Delete(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_DeleteAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_DtOf(HCkJsonObject cHandle, const char *jsonPath, BOOL bLocal, HCkDtObj dt);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_Emit(HCkJsonObject cHandle, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_emit(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_EmitBd(HCkJsonObject cHandle, HCkBinData bd);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_EmitSb(HCkJsonObject cHandle, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_EmitWithSubs(HCkJsonObject cHandle, HCkHashtable subs, BOOL omitEmpty, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_emitWithSubs(HCkJsonObject cHandle, HCkHashtable subs, BOOL omitEmpty);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_FindObjectWithMember(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC HCkJsonObject
CkJsonObject_FindRecord(HCkJsonObject cHandle, const char *arrayPath, const char *relPath, const char *value,
                        BOOL caseSensitive);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_FindRecordString(HCkJsonObject cHandle, const char *arrayPath, const char *relPath, const char *value,
                              BOOL caseSensitive, const char *retRelPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *
CkJsonObject_findRecordString(HCkJsonObject cHandle, const char *arrayPath, const char *relPath, const char *value,
                              BOOL caseSensitive, const char *retRelPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_FirebaseApplyEvent(HCkJsonObject cHandle, const char *name, const char *data);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_FirebasePatch(HCkJsonObject cHandle, const char *jsonPath, const char *jsonData);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_FirebasePut(HCkJsonObject cHandle, const char *jsonPath, const char *value);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_GetDocRoot(HCkJsonObject cHandle);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_HasMember(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC int CkJsonObject_IndexOf(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC int CkJsonObject_IntAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC int CkJsonObject_IntOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_IsNullAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_IsNullOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC int CkJsonObject_JsonTypeOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_Load(HCkJsonObject cHandle, const char *json);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_LoadBd(HCkJsonObject cHandle, HCkBinData bd);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_LoadFile(HCkJsonObject cHandle, const char *path);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_LoadPredefined(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_LoadSb(HCkJsonObject cHandle, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_MoveMember(HCkJsonObject cHandle, int fromIndex, int toIndex);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_NameAt(HCkJsonObject cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_nameAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_ObjectAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC HCkJsonObject CkJsonObject_ObjectOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_Predefine(HCkJsonObject cHandle, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_Rename(HCkJsonObject cHandle, const char *oldName, const char *newName);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_RenameAt(HCkJsonObject cHandle, int index, const char *name);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SaveLastError(HCkJsonObject cHandle, const char *path);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetBoolAt(HCkJsonObject cHandle, int index, BOOL value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetBoolOf(HCkJsonObject cHandle, const char *jsonPath, BOOL value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetIntAt(HCkJsonObject cHandle, int index, int value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetIntOf(HCkJsonObject cHandle, const char *jsonPath, int value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetNullAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetNullOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetNumberAt(HCkJsonObject cHandle, int index, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetNumberOf(HCkJsonObject cHandle, const char *jsonPath, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetStringAt(HCkJsonObject cHandle, int index, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_SetStringOf(HCkJsonObject cHandle, const char *jsonPath, const char *value);

CK_C_VISIBLE_PUBLIC int CkJsonObject_SizeOfArray(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_StringAt(HCkJsonObject cHandle, int index, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_stringAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_StringOf(HCkJsonObject cHandle, const char *jsonPath, HCkString outStr);

CK_C_VISIBLE_PUBLIC const char *CkJsonObject_stringOf(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_StringOfSb(HCkJsonObject cHandle, const char *jsonPath, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_Swap(HCkJsonObject cHandle, int index1, int index2);

CK_C_VISIBLE_PUBLIC int CkJsonObject_TypeAt(HCkJsonObject cHandle, int index);

CK_C_VISIBLE_PUBLIC BOOL
CkJsonObject_UpdateBd(HCkJsonObject cHandle, const char *jsonPath, const char *encoding, HCkBinData bd);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateBool(HCkJsonObject cHandle, const char *jsonPath, BOOL value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateInt(HCkJsonObject cHandle, const char *jsonPath, int value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateNewArray(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateNewObject(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateNull(HCkJsonObject cHandle, const char *jsonPath);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateNumber(HCkJsonObject cHandle, const char *jsonPath, const char *numericStr);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateSb(HCkJsonObject cHandle, const char *jsonPath, HCkStringBuilder sb);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_UpdateString(HCkJsonObject cHandle, const char *jsonPath, const char *value);

CK_C_VISIBLE_PUBLIC BOOL CkJsonObject_WriteFile(HCkJsonObject cHandle, const char *path);

#endif
