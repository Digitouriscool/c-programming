/* Write a program that asks the user to enter a dollars-and-cents amount,
   then displays the amount with a 5% tax added
*/

#include <stdio.h>

int main(void)
{
    #define TAX 5
    float amount;
    float total;

    printf("Enter a dollars-and-cents amount: ");
    scanf("%f", &amount);

    printf("%.2f", amount);
    total = amount * (1 + (TAX / 100.0f));

    printf("\nWith tax added: %.2f", total);


}