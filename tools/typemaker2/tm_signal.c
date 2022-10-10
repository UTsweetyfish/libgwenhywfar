/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "tm_signal.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "tm_signal_p.h"

#include <gwenhywfar/misc.h>
#include <gwenhywfar/debug.h>

/* code headers */

/* macro functions */
GWEN_LIST_FUNCTIONS(TYPEMAKER2_SIGNAL, Typemaker2_Signal)
GWEN_LIST2_FUNCTIONS(TYPEMAKER2_SIGNAL, Typemaker2_Signal)


TYPEMAKER2_SIGNAL *Typemaker2_Signal_new(void)
{
  TYPEMAKER2_SIGNAL *p_struct;

  GWEN_NEW_OBJECT(TYPEMAKER2_SIGNAL, p_struct)
  GWEN_LIST_INIT(TYPEMAKER2_SIGNAL, p_struct)
  /* members */
  p_struct->name=NULL;
  p_struct->paramType1=NULL;
  p_struct->paramType2=NULL;
  p_struct->flags=0;
  /* virtual functions */

  return p_struct;
}

void Typemaker2_Signal_free(TYPEMAKER2_SIGNAL *p_struct)
{
  if (p_struct) {
    GWEN_LIST_FINI(TYPEMAKER2_SIGNAL, p_struct)
    /* members */
    free(p_struct->name);
    free(p_struct->paramType1);
    free(p_struct->paramType2);
    GWEN_FREE_OBJECT(p_struct);
  }
}

TYPEMAKER2_SIGNAL *Typemaker2_Signal_dup(const TYPEMAKER2_SIGNAL *p_src)
{
  TYPEMAKER2_SIGNAL *p_struct;

  assert(p_src);
  p_struct=Typemaker2_Signal_new();
  /* member "name" */
  if (p_struct->name) {
    free(p_struct->name);
    p_struct->name=NULL;
  }
  if (p_src->name) {
    p_struct->name=strdup(p_src->name);
  }

  /* member "paramType1" */
  if (p_struct->paramType1) {
    free(p_struct->paramType1);
    p_struct->paramType1=NULL;
  }
  if (p_src->paramType1) {
    p_struct->paramType1=strdup(p_src->paramType1);
  }

  /* member "paramType2" */
  if (p_struct->paramType2) {
    free(p_struct->paramType2);
    p_struct->paramType2=NULL;
  }
  if (p_src->paramType2) {
    p_struct->paramType2=strdup(p_src->paramType2);
  }

  /* member "flags" */
  p_struct->flags=p_src->flags;

  return p_struct;
}

TYPEMAKER2_SIGNAL *Typemaker2_Signal_copy(TYPEMAKER2_SIGNAL *p_struct, const TYPEMAKER2_SIGNAL *p_src)
{
  assert(p_struct);
  assert(p_src);
  /* member "name" */
  if (p_struct->name) {
    free(p_struct->name);
    p_struct->name=NULL;
  }
  if (p_src->name) {
    p_struct->name=strdup(p_src->name);
  }

  /* member "paramType1" */
  if (p_struct->paramType1) {
    free(p_struct->paramType1);
    p_struct->paramType1=NULL;
  }
  if (p_src->paramType1) {
    p_struct->paramType1=strdup(p_src->paramType1);
  }

  /* member "paramType2" */
  if (p_struct->paramType2) {
    free(p_struct->paramType2);
    p_struct->paramType2=NULL;
  }
  if (p_src->paramType2) {
    p_struct->paramType2=strdup(p_src->paramType2);
  }

  /* member "flags" */
  p_struct->flags=p_src->flags;

  return p_struct;
}

const char *Typemaker2_Signal_GetName(const TYPEMAKER2_SIGNAL *p_struct)
{
  assert(p_struct);
  return p_struct->name;
}

const char *Typemaker2_Signal_GetParamType1(const TYPEMAKER2_SIGNAL *p_struct)
{
  assert(p_struct);
  return p_struct->paramType1;
}

const char *Typemaker2_Signal_GetParamType2(const TYPEMAKER2_SIGNAL *p_struct)
{
  assert(p_struct);
  return p_struct->paramType2;
}

uint32_t Typemaker2_Signal_GetFlags(const TYPEMAKER2_SIGNAL *p_struct)
{
  assert(p_struct);
  return p_struct->flags;
}

void Typemaker2_Signal_SetName(TYPEMAKER2_SIGNAL *p_struct, const char *p_src)
{
  assert(p_struct);
  if (p_struct->name) {
    free(p_struct->name);
  }
  if (p_src) {
    p_struct->name=strdup(p_src);
  }
  else {
    p_struct->name=NULL;
  }
}

