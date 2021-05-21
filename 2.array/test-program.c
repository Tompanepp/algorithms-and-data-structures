#include "array.h"
#include <stdio.h>

int main() {
    printf("Computing over integers\n");
    array numbers = new(INT, 10);
    printf("number of numbers %d \n", numbers.length);
    printf("adding 2 at index 0\n");
    int number = 2;
    add(&numbers, 0, &number);
    printf("number of numbers %d \n", numbers.length);
    printf("value at index 0 is: %d \n", *(int *)read(&numbers, 0));
    printf("\n");
    
    printf("Computing over characters\n");
    array alphabets = new(CHAR, 10);
    printf("number of alphabets %d \n", alphabets.length);
    printf("adding A at index 0\n");
    char letter = 'A';
    add(&alphabets, 0, &letter);
    printf("number of alphabets %d \n", alphabets.length);
    printf("value at index 0 is: %c \n", *(char *)read(&alphabets, 0));
    printf("\n");

    printf("Computing over floats\n");
    array stock_prices = new(FLOAT, 10);
    printf("number of stock_prices %d \n", stock_prices.length);
    printf("adding 122.34 at index 0\n");
    float rmb_price = 122.34;
    add(&stock_prices, 0, &rmb_price);
    printf("number of of stock_prices %d \n", stock_prices.length);
    printf("value at index 0 is: %.2f \n", *(float *)read(&stock_prices, 0));
    
    return 0;
}