/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "tm_define.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef TM_DEFINE_P_H
#define TM_DEFINE_P_H

#include "tm_define.h"


#ifdef __cplusplus
extern "C" {
#endif

struct TYPEMAKER2_DEFINE {
  GWEN_LIST_ELEMENT(TYPEMAKER2_DEFINE)
  char *id;
  char *prefix;
  char *type;
  TYPEMAKER2_ITEM_LIST *items; /* volatile */
  int mode;
  int startValue;
  int lastValue; /* volatile */
};

#ifdef __cplusplus
}
#endif

#endif
