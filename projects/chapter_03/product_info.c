/* 
Write a program that formats product information entered by the user. 
A session with the program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
*/

#include <stdio.h>

int main(void)
{
    float unit_price;
    int item_number;
    int day, month, year;

    printf("Enter item number: "); 
    scanf("%d", & item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate \n%-d\t$  %4.2f \b\t\b\b%02d/%02d/%04d\n", item_number, unit_price, month, day, year);

    return 0;

}