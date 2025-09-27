/* Write a program that declares several int and float variables - without
   initializing them - and then prints their value. Is there any pattern to the values?
*/

#include <stdio.h>

int main(void) 
{
    int height, width, length;
    float price, cost, profit;

    printf("%d\n", height);
    printf("%d\n", width);
    printf("%d\n", length);
    printf("%f\n", price);
    printf("%f\n", cost);
    printf("%f\n", profit);

    return 0;

}