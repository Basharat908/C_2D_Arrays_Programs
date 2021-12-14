#include<stdio.h>
//frequency of a single element using functions//
int freq(int*,int );
void main()
{
    int a[10],n,i,z;
    printf("Enter the number of elements (max=10)\n");
    scanf("%d",&n);
    printf("enter %d elements now\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    z=freq(a,n); 
    printf("The  entered number  is present %d times in the array\n",z);
   
}
int freq(int *b,int m)
{
    int count=0,i,p;
    printf("Enter any element that you want to check  the frequency :\n");
    scanf("%d",&p);
    for(i=0;i<m;i++)
    {  
        if(p==*(b+i))
        {
            count++;
        }  
    }
    return count;
} 