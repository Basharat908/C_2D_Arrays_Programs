#include<stdio.h>
// non tail recursion 
int fun(int );
int main()
{
    int n=4;
    printf("%d",fun(n));
    return 0;
}
int fun(int n)
{
    if(n==0)
    return 1;
    else
    return 7+fun(n-2);
}