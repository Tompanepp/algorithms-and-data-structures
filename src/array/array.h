#include "../datatype/datatype.h"

#ifndef ARRAY_H
#define ARRAY_H

/*
    defined a type called 'struct array'
    gave it an alias array
*/
typedef struct array
{
    void *first_address;
    int length;
    datatype type;
} array;

/*
    creates and returns an array for the specified:
        @type = data type of values to store
        @size = number of items to be stored
        type variable-name [size]
*/
array new (datatype type, int size);

/*
    store a value in the collection
        @collection = collection to add to
        @index = index to store the in
        @value = value to store
*/
void add(array *collection, int index, void *value);

/*
    read an item 
        @collection = collection to read from 
        @index = index to read
        @*destination = pointer to memory address to read into
*/

void read(array *collection, int index, void *destination);

#endif