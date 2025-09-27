/* Write a program that asks the user to enter a U.S. dollar amount
   and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

   Enter a dollar amount: 93
   $20 bills: 4
   $10 bills: 1
   $5 bills: 0
   $1 bills: 3
*/

#include <stdio.h>

int main(void) 
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    // Smallest denomination 
    int _20_bills = amount / 20;
    int _10_bills = (amount - (_20_bills * 20)) / 10;
    int _5_bills = (amount - (_20_bills * 20 + _10_bills * 10)) / 5;
    int _1_bills = (amount - (_20_bills * 20 + _10_bills * 10 + _5_bills * 5)) / 1;

    printf("$20 bills: %d\n", _20_bills);
    printf("$10 bills: %d\n", _10_bills);
    printf("$5 bills: %d\n", _5_bills);
    printf("$1 bills: %d\n", _1_bills);
}