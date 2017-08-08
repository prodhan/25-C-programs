/*
 Name of program: C program to print  Floyd’s triangle.

 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {

    int i, j, n, val = 1;
    scanf("%d", &n);

   for (i=1; i<=n; i++)
   {
       for (j=1; j<=i; j++)
        {
         printf("%d ", val++);
        }
       printf("\n");
   }


    return 0;
}