void Typemaker2_Signal_SetParamType1(TYPEMAKER2_SIGNAL *p_struct, const char *p_src)
{
  assert(p_struct);
  if (p_struct->paramType1) {
    free(p_struct->paramType1);
  }
  if (p_src) {
    p_struct->paramType1=strdup(p_src);
  }
  else {
    p_struct->paramType1=NULL;
  }
}

void Typemaker2_Signal_SetParamType2(TYPEMAKER2_SIGNAL *p_struct, const char *p_src)
{
  assert(p_struct);
  if (p_struct->paramType2) {
    free(p_struct->paramType2);
  }
  if (p_src) {
    p_struct->paramType2=strdup(p_src);
  }
  else {
    p_struct->paramType2=NULL;
  }
}

void Typemaker2_Signal_SetFlags(TYPEMAKER2_SIGNAL *p_struct, uint32_t p_src)
{
  assert(p_struct);
  p_struct->flags=p_src;
}

void Typemaker2_Signal_AddFlags(TYPEMAKER2_SIGNAL *p_struct, uint32_t p_src)
{
  assert(p_struct);
  p_struct->flags|=p_src;
}

void Typemaker2_Signal_SubFlags(TYPEMAKER2_SIGNAL *p_struct, uint32_t p_src)
{
  assert(p_struct);
  p_struct->flags&=~p_src;
}

TYPEMAKER2_SIGNAL_LIST *Typemaker2_Signal_List_dup(const TYPEMAKER2_SIGNAL_LIST *p_src)
{
  TYPEMAKER2_SIGNAL_LIST *p_dest;
  TYPEMAKER2_SIGNAL *p_elem;

  assert(p_src);
  p_dest=Typemaker2_Signal_List_new();
  p_elem=Typemaker2_Signal_List_First(p_src);
  while (p_elem) {
    TYPEMAKER2_SIGNAL *p_cpy;

    p_cpy=Typemaker2_Signal_dup(p_elem);
    Typemaker2_Signal_List_Add(p_cpy, p_dest);
    p_elem=Typemaker2_Signal_List_Next(p_elem);
  }

  return p_dest;
}

void Typemaker2_Signal_ReadXml(TYPEMAKER2_SIGNAL *p_struct, GWEN_XMLNODE *p_db)
{
  assert(p_struct);
  /* member "name" */
  if (p_struct->name) {
    free(p_struct->name);
  }
  {
    const char *s;
    s=GWEN_XMLNode_GetProperty(p_db, "name", NULL);
    if (s)
      p_struct->name=strdup(s);
  }
  if (p_struct->name==NULL) {  /* member "name" is volatile, just presetting */
    p_struct->name=NULL;
  }

  /* member "paramType1" */
  if (p_struct->paramType1) {
    free(p_struct->paramType1);
  }
  {
    const char *s;
    s=GWEN_XMLNode_GetProperty(p_db, "paramType1", NULL);
    if (s)
      p_struct->paramType1=strdup(s);
  }
  if (p_struct->paramType1==NULL) {  /* member "paramType1" is volatile, just presetting */
    p_struct->paramType1=NULL;
  }

  /* member "paramType2" */
  if (p_struct->paramType2) {
    free(p_struct->paramType2);
  }
  {
    const char *s;
    s=GWEN_XMLNode_GetProperty(p_db, "paramType2", NULL);
    if (s)
      p_struct->paramType2=strdup(s);
  }
  if (p_struct->paramType2==NULL) {  /* member "paramType2" is volatile, just presetting */
    p_struct->paramType2=NULL;
  }

  /* member "flags" */
  p_struct->flags=GWEN_XMLNode_GetIntValue(p_db, "flags", 0);

}

void Typemaker2_Signal_WriteXml(const TYPEMAKER2_SIGNAL *p_struct, GWEN_XMLNODE *p_db)
{
  assert(p_struct);
  /* member "name" */
  GWEN_XMLNode_SetProperty(p_db, "name", p_struct->name);

  /* member "paramType1" */
  GWEN_XMLNode_SetProperty(p_db, "paramType1", p_struct->paramType1);

  /* member "paramType2" */
  GWEN_XMLNode_SetProperty(p_db, "paramType2", p_struct->paramType2);

  /* member "flags" */
  GWEN_XMLNode_SetIntValue(p_db, "flags", p_struct->flags);

}

void Typemaker2_Signal_toXml(const TYPEMAKER2_SIGNAL *p_struct, GWEN_XMLNODE *p_db)
{
  Typemaker2_Signal_WriteXml(p_struct, p_db);
}

TYPEMAKER2_SIGNAL *Typemaker2_Signal_fromXml(GWEN_XMLNODE *p_db)
{
  TYPEMAKER2_SIGNAL *p_struct;
  p_struct=Typemaker2_Signal_new();
  Typemaker2_Signal_ReadXml(p_struct, p_db);
  return p_struct;
}


/* code headers */

