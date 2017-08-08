/*
 Name of program: Program to find LCM of 3 Integer Numbers
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main()
{
    int a, b,c, result;

    printf("Enter Three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    result = lcm (lcm(a, b), c);
    printf("The LCM of %d , %d and %d is %d\n", a, b, c, result);
    return 0;
}

int lcm(int a, int b)
{
    static int common = 1;

    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}

