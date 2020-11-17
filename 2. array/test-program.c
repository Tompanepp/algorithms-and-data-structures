#include "array.h"
#include <stdio.h>

int main(){
    array customerAges = construct(INT, 10);
    printf("number of customer ages %d ", customerAges.length);
    return 0;
}