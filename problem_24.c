/*
 Name of program: C program to print the following outputs:

      1
     2 2
    3 3 3

 Created by Ariful Islam on 09-Aug-17.

*/

# include <stdio.h>


int main()
{
    int i, j=5, k, x, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

	for (i=1;i<=rows;i++) {
		for (k=1;k<=j;k++) {
			printf(" ");
		}
		for (x=1;x<=i;x++) {
			printf("%d",i);
			printf(" ");
		}
		printf("\n");
		j=j-1;
	}
    return 0;
}
