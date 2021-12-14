// WAP to program for linear Search and binary search using functions
#include<stdio.h>
void linear(int*,int);
void binary (int*,int);
void main()
{
    int a[10],i,f=0,s,n;
    printf("Enter the No. of elements that you want to generate :\n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    linear(a,n);
    binary (a,n);
}    
void linear(int b[],int m)
{
    int i,s,f=0;
    printf("Enter the value u want to be found in array or  not:\n");
    scanf("%d",&s);
    for(i=0;i<m;i++)
    {
        if(s==b[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
      printf("%d is found at %d location\n",s,i+1);
    }
    else
    {
      printf("Sorry %d is not found\n",s);
    }
}    
 void binary(int b[],int m)
{ 
  int low, high, f,s, mid,count=1;
  printf("Enter the searching elements\n");
  scanf("%d",&s);
  low=0;
  high=m;
  while(low<=high)
  {
    mid=(low+high)/2;
    if(s==b[mid])
    {
        f=1;
        break;
    }
    else if(s>b[mid])
    {
        low=mid+1;
    }
    else
    {
         high=m-1;
    }
      count++;
  }
  if(f==1)
    {  
      printf("%d succesfully found at %d location\n",s,mid+1);
    }
    else
    {
        printf("sorry %d is not found\n",s);
    }
        printf("No. of times loop executed=%d\n",count);
}
 