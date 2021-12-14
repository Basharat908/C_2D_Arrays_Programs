#include<stdio.h>
int fact(int );
void main()
{
    int z, n;
    
    printf("Enter the number that u want to calculate the factorial\n");
    scanf("%d",&n);
    fact(n);
    printf("Factorial of number %d = %d\n",n,fact(n));

    }
    int fact(int n)
    {
        if (n==1)
        {
        return 1;
        }
        else
        {
            return n*fact(n-1);
        }
    }         