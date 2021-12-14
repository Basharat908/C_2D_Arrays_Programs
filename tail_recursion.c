#include<stdio.h>
// Tail recursion function 
int printval(int);
void main()
{
    int n;
    printf("Enter then number of your choice :\n");
    scanf("%d",&n);
   printf("Here are your Values :\n");
   printval(n);
}
int printval(int m)
{
    if (m==0)
    {
        return 1;
    }
    else
    {
        printf("%d\n",m);
        return printval(m-1);

    }
}