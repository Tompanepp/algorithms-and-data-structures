#include "array.h"
#include <stdio.h>

int main(){
    array numbers = new(INT, 10);
    printf("number of customer ages %d \n", numbers.length);
    printf("adding 2 at index 0\n");
    add(&numbers, 0, 2);
    printf("number of customer ages %d \n", numbers.length);
    printf("value at index 0 is: %d \n", read(&numbers, 0));
    return 0;
}