/*
 Name of program: Program to find factorial of a number
 Created by Ariful Islam on 08-Aug-17.

*/

#include <stdio.h>
int main()
{
    int n, i, factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %d", n, factorial);
    }

    return 0;
}
