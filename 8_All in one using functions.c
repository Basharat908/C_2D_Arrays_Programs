#include<stdio.h>
int sumarr(int*,int);
int freqarr(int *, int);
int sort(int *, int);
int rev(int*,int);
int larg(int*,int);
int insert(int*,int);

void main()
{
    int a[10],i,n,s,z,p,x,y,c;
    printf("Enter no. of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the %d elements now :\n ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z=sumarr(a,n);
    printf("sum of elements of the array=%d\n",z);
    x=freqarr(a,n);
    printf("The entered element is present %d times in the array\n",x);
     
    printf("Array before sorting :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    sort(a,n);
    printf("Array after sorting the elements is given below :\n");
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
    y=larg(a,n);
    printf("Largest element of the array=%d\n",y);
    insert(a,n);
    printf("Array after insertion operation\n");
    {
        
     for(i=0;i<n;i++)
     printf("a[%d]=%d\n",i,a[i]); 
    }
}
int sumarr(int *b, int m)
{
    int sum =0,i;
    for(i=0;i<m;i++)
    {
        sum =sum +*b;
        b++;
    }
    return sum;
}
int freqarr(int b[],int m)
{
    int count=0,p,i;
    printf("Enter any element that you want to check  the frequency :\n");
    scanf("%d",&p);
    for(i=0;i<m;i++)
    {
        if(p==b[i])
        count=count+1;
    }
    return count;
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
int insert(int b[],int m)
{
    int p,s,i;
  printf("Enter the new element that you want to insert\n");
  scanf("%d",&s);
  printf("Enter the position where you want %d to insert in the array\n : ",s);
  scanf("%d",&p);
  for(i=m;i>=p;i--)
  {
      b[i]=b[i-1];
  }
  b[i]=s;
}
