/*
 Name of program: Program to display sum of series 1+1/2+1/3+……….+1/n
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {

    int n;
    float sum = 0, i;

    printf("Enter the number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
    }
    printf("The sum of the given series is %.2f", sum);

    return 0;
}

