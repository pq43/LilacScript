#ifndef lilac_util_h
#define lilac_util_h

#include "common.h"

char*
readFile(const char* path);

bool
isAlpha(char c);

bool
isDigit(char c);

char*
getAddress(void* pointer);

#endif