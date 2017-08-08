/*
 Name of program: Program to print Fibonacci series up to 100
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1, next = 0, n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n<=100)
    {

        printf("Fibonacci Series: %d, %d, ", t1, t2);

        next = t1 + t2;

        while(next <= n)
        {
            printf("%d, ",next);
            t1 = t2;
            t2 = next;
            next = t1 + t2;
        }
    }

    else
        printf("Please Enter a number up to 100");

    return 0;
}

