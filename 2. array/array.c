#include "array.h"
#include "type.h"
#include <stdlib.h>

array construct(type dataType, int size) {
    array temp;
    temp.length = size;
    switch(dataType) {
        case INT: 
            temp.firstAddress = malloc((sizeof(int) * size));
            break;
        case LONG_INT: 
            temp.firstAddress = malloc((sizeof(long int) * size));
            break;
        case CHAR: 
            temp.firstAddress = malloc((sizeof(char) * size));
            break;
        case FLOAT: 
            temp.firstAddress = malloc((sizeof(float) * size));
            break;
        case DOUBLE: 
            temp.firstAddress = malloc((sizeof(double) * size));
            break;
        
    }
    return temp;
}
