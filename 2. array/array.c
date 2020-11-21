#include "array.h"
#include "type.h"
#include <stdlib.h>

/*
  Example of use struct alias
*/
array construct(type dataType, int size) {
    array temp;
    temp.length = size;
    switch(dataType) {
        case INT: 
            temp.firstAddress = malloc((sizeof(int) * size));
            temp.arrayType = dataType;
            break;
        case LONG_INT: 
            temp.firstAddress = malloc((sizeof(long int) * size));
            temp.arrayType = dataType;
            break;
        case CHAR: 
            temp.firstAddress = malloc((sizeof(char) * size));
            temp.arrayType = dataType;
            break;
        case FLOAT: 
            temp.firstAddress = malloc((sizeof(float) * size));
            temp.arrayType = dataType;
            break;
        case DOUBLE: 
            temp.firstAddress = malloc((sizeof(double) * size));
            temp.arrayType = dataType;
            break;   
    }
    return temp;
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


