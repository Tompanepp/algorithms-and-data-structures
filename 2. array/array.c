#include "array.h"
#include "type.h"
#include <stdlib.h>
#include <stdio.h>

void * allocationMemory(int size);

array constructArray(type dataType, int numberOfElements) {
    array temp;
    temp.length = numberOfElements;
    temp.arrayType = dataType;
    switch(dataType) {
        case CHAR: 
            temp.firstAddress = allocationMemory((sizeof(char) * numberOfElements));
            break;
        case SIGNED_CHAR: 
            temp.firstAddress = allocationMemory((sizeof(signed char) * numberOfElements));
            break;
        case UNSIGNED_CHAR: 
            temp.firstAddress = allocationMemory((sizeof(unsigned char) * numberOfElements));
            break;
        case INT: 
            temp.firstAddress = allocationMemory((sizeof(int) * numberOfElements));
            break;
        case SHORT_INT: 
            temp.firstAddress = allocationMemory((sizeof(short int) * numberOfElements));
            break;
        case LONG_INT: 
            temp.firstAddress = allocationMemory((sizeof(long int) * numberOfElements));
            break;
        case SIGNED_INT: 
            temp.firstAddress = allocationMemory((sizeof(signed int) * numberOfElements));
            break;
        case UNSIGNED_INT: 
            temp.firstAddress = allocationMemory((sizeof(unsigned int) * numberOfElements));
            break;
        case FLOAT: 
            temp.firstAddress = allocationMemory((sizeof(float) * numberOfElements));
            break;
        case DOUBLE: 
            temp.firstAddress = allocationMemory((sizeof(double) * numberOfElements));
            break;
        case LONG_DOUBLE: 
            temp.firstAddress = allocationMemory((sizeof(long double) * numberOfElements));
            break;
    }
    return temp;
}

void * allocationMemory(int size) {
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


