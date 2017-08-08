/*
 Name of program:  C program to compute and print the number of students (problem no 18)
 Created by Ariful Islam on 08-Aug-17.

*/

# include <stdio.h>

int main() {
    int n,a[100],c1,c2,c3,i;
    c1 = c2 = c3 = 0;

    printf("How many student(s) :-");
    scanf("%d",&n);

    printf("\nEnter marks of %d student\n",n);

    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }


    for(i=1;i<=n;i++)
    {
        if(a[i] >= 75 && a[i] < 100)
        c1++;

        if(a[i] >= 60 && a[i] < 75)
        c2++;

        if(a[i] >= 40 && a[i] < 60)
        c3++;


    }

    printf("%d Student(s) obtained 75 marks or more. \n",c1);
    printf("%d Student(s) scored 60 or more but less than 75 marks \n",c2);
    printf("%d Student(s) scored 40 or more but less than 60 marks \n",c3);

    return 0;
}

