/* Write a program that computes the volume of a sphere with a 10-meter radius, 
   using the formula v=4/3πr^3. Write the fraction 4/3 as 4.0f/3.0f 

   Modify so that it prompts the user to enter the radius of the sphere.
   
*/

#include <stdio.h>

int main(void)
{
    float pi = 3.14159f;
    float volume;
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * pi * (radius * radius * radius);

    printf("Volume: %.2f\n", volume);
}


