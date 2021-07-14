#include "datatype.h"
#include <stdio.h>

void save_datatype(datatype type, void *value, void *target_address)
{
    printf("in save_datatype");
    switch (type)
    {
    case CHAR:
        *((char *)target_address) = *(char *)value;
        break;
    case SIGNED_CHAR:
        *((signed char *)target_address) = *(signed char *)value;
        break;
    case UNSIGNED_CHAR:
        *((unsigned char *)target_address) = *(unsigned char *)value;
    case INT:
        *((int *)target_address) = *(int *)value;
        break;
    case SHORT_INT:
        *((short int *)target_address) = *(short int *)value;
        break;
    case LONG_INT:
        *((long int *)target_address) = *(long int *)value;
        break;
    case SIGNED_INT:
        *((signed int *)target_address) = *(signed int *)value;
        break;
    case UNSIGNED_INT:
        *((unsigned int *)target_address) = *(unsigned int *)value;
        break;
    case FLOAT:
        *((float *)target_address) = *(float *)value;
        break;
    case DOUBLE:
        *((double *)target_address) = *(double *)value;
        break;
    case LONG_DOUBLE:
        *((long double *)target_address) = *(long double *)value;
        break;
    }
}