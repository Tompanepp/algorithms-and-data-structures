#include "array.h"
#include <stdio.h>

int main()
{
    printf("Computing over integers\n");
    array numbers = new (INT, 10);
    printf("number of numbers %d \n", numbers.length);
    printf("adding 2 at index 0\n");
    int number = 2;
    add(&numbers, 0, &number);
    int read_int;
    read(&numbers, 0, &read_int);
    printf("number of numbers %d \n", numbers.length);
    printf("value at index 0 is: %d \n", read_int);
    printf("\n");

    printf("Computing over characters\n");
    array alphabets = new (CHAR, 10);
    printf("number of alphabets %d \n", alphabets.length);
    printf("adding A at index 0\n");
    char letter = 'A';
    add(&alphabets, 0, &letter);
    printf("number of alphabets %d \n", alphabets.length);
    char read_char;
    read(&alphabets, 0, &read_char);
    printf("value at index 0 is: %c \n", read_char);
    printf("\n");

    printf("Computing over floats\n");
    array stock_prices = new (FLOAT, 10);
    printf("number of stock_prices %d \n", stock_prices.length);
    printf("adding 122.34 at index 0\n");
    float rmb_price = 122.34;
    add(&stock_prices, 0, &rmb_price);
    float read_float;
    read(&stock_prices, 0, &read_float);
    printf("number of of stock_prices %d \n", stock_prices.length);
    printf("value at index 0 is: %.2f \n", read_float);
    printf("\n");
    return 0;
}