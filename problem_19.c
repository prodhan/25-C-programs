/*
 Name of program: Program to reverse a given number
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main()
{
    int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n = n/10;
    }

    printf("Reversed Number = %d", reversed);

    return 0;
}


