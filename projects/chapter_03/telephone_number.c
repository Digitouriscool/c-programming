/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx
and then diplays the number in the form xxx.xxx.xxx:
Enter phone number [ (xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{
    int area_code, prefix, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &prefix, &line_number);
    printf("You entered %03d.%03d.%04d\n", area_code, prefix, line_number);

    return 0;
}