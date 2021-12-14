// WAP to find largest in the array using function
#include<stdio.h>
int larg(int*,int);
void main()
{
    int a[10],n,p, i, y;
    printf("Enter the size of the input array\n");
    scanf("%d",&n);
    printf("Enter the %d elements now\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
   y=larg(a,n);
   printf("Largest element of the array=%d",y);
}   
int larg(int b[],int m) 
{
    int p ,i; 
    p=b[0];
    for(i=1;i<m;i++)
    {
        if(p<b[i])
        {
            p=b[i];
        }
    }
   return p;

}
