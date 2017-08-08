/*
 Name of program: A program to evaluate the equation y=xn when n is a non-negative integer.
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {

    int x,y,n;
    printf("Give the value of X and N: ");
    scanf("%d%d", &x, &n);

    if(n<0){
        printf("The value of N must be positive value ");
    }

    else
    {
        y=x*n;
        printf("y = xn : %d", y);

    }

    return 0;
}

