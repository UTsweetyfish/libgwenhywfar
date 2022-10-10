/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "gwen_sar_fileheader.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef GWEN_SAR_FILEHEADER_H
#define GWEN_SAR_FILEHEADER_H


#ifdef __cplusplus
extern "C" {
#endif

/** @page P_GWEN_SAR_FILEHEADER Structure GWEN_SAR_FILEHEADER
<p>This page describes the properties of GWEN_SAR_FILEHEADER.</p>



<h1>GWEN_SAR_FILEHEADER</h1>



@anchor GWEN_SAR_FILEHEADER_status
<h2>status</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetStatus(), get it with @ref GWEN_SarFileHeader_GetStatus().</p>


@anchor GWEN_SAR_FILEHEADER_flags
<h2>flags</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetFlags(), get it with @ref GWEN_SarFileHeader_GetFlags().</p>


@anchor GWEN_SAR_FILEHEADER_path
<h2>path</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetPath(), get it with @ref GWEN_SarFileHeader_GetPath().</p>


@anchor GWEN_SAR_FILEHEADER_fileType
<h2>fileType</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetFileType(), get it with @ref GWEN_SarFileHeader_GetFileType().</p>


@anchor GWEN_SAR_FILEHEADER_permissions
<h2>permissions</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetPermissions(), get it with @ref GWEN_SarFileHeader_GetPermissions().</p>


@anchor GWEN_SAR_FILEHEADER_atime
<h2>atime</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetAtime(), get it with @ref GWEN_SarFileHeader_GetAtime().</p>


@anchor GWEN_SAR_FILEHEADER_mtime
<h2>mtime</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetMtime(), get it with @ref GWEN_SarFileHeader_GetMtime().</p>


@anchor GWEN_SAR_FILEHEADER_ctime
<h2>ctime</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetCtime(), get it with @ref GWEN_SarFileHeader_GetCtime().</p>


@anchor GWEN_SAR_FILEHEADER_fileSize
<h2>fileSize</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetFileSize(), get it with @ref GWEN_SarFileHeader_GetFileSize().</p>


@anchor GWEN_SAR_FILEHEADER_headerStartPos
<h2>headerStartPos</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetHeaderStartPos(), get it with @ref GWEN_SarFileHeader_GetHeaderStartPos().</p>


@anchor GWEN_SAR_FILEHEADER_headerSize
<h2>headerSize</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetHeaderSize(), get it with @ref GWEN_SarFileHeader_GetHeaderSize().</p>


@anchor GWEN_SAR_FILEHEADER_dataPos
<h2>dataPos</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetDataPos(), get it with @ref GWEN_SarFileHeader_GetDataPos().</p>


@anchor GWEN_SAR_FILEHEADER_dataSize
<h2>dataSize</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetDataSize(), get it with @ref GWEN_SarFileHeader_GetDataSize().</p>


@anchor GWEN_SAR_FILEHEADER_hashPos
<h2>hashPos</h2>

<p>Set this property with @ref GWEN_SarFileHeader_SetHashPos(), get it with @ref GWEN_SarFileHeader_GetHashPos().</p>

*/

/* define GWEN_SAR_FILEHEADER_FLAGS */
#define GWEN_SAR_FILEHEADER_FLAGS_SIGNED 0x00000001


/* needed system headers */
#include <gwenhywfar/types.h>
#include <gwenhywfar/list1.h>
#include <gwenhywfar/list2.h>

/* pre-headers */
#include <gwenhywfar/syncio_file.h>
#include <gwenhywfar/gwentime.h>

typedef struct GWEN_SAR_FILEHEADER GWEN_SAR_FILEHEADER;
GWEN_LIST_FUNCTION_LIB_DEFS(GWEN_SAR_FILEHEADER, GWEN_SarFileHeader, GWENHYWFAR_API)
GWEN_LIST2_FUNCTION_LIB_DEFS(GWEN_SAR_FILEHEADER, GWEN_SarFileHeader, GWENHYWFAR_API)



typedef enum {
  GWEN_SarFileHeader_FType_Unknown = -1,
  GWEN_SarFileHeader_FType_None = 0,
  GWEN_SarFileHeader_FType_File,
  GWEN_SarFileHeader_FType_Dir,
  GWEN_SarFileHeader_FType_SymLink
} GWEN_SAR_FILEHEADER_FTYPE;


typedef enum {
  GWEN_SarFileHeader_Status_Unknown = -1,
  GWEN_SarFileHeader_Status_Active = 0,
  GWEN_SarFileHeader_Status_Deleted
} GWEN_SAR_FILEHEADER_STATUS;


/* post-headers */


GWENHYWFAR_API GWEN_SAR_FILEHEADER_FTYPE GWEN_SarFileHeader_FType_fromString(const char *p_s);

GWENHYWFAR_API GWEN_SAR_FILEHEADER_STATUS GWEN_SarFileHeader_Status_fromString(const char *p_s);

GWENHYWFAR_API const char *GWEN_SarFileHeader_FType_toString(GWEN_SAR_FILEHEADER_FTYPE p_i);

GWENHYWFAR_API const char *GWEN_SarFileHeader_Status_toString(GWEN_SAR_FILEHEADER_STATUS p_i);

/** Constructor. */
GWENHYWFAR_API GWEN_SAR_FILEHEADER *GWEN_SarFileHeader_new(void);

/** Destructor. */
GWENHYWFAR_API void GWEN_SarFileHeader_free(GWEN_SAR_FILEHEADER *p_struct);

GWENHYWFAR_API void GWEN_SarFileHeader_Attach(GWEN_SAR_FILEHEADER *p_struct);

GWENHYWFAR_API GWEN_SAR_FILEHEADER *GWEN_SarFileHeader_dup(const GWEN_SAR_FILEHEADER *p_struct);

GWENHYWFAR_API GWEN_SAR_FILEHEADER *GWEN_SarFileHeader_copy(GWEN_SAR_FILEHEADER *p_struct,
                                                            const GWEN_SAR_FILEHEADER *p_src);

/** Getter.
 * Use this function to get the member "status" (see @ref GWEN_SAR_FILEHEADER_status)
*/
GWENHYWFAR_API int GWEN_SarFileHeader_GetStatus(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "flags" (see @ref GWEN_SAR_FILEHEADER_flags)
*/
GWENHYWFAR_API uint32_t GWEN_SarFileHeader_GetFlags(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "path" (see @ref GWEN_SAR_FILEHEADER_path)
*/
GWENHYWFAR_API const char *GWEN_SarFileHeader_GetPath(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "fileType" (see @ref GWEN_SAR_FILEHEADER_fileType)
*/
GWENHYWFAR_API int GWEN_SarFileHeader_GetFileType(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "permissions" (see @ref GWEN_SAR_FILEHEADER_permissions)
*/
GWENHYWFAR_API uint32_t GWEN_SarFileHeader_GetPermissions(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "atime" (see @ref GWEN_SAR_FILEHEADER_atime)
*/
GWENHYWFAR_API const GWEN_TIME *GWEN_SarFileHeader_GetAtime(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "mtime" (see @ref GWEN_SAR_FILEHEADER_mtime)
*/
GWENHYWFAR_API const GWEN_TIME *GWEN_SarFileHeader_GetMtime(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "ctime" (see @ref GWEN_SAR_FILEHEADER_ctime)
*/
GWENHYWFAR_API const GWEN_TIME *GWEN_SarFileHeader_GetCtime(const GWEN_SAR_FILEHEADER *p_struct);

/** Getter.
 * Use this function to get the member "fileSize" (see @ref GWEN_SAR_FILEHEADER_fileSize)
*/
GWENHYWFAR_API uint64_t GWEN_SarFileHeader_GetFileSize(const GWEN_SAR_FILEHEADER *p_struct);

/** Setter.
 * Use this function to set the member "status" (see @ref GWEN_SAR_FILEHEADER_status)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetStatus(GWEN_SAR_FILEHEADER *p_struct, int p_src);

/** Add flags.
 * Use this function to add flags to the member "status"
*/
GWENHYWFAR_API void GWEN_SarFileHeader_AddStatus(GWEN_SAR_FILEHEADER *p_struct, int p_src);

/** Sub flags.
 * Use this function to sub flags from the member "status"
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SubStatus(GWEN_SAR_FILEHEADER *p_struct, int p_src);

/** Setter.
 * Use this function to set the member "flags" (see @ref GWEN_SAR_FILEHEADER_flags)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetFlags(GWEN_SAR_FILEHEADER *p_struct, uint32_t p_src);

/** Add flags.
 * Use this function to add flags to the member "flags"
*/
GWENHYWFAR_API void GWEN_SarFileHeader_AddFlags(GWEN_SAR_FILEHEADER *p_struct, uint32_t p_src);

/** Sub flags.
 * Use this function to sub flags from the member "flags"
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SubFlags(GWEN_SAR_FILEHEADER *p_struct, uint32_t p_src);

/** Setter.
 * Use this function to set the member "path" (see @ref GWEN_SAR_FILEHEADER_path)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetPath(GWEN_SAR_FILEHEADER *p_struct, const char *p_src);

/** Setter.
 * Use this function to set the member "fileType" (see @ref GWEN_SAR_FILEHEADER_fileType)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetFileType(GWEN_SAR_FILEHEADER *p_struct, int p_src);

/** Setter.
 * Use this function to set the member "permissions" (see @ref GWEN_SAR_FILEHEADER_permissions)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetPermissions(GWEN_SAR_FILEHEADER *p_struct, uint32_t p_src);

/** Add flags.
 * Use this function to add flags to the member "permissions"
*/
GWENHYWFAR_API void GWEN_SarFileHeader_AddPermissions(GWEN_SAR_FILEHEADER *p_struct, uint32_t p_src);

/** Sub flags.
 * Use this function to sub flags from the member "permissions"
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SubPermissions(GWEN_SAR_FILEHEADER *p_struct, uint32_t p_src);

/** Setter.
 * Use this function to set the member "atime" (see @ref GWEN_SAR_FILEHEADER_atime)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetAtime(GWEN_SAR_FILEHEADER *p_struct, GWEN_TIME *p_src);

/** Setter.
 * Use this function to set the member "mtime" (see @ref GWEN_SAR_FILEHEADER_mtime)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetMtime(GWEN_SAR_FILEHEADER *p_struct, GWEN_TIME *p_src);

/** Setter.
 * Use this function to set the member "ctime" (see @ref GWEN_SAR_FILEHEADER_ctime)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetCtime(GWEN_SAR_FILEHEADER *p_struct, GWEN_TIME *p_src);

/** Setter.
 * Use this function to set the member "fileSize" (see @ref GWEN_SAR_FILEHEADER_fileSize)
*/
GWENHYWFAR_API void GWEN_SarFileHeader_SetFileSize(GWEN_SAR_FILEHEADER *p_struct, uint64_t p_src);

/* list1 functions */
GWENHYWFAR_API GWEN_SAR_FILEHEADER_LIST *GWEN_SarFileHeader_List_dup(const GWEN_SAR_FILEHEADER_LIST *p_src);

/* end-headers */


#ifdef __cplusplus
}
#endif

#endif

