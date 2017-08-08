/*
 Name of program: Program to find sum, subtract, division, multiplication, remainder and average of two numbers.
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {

    int num1, num2, sum, sub, mul, mod, remainder;
    float div, avg;

    scanf("%d %d",&num1, &num2);

    sum=num1+num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    sub=num1-num2;
    printf("Subtract is: %d\n", sub);

    mul=num1*num2;
    printf("Multiplication result is: %d\n", mul);

    div=(float)num1/num2;
    printf("Division result is: %.2f\n", div);

    remainder=num1%num2;
    printf("Remainder is: %d\n", remainder);

    avg=((num1+num2)/2.0);
    printf("Average of Two numbers is: %.2f\n", avg);


    return 0;
}

