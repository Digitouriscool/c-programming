/* Write a program that asks the user to enter a value x
   and then displays the value of the following poylnomial

   Modify the polynomial using the following formula:
   ((((3x + 2)x -5)x - 1)x + 7)x-6
*/

#include <stdio.h>

int main(void)
{
    int x;
    int poylnomial;

    printf("Enter a value: ");
    scanf("%d", &x);

    poylnomial = ((((3 * x + 2) * x -5) * x - 1) * x + 7) * x-6;

    printf("Output: %d\n", poylnomial);

}