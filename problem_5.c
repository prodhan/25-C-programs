/*
 Name of program: Program to find greatest in 3 numbers
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {
    int a, b, c;

    printf("\nEnter value of a, b & c : ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c))
        printf("\na=%d is greatest",a);

    if ((b > c) && (b > a))
        printf("\nb=%d is greatest",b);

    if ((c > a) && (c > b))
        printf("\nc=%d is greatest",c);


    return 0;
}

