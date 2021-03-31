/*
    1. construct
    2. add

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
    type arrayType;
} array;

/*
    creates and returns an array for the specified:
        @dataType = type of values to store
        @numberOfElements = number of items to be stored
        type variable-name numberOfElements
*/
array construct(type dataType, int numberOfElements);

/*
    adds a @value at the specified @index
*/
void add(array *collection, int index, int value);

/*
    read and return an item at the specified @index
*/
int read(array *collection, int index);

#endif
