/* This file is auto-generated from "url.xml" by the typemaker
   tool of Gwenhywfar.
   Do not edit this file -- all changes will be lost! */
#ifndef URL_H
#define URL_H

/** @page P_GWEN_URL_PUBLIC GWEN_Url (public)
This page describes the properties of GWEN_URL
@anchor GWEN_URL_Protocol
<h3>Protocol</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetProtocol,
get it with @ref GWEN_Url_GetProtocol
</p>

@anchor GWEN_URL_Server
<h3>Server</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetServer,
get it with @ref GWEN_Url_GetServer
</p>

@anchor GWEN_URL_Port
<h3>Port</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetPort,
get it with @ref GWEN_Url_GetPort
</p>

@anchor GWEN_URL_Path
<h3>Path</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetPath,
get it with @ref GWEN_Url_GetPath
</p>

@anchor GWEN_URL_UserName
<h3>UserName</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetUserName,
get it with @ref GWEN_Url_GetUserName
</p>

@anchor GWEN_URL_Password
<h3>Password</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetPassword,
get it with @ref GWEN_Url_GetPassword
</p>

@anchor GWEN_URL_Vars
<h3>Vars</h3>
<p>
</p>
<p>
Set this property with @ref GWEN_Url_SetVars,
get it with @ref GWEN_Url_GetVars
</p>

*/
#ifdef __cplusplus
extern "C" {
#endif

typedef struct GWEN_URL GWEN_URL;

#ifdef __cplusplus
} /* __cplusplus */
#endif

#include <gwenhywfar/db.h>
#include <gwenhywfar/misc.h>
#include <gwenhywfar/list2.h>
/* headers */
#include <gwenhywfar/types.h>
#include <gwenhywfar/urlfns.h>

#ifdef __cplusplus
extern "C" {
#endif


GWEN_LIST_FUNCTION_LIB_DEFS(GWEN_URL, GWEN_Url, GWENHYWFAR_API)
GWENHYWFAR_API GWEN_URL_LIST *GWEN_Url_List_dup(const GWEN_URL_LIST *stl);

GWEN_LIST2_FUNCTION_LIB_DEFS(GWEN_URL, GWEN_Url, GWENHYWFAR_API)

/** Destroys all objects stored in the given LIST2 and the list itself
*/
GWENHYWFAR_API void GWEN_Url_List2_freeAll(GWEN_URL_LIST2 *stl);

/** Creates a new object.
*/
GWENHYWFAR_API GWEN_URL *GWEN_Url_new(void);
/** Creates an object from the data in the given GWEN_DB_NODE
*/
GWENHYWFAR_API GWEN_URL *GWEN_Url_fromDb(GWEN_DB_NODE *db);
/** Creates and returns a deep copy of thegiven object.
*/
GWENHYWFAR_API GWEN_URL *GWEN_Url_dup(const GWEN_URL *st);
/** Destroys the given object.
*/
GWENHYWFAR_API void GWEN_Url_free(GWEN_URL *st);
/** Increments the usage counter of the given object, so an additional free() is needed to destroy the object.
*/
GWENHYWFAR_API void GWEN_Url_Attach(GWEN_URL *st);
/** Reads data from a GWEN_DB.
*/
GWENHYWFAR_API int GWEN_Url_ReadDb(GWEN_URL *st, GWEN_DB_NODE *db);
/** Stores an object in the given GWEN_DB_NODE
*/
GWENHYWFAR_API int GWEN_Url_toDb(const GWEN_URL *st, GWEN_DB_NODE *db);
/** Returns 0 if this object has not been modified, !=0 otherwise
*/
GWENHYWFAR_API int GWEN_Url_IsModified(const GWEN_URL *st);
/** Sets the modified state of the given object
*/
GWENHYWFAR_API void GWEN_Url_SetModified(GWEN_URL *st, int i);

/**
* Returns the property @ref GWEN_URL_Protocol
*/
GWENHYWFAR_API const char *GWEN_Url_GetProtocol(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_Protocol
*/
GWENHYWFAR_API void GWEN_Url_SetProtocol(GWEN_URL *el, const char *d);

/**
* Returns the property @ref GWEN_URL_Server
*/
GWENHYWFAR_API const char *GWEN_Url_GetServer(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_Server
*/
GWENHYWFAR_API void GWEN_Url_SetServer(GWEN_URL *el, const char *d);

/**
* Returns the property @ref GWEN_URL_Port
*/
GWENHYWFAR_API int GWEN_Url_GetPort(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_Port
*/
GWENHYWFAR_API void GWEN_Url_SetPort(GWEN_URL *el, int d);

/**
* Returns the property @ref GWEN_URL_Path
*/
GWENHYWFAR_API const char *GWEN_Url_GetPath(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_Path
*/
GWENHYWFAR_API void GWEN_Url_SetPath(GWEN_URL *el, const char *d);

/**
* Returns the property @ref GWEN_URL_UserName
*/
GWENHYWFAR_API const char *GWEN_Url_GetUserName(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_UserName
*/
GWENHYWFAR_API void GWEN_Url_SetUserName(GWEN_URL *el, const char *d);

/**
* Returns the property @ref GWEN_URL_Password
*/
GWENHYWFAR_API const char *GWEN_Url_GetPassword(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_Password
*/
GWENHYWFAR_API void GWEN_Url_SetPassword(GWEN_URL *el, const char *d);

/**
* Returns the property @ref GWEN_URL_Vars
*/
GWENHYWFAR_API GWEN_DB_NODE *GWEN_Url_GetVars(const GWEN_URL *el);
/**
* Set the property @ref GWEN_URL_Vars
*/
GWENHYWFAR_API void GWEN_Url_SetVars(GWEN_URL *el, GWEN_DB_NODE *d);



#ifdef __cplusplus
} /* __cplusplus */
#endif


#endif /* URL_H */
