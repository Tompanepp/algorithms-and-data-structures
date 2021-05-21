#include "array.h"
#include "type.h"
#include <stdlib.h>
#include <stdio.h>

void *allocate_memory(int size);

array new (datatype type, int size)
{
    array temp = {NULL, 0, type};
    switch (type)
    {
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
        temp.first_address = (signed int *)allocate_memory((sizeof(signed int) * size));
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

void add(array *collection, int index, void *value)
{
    void *targetAddress = collection->first_address + index;
    switch (collection->type)
    {
    case CHAR:
        *((char *)targetAddress) = *(char *)value;
        break;
    case SIGNED_CHAR:
        *((signed char *)targetAddress) = *(signed char *)value;
        break;
    case UNSIGNED_CHAR:
        *((unsigned char *)targetAddress) = *(unsigned char *)value;
    case INT:
        *((int *)targetAddress) = *(int *)value;
        break;
    case SHORT_INT:
        *((short int *)targetAddress) = *(short int *)value;
        break;
    case LONG_INT:
        *((long int *)targetAddress) = *(long int *)value;
        break;
    case SIGNED_INT:
        *((signed int *)targetAddress) = *(signed int *)value;
        break;
    case UNSIGNED_INT:
        *((unsigned int *)targetAddress) = *(unsigned int *)value;
        break;
    case FLOAT:
        *((float *)targetAddress) = *(float *)value;
        break;
    case DOUBLE:
        *((double *)targetAddress) = *(double *)value;
        break;
    case LONG_DOUBLE:
        *((long double *)targetAddress) = *(long double *)value;
        break;
    }
    collection->length += collection->length + 1;
}

void read(array *collection, int index, void *destination)
{
    void *targetAddress = collection->first_address + index;
    switch (collection->type)
    {
    case CHAR:
        *(char *)destination = *(char *)targetAddress;
        break;
    case SIGNED_CHAR:
        *(signed char *)destination = *(signed char *)targetAddress;
        break;
    case UNSIGNED_CHAR:
        *(unsigned char *)destination = *(unsigned char *)targetAddress;
        break;
    case INT:
        *(int *)destination = *(int *)targetAddress;
        break;
    case SHORT_INT:
        *(short int *)destination = *(short int *)targetAddress;
        break;
    case LONG_INT:
        *(long int *)destination = *(long int *)targetAddress;
        break;
    case SIGNED_INT:
        *(signed int *)destination = *(signed int *)targetAddress;
        break;
    case UNSIGNED_INT:
        *(unsigned int *)destination = *(unsigned int *)targetAddress;
        break;
    case FLOAT:
        *(float *)destination = *(float *)targetAddress;
        break;
    case DOUBLE:
        *(double *)destination = *(double *)targetAddress;
        break;
    case LONG_DOUBLE:
        *(char *)destination = *(long double *)targetAddress;
        break;
    }
}

void *allocate_memory(int size)
{
    void *first_address = malloc(size);
    if (first_address != NULL)
        return first_address;
    else
    {
        printf("Failed to allocate memory for the array");
        exit(1);
    }
}