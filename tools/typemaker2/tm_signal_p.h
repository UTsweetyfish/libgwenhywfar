/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "tm_signal.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef TM_SIGNAL_P_H
#define TM_SIGNAL_P_H

#include "tm_signal.h"


#ifdef __cplusplus
extern "C" {
#endif

struct TYPEMAKER2_SIGNAL {
  GWEN_LIST_ELEMENT(TYPEMAKER2_SIGNAL)
  char *name;
  char *paramType1;
  char *paramType2;
  uint32_t flags;
};

#ifdef __cplusplus
}
#endif

#endif

