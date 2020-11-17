#include "array.h"
#include "type.h"
#include <stdlib.h>

struct array {
    void* firstAddress;
};

struct array construct(type dataType, int size) {
    struct array temp;

    switch(dataType) {
        case INT: 
            temp.firstAddress = malloc((sizeof(int) * size));
            break;
    }
    return temp;
}
