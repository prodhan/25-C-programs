/*
 Name of program: Program to find area and circumference of circle
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {
   int rad;
   float PI = 3.14, area, ci;

   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);

   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);

   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);


    return 0;
}

