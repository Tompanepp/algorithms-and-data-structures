#include "linkedlist.h"
#include <stdlib.h>

linkedlist new(datatype type) {
    linkedlist temp = {NULL, 0, type};

    return temp;
}