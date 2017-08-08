/*
 Name of program: C program that calculates the sum of the digits of an integer.
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);

    while(num>0)
    {
        // Find the last digit of number and add to sum
        sum += num % 10;

        // Removes last digit from the number
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

