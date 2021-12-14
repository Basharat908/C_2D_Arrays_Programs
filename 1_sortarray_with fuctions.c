#include<stdio.h>
// program using functions to sort an array
int sort(int*,int);
void main()
{
    int a[10],i,j,n;
    printf("Enter the no. of elements :\n");
    scanf("%d",&n);
    printf("Enter the %d elements now\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before sorting :\n");
    for(i=0;i<n;i++)
    {
       printf("a[%d]=%d\n",i,a[i]);
    }
    sort(a,n);
    printf("Array after sorting :\n");
     for(i=0;i<n;i++)
     {
         printf("a[%d]=%d\n",i,a[i]);
     }
}     
int sort(int b[],int m)
{
     int i,j,t;
    for(i=1;i<m;i++)
     {
         for(j=0;j<m-i;j++)
         {
             if(b[j]>b[j+1])
             {
                 t=b[j];
                 b[j]=b[j+1];
                 b[j+1]=t;
             }
         }
     }
}