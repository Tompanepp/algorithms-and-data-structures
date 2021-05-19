#include "type.h"

#ifndef ARRAY_H
#define ARRAY_H

/*
    defined a type called 'struct array'
    gave it an alias array
*/
typedef struct array {
    void* first_address;
    int length;
    datatype type;
} array;

/*
    creates and returns an array for the specified:
        @type = data type of values to store
        @size = number of items to be stored
        type variable-name [size]
    
*/
array new(datatype type, int size);

/*
    adds a @value at the specified @index to the array @collection
*/
void add(array *collection, int index, int value);

/*
    read and return an item at the specified @index from the array @collection
*/
int read(array *collection, int index);

#endif
