#include<stdio.h>
 int rev(int*,int);
 void main()
 {
     int a[10],i,n,t;
     printf("enter the no. of elements\n");
     scanf("%d",&n);
     printf("enter %d elements now :\n",n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("Array before the reverse is given below:\n");
     for(i=0;i<n;i++)
     {
         printf("a[%d]=%d\n",i,a[i]);
     }
     rev(a,n);
     printf("Array after reversing is given below:\n");
     for(i=0;i<n;i++)
     {
         printf("a[%d]=%d\n",i,a[i]);
     }
 }
 int rev(int b[],int m)
 {
 int i,t;
 for(i=0;i<m/2;i++)
 {
    t=b[i];
    b[i]=b[m-1-i];
    b[m-i-1]=t;
 }
 }