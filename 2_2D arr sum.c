#include<stdio.h>
// sum of the array elements//
void main()
{
    int a[10][10],i,j,rows,cols,sum=0;
    printf("Enter the  the no. of rows :\n" );
    scanf("%d",&rows);
    printf("Enter the number of columns :\n");
    scanf("%d",&cols);
    printf("Enter the %d elements of the array\n",rows*cols);
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
         scanf("%d",&a[j][i]);
        } 
    }
    printf("Your entered 2-D array is given below :\n");
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
              printf("  %d",a[j][i]);
        }
        printf("\n");
    }
   for(i=0;i<rows;i++)
   {
       for(j=0;j<cols;j++)
       {
           sum = sum+a[i][j];
       }
   }
   printf("Total sum of the elements of the array=%d",sum);
}