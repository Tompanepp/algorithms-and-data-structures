#include "array.h"
#include "type.h"
#include <stdlib.h>
#include <stdio.h>

void * allocate_memory(int size);

array new(datatype type, int size) {
    array temp = { NULL, 0, type};
    switch(type) {
        case CHAR: 
            temp.first_address = (char *)allocate_memory((sizeof(char) * size));
            break;
        case SIGNED_CHAR: 
            temp.first_address = (signed char *)allocate_memory((sizeof(signed char) * size));
            break;
        case UNSIGNED_CHAR: 
            temp.first_address = (unsigned char *)allocate_memory((sizeof(unsigned char) * size));
            break;
        case INT: 
            temp.first_address = (int *)allocate_memory((sizeof(int) * size));
            break;
        case SHORT_INT: 
            temp.first_address = (short int *)allocate_memory((sizeof(short int) * size));
            break;
        case LONG_INT: 
            temp.first_address = (long int *)allocate_memory((sizeof(long int) * size));
            break;
        case SIGNED_INT: 
            temp.first_address = (signed int *) allocate_memory((sizeof(signed int) * size));
            break;
        case UNSIGNED_INT: 
            temp.first_address = (unsigned int *)allocate_memory((sizeof(unsigned int) * size));
            break;
        case FLOAT: 
            temp.first_address = (float *)allocate_memory((sizeof(float) * size));
            break;
        case DOUBLE: 
            temp.first_address = (double *)allocate_memory((sizeof(double) * size));
            break;
        case LONG_DOUBLE: 
            temp.first_address = (long double *)allocate_memory((sizeof(long double) * size));
            break;
    }
    return temp;
}

void * allocate_memory(int size) {
    void * first_address = malloc(size);
    if(first_address != NULL) return first_address;
    else {
        printf("Failed to allocate memory for the array");
        exit(1);
    }
}
/*
    copmute target memory address
    dereference address and 
        set a value at that address
*/
void add(array *collection, int index, int value) {
    void *targetAddress = collection->first_address + index;
    (*(int *)targetAddress) = (int)value; //only dealing with integer for now
    collection->length += collection->length + 1;
}

int read(array *collection, int index) {
    //Assuming an integer array
    void *targetAddress = collection->first_address + index;
    return (int)(*(int *)targetAddress);
}


