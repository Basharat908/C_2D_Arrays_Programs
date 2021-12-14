#include<stdio.h>
int insert(int*,int);
void  delete(int*,int);
void main()
{
    int a[10],n,i,s,p;
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    printf("Enter the elements now :\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Array before insertion and deletion :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    insert(a,n);
    printf("Array after the insertion is :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    delete(a,n);
}
int insert(int b[],int m)
{
    int i,s,p;
    printf("Enter the element that want you to insert in the array :\n");
    scanf("%d",&s);
    printf("Enter the location of element :\n");
    scanf("%d",&p);
    for(i=m ;i>=p; i--)
    {
        b[i]=b[i-1];
    }
    b[i]=s;
    
}
void delete(int b[],int m)
{
    int i,z,j,f=0;
    printf("Enter the element that you want to delete in an array :\n");
    scanf("%d",&z);
    for(i=0; i<m; i++)
    {
        if(z==b[i])
        {
            for(j=i;j<m-1;j++)
            {
                b[j]=b[j+1];
            }
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Sorry element is not present in the array \n");
    }
    else
    {
        printf("Here is new array after deleting the above %d element in the array :\n",z);
        for(i=0;i<m-1;i++)
        {
          printf("a[%d]=%d\n",i,b[i]);
        }
    }
}