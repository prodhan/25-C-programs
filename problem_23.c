/*
 Name of program: Program to print star sequences as given on problem 23
    *
   **
  ***
 Created by Ariful Islam on 09-Aug-17.

*/

# include <stdio.h>
int main()
{
    int n, j, k, space;

    printf("Enter number of rows\n");
    scanf("%d",&n);

    space = n;

    for ( k = 1 ; k <= n ; k++ )
    {
        for ( j = 1 ; j < space ; j++ )
            printf(" ");

        space--;

        for( j = 1 ; j <= k ; j++ )
            printf("*");

        printf("\n");
    }

    return 0;
}
