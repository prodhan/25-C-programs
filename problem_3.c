/*
 Name of program: Program to convert temperature from degree centigrade to Fahrenheit.
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {

    float celsius, fahrenheit;

    printf("\nEnter temp in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in Fahrenheit : %f ", fahrenheit);

    return (0);



    return 0;
}

