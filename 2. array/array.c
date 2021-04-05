#include "array.h"
#include "type.h"
#include <stdlib.h>
#include <stdio.h>

void * allocateMemory(int size);

array constructArray(type dataType, int numberOfElements) {
    array temp;
    temp.length = numberOfElements;
    temp.arrayType = dataType;
    switch(dataType) {
        case CHAR: 
            temp.firstAddress = (char *) allocateMemory((sizeof(char) * numberOfElements));
            break;
        case SIGNED_CHAR: 
            temp.firstAddress = (signed char *) allocateMemory((sizeof(signed char) * numberOfElements));
            break;
        case UNSIGNED_CHAR: 
            temp.firstAddress = (unsigned char *) allocateMemory((sizeof(unsigned char) * numberOfElements));
            break;
        case INT: 
            temp.firstAddress = (int *) allocateMemory((sizeof(int) * numberOfElements));
            break;
        case SHORT_INT: 
            temp.firstAddress = (short int *) allocateMemory((sizeof(short int) * numberOfElements));
            break;
        case LONG_INT: 
            temp.firstAddress = (long int *)allocateMemory((sizeof(long int) * numberOfElements));
            break;
        case SIGNED_INT: 
            temp.firstAddress = (signed int *) allocateMemory((sizeof(signed int) * numberOfElements));
            break;
        case UNSIGNED_INT: 
            temp.firstAddress = (unsigned int *) allocateMemory((sizeof(unsigned int) * numberOfElements));
            break;
        case FLOAT: 
            temp.firstAddress = (float *) allocateMemory((sizeof(float) * numberOfElements));
            break;
        case DOUBLE: 
            temp.firstAddress = (double *)allocateMemory((sizeof(double) * numberOfElements));
            break;
        case LONG_DOUBLE: 
            temp.firstAddress = (long double *) allocateMemory((sizeof(long double) * numberOfElements));
            break;
    }
    return temp;
}

void * allocateMemory(int size) {
    void * firstAddress = malloc(size);
    if(firstAddress != NULL) return firstAddress;
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
void add(array* collection, int index, int value) {
    void *targetAddress = collection->firstAddress + index;
    (*(int *)targetAddress) = (int)value; //only dealing with integer for now
}

int read(array *collection, int index) {
    //Assuming an integer array
    void *targetAddress = collection->firstAddress + index;
    return (int)(*(int *)targetAddress);
}


