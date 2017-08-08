/*
 Name of program: Program to display series and find sum of 1+3+5+……..+n.
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter the number ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d+",i);
        sum += i;
    }
    printf("%d =  %d", n, sum+n);

    //printf("The sum of the given series is %d", sum+n);


    return 0;
}

