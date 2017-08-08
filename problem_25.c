/*
 Name of program:  program in C to convert the lowercase letter in upper case
 Created by Ariful Islam on 09-Aug-17.

*/

# include <stdio.h>
# include <string.h>

int main()
{
   char string[1000];

   printf("Input a string to convert to lower case\n");
   gets(string);

   printf("Input string in lower case: \"%s\"\n",strlwr(string));

   return  0;
}

