/*
 Name of program: Calculate the area of a triangle with sides a, b and c
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>
# include <math.h>

int main()
{
    int s, a, b, c;
    float area;

    printf("Enter the values of a, b and c \n");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of a triangle = %.2f \n", area);

    return 0;
}
