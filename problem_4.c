/*
 Name of program: Program to show swap of two no’s without using third variable
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {
    int a,b;

    printf("enter value for a & b: ");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping the value of a = %d & b = %d",a,b);

    return 0;
}

