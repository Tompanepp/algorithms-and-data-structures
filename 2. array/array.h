/*
    1. construct
    2. ...

    Represetation:
        struct Array
            pointer to starting index
*/
#include "type.h"

#ifndef ARRAY_H
#define ARRAY_H

typedef struct array {
    void* firstAddress;
    int length;
} array;

struct array construct(type dataType, int size);

#endif
