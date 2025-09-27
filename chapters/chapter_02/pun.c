#include <stdio.h>

int main(void) 
{
    /*
     * Name: pun.c
     * Purpse: Prints a bad pun.
     * Author: K. N. King 
     */

     int height, length, width, volume;
     float profit, loss;

    // printf("To C, or not to C: that is the question.\n");
    printf("To C, or not to C: ");
    printf("that is the question.\n");
    printf("Brevity is the soul of wit.\n --Shakespeare\n");

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width; /* volume is now 960 */
    profit = 2150.48f;

    //Printing the Value of a Variable
    printf("Height: %d\n", height);
    printf("Profit: $%.2f\n", profit);
    
    printf("Height: %d Length: %d\n", height, length);

    
    return 0;
}