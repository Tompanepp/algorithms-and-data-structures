#include "array.h"
#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Test creating, adding and reading from Integer array\n");
    array numbers = new (INT, 10);
    assert(numbers.length == 0);
    
    int number = 2;
    add(&numbers, 0, &number);
    assert(numbers.length == 01);

    int read_int;
    read(&numbers, 0, &read_int);
    assert(read_int == number);
    printf("\n");

    printf("Test creating, adding and reading from Character array\n");
    array alphabets = new (CHAR, 10);
    assert(alphabets.length == 0);

    char letter = 'A';
    add(&alphabets, 0, &letter);
    assert(alphabets.length == 1);

    char read_char;
    read(&alphabets, 0, &read_char);
    assert(read_char == letter);
    printf("\n");

    printf("Test creating, adding and reading from Floats array\n");
    array stock_prices = new (FLOAT, 10);
    assert(stock_prices.length == 0);
    
    float rmb_price = 122.34;
    add(&stock_prices, 0, &rmb_price);
    assert(stock_prices.length == 1);

    float read_float;
    read(&stock_prices, 0, &read_float);
    assert(read_float == rmb_price);
    printf("\n");
    return 0;
}