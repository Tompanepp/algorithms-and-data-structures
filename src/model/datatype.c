#include "datatype.h"

void save_datatype(datatype type, void *value, void *target_address)
{
    switch (type)
    {
    case CHAR:
        *((char *)target_address) = *(char *)value;
        break;
    }
}
