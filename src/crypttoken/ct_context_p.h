/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "ct_context.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef GWEN_CRYPT_TOKEN_CONTEXT_CT_CONTEXT_P_H
#define GWEN_CRYPT_TOKEN_CONTEXT_CT_CONTEXT_P_H

#include "ct_context.h"


#ifdef __cplusplus
extern "C" {
#endif

struct GWEN_CRYPT_TOKEN_CONTEXT {
  GWEN_INHERIT_ELEMENT(GWEN_CRYPT_TOKEN_CONTEXT)
  GWEN_LIST_ELEMENT(GWEN_CRYPT_TOKEN_CONTEXT)
  int _refCount;
  uint32_t id;
  uint32_t signKeyId;
  uint32_t signKeyNum;
  uint32_t signKeyVer;
  uint32_t verifyKeyId;
  uint32_t encipherKeyId;
  uint32_t decipherKeyId;
  uint32_t decipherKeyNum;
  uint32_t decipherKeyVer;
  uint32_t authSignKeyId;
  uint32_t authSignKeyNum;
  uint32_t authSignKeyVer;
  uint32_t authVerifyKeyId;
  uint32_t tempSignKeyId;
  uint32_t keyHashNum;
  uint32_t keyHashVer;
  uint32_t keyHashAlgo;
  GWEN_BINDATA keyHash;
  uint32_t keyStatus;
  uint32_t protocolVersion;
  GWEN_BINDATA cid;
  char *serviceId;
  char *userId;
  char *customerId;
  char *userName;
  char *peerId;
  char *peerName;
  char *address;
  int port;
  char *systemId;
};

#ifdef __cplusplus
}
#endif

#endif

