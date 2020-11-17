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

/*
    defined a type called 'struct array'
    gave it an alias array
*/
typedef struct array {
    void* firstAddress;
    int length;
} array;

array construct(type dataType, int size);

#endif
