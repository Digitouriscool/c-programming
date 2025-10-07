/* Write a program that accepts a date from the user in the form
   mm/dd/yyy amd then displays it in the form yyyymmdd:
*/

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %04d%02d%02d\n", year, month, day);

    return 0;

}