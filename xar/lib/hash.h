#ifndef _XAR_HASH_H_
#define _XAR_HASH_H_

#include "filetree.h"

#pragma mark Hash Wrapper Object

typedef struct __xar_hash_t *xar_hash_t;

xar_hash_t xar_hash_new(const char *digest_name, void *context);
void *xar_hash_get_context(xar_hash_t hash);
const char *xar_hash_get_digest_name(xar_hash_t hash); // returns inner pointer
void xar_hash_update(xar_hash_t hash, void *buffer, size_t nbyte);
void *xar_hash_finish(xar_hash_t hash, size_t *nbyte);

#pragma mark datamod

int32_t xar_hash_fromheap_in(xar_t x, xar_file_t f, xar_prop_t p, void **in, size_t *inlen, void **context);
int32_t xar_hash_fromheap_out(xar_t x, xar_file_t f, xar_prop_t p, void *in, size_t inlen, void **context);
int32_t xar_hash_fromheap_done(xar_t x, xar_file_t f, xar_prop_t p, void **context);

int32_t xar_hash_toheap_in(xar_t x, xar_file_t f, xar_prop_t p, void **in, size_t *inlen, void **context);
int32_t xar_hash_toheap_out(xar_t x, xar_file_t f, xar_prop_t p, void *in, size_t inlen, void **context);
int32_t xar_hash_toheap_done(xar_t x, xar_file_t f, xar_prop_t p, void **context);

#endif /* _XAR_HASH_H_ */
