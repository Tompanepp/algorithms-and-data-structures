#include "array.h"
#include "type.h"
#include <stdlib.h>

/*
  Example of use struct alias
*/
array construct(type dataType, int numberOfElements) {
    array temp;
    temp.length = numberOfElements;
    switch(dataType) {
        case INT: 
            temp.firstAddress = malloc((sizeof(int) * numberOfElements));
            temp.arrayType = dataType;
            break;
        case LONG_INT: 
            temp.firstAddress = malloc((sizeof(long int) * numberOfElements));
            temp.arrayType = dataType;
            break;
        case CHAR: 
            temp.firstAddress = malloc((sizeof(char) * numberOfElements));
            temp.arrayType = dataType;
            break;
        case FLOAT: 
            temp.firstAddress = malloc((sizeof(float) * numberOfElements));
            temp.arrayType = dataType;
            break;
        case DOUBLE: 
            temp.firstAddress = malloc((sizeof(double) * numberOfElements));
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


