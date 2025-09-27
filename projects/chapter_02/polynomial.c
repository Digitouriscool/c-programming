/* Write a program that asks the user to enter a value x
   and then displays the value of the following poylnomial
*/

#include <stdio.h>

int main(void)
{
    int x;
    int poylnomial;

    printf("Enter a value: ");
    scanf("%d", &x);

    poylnomial = 3 * (x * x * x * x * x) // x^5
           + 2 * (x * x * x * x) // x^4
           - 5 * (x * x * x) // x^3
           - (x * x) // x^2
           + (7 * x) -6;

    printf("Output: %d\n", poylnomial);

}