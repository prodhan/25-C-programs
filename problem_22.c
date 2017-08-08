/*
 Name of program: Program to print star sequences as given on problem 22
    *
    **
    ***
 Created by Ariful Islam on 09-Aug-17.

*/

# include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows\n");
    scanf("%d",&n);

    for ( i = 1 ; i <= n ; i++ )
    {
        for( j = 1 ; j <= i ; j++ )
        {
             printf("*");
        }

        printf("\n");
    }


    return 0;
}

