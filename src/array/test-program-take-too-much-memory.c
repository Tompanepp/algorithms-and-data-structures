#include "array.h"
#include <stdio.h>

int main()
{
    array numbers = new (DOUBLE, 10);
    printf("number of customer ages %d \n", numbers.length);
    printf("first address %ld\n", (long int)numbers.first_address);
    printf("adding 2 at index 0\n");
    add(&numbers, 0, 2);
    int read_int;
    read(&numbers, 0, &read_int);
    printf("reading a value at index 0 is %d \n", read_int);

    printf("size of double %ld", sizeof(long double));
    array BIGARRAY = new (LONG_DOUBLE, 33554433);
    while (1 == 1)
    {
        printf("Just chilling, check memory consumption");
    }
    return 0;
}