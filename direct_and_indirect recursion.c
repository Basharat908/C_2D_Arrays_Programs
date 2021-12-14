#include<stdio.h>
void odd();
void even();
int n=1;
int main()
{
    printf("Following is the no. of series from 1 to 10,Add 1 to odd number and 1 subtract to even number\n");
    
    odd();
}
void odd()
{
    if( n<=5)
    {
    printf("  %d",n+1);
    n++;
    even();
    }
    return;    
}
void even()
{
    if(n<=5)
    {
    printf("  %d",n-1);
    n++;
    odd();
    }
    return;
}