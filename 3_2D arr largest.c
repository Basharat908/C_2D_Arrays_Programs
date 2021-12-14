#include<stdio.h>
void main()
{
    int a[10][10],i,j,rows,cols,largest;
    printf("Enter the Number of Rows :\n");
    scanf("%d",&rows);
    printf("Enter the Number of the columns :\n");
    scanf("%d",&cols);
    printf("Enter the %d elements in the array\n",rows*cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("You have entered 2-D array is given below :\n");
    for(i=0;i<rows;i++)
    {
       for(j=0;j<cols;j++)
        {
            printf("  %d",a[i][j]);
        } 
        printf("\n");
    }
    largest=a[0][0];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
           if(largest<a[i][j]);
           {
               largest=a[i][j];
           }
        }
    }
    printf("Largest element of the array =%d\n",largest);
}