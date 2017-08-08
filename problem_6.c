/*
 Name of program: Program to find GCD(greatest common divisor) of 3 integer Numbers
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int gcd(int a, int b)
{
	while (a %= b)
	{
		int t = a;
		a = b;
		b = t;
	}
	return b;
}
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);

	int ans = gcd(gcd(a, b), c);
	printf("%d",ans);
	return 0;


}

