/*
 Name of program: Program to display arithmetic operator using switch case
 Created by Ariful Islam on 08-Aug-17.

*/


# include <stdio.h>

int main() {

    char operator;
    int a,b;

    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%d %d",&a, &b);


    switch(operator)
    {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;

        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;

        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;

        case '/':
            printf("%d / %d = %f",a,b,a/b);
            break;


        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

