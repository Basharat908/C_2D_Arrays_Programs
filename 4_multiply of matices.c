// Multiplication of two matrices 
#include<stdio.h> 
void main() 
{ 
  int a[10][10], b [10][10] , c [10][10], i , j , k , m , n , p ,q ;
  printf("enter the number of rows of first matrix : \n");  
  scanf("%d", &m);
  printf("enter the number of columns of first matrix \n");
  scanf("%d", &n); 
  printf("enter %d elements for first matrix now :\n", m*n);
  for (  i = 0 ; i < m ; i++ ) 
  {   	
   for (  j = 0 ; j < n ; j++ ) 
    {   
       scanf ( "%d" , & a [ i ] [ j ] );  
    }      // end of j loop 
  }  	 	 	 	 	 	// end of i loop 
     //displaying the first matrix 
  printf  ( " you have entered the following first matrix \n"); 
  for (  i = 0 ; i < m ; i++ ) 
    {   
      for (  j = 0 ; j < n ; j++ ) 
      {   
          printf ( "%d   " ,  a [ i ] [ j ] );  
      }      // end of j loop    
          printf (" \n" );
    }        // end of i loop 
  printf("enter the number of rows of second matrix\n"); // asking user for no. of rows
  scanf("%d", &p); 
  printf("enter number of columns of second matrix \n");//Asking user for no. of columns
  scanf("%d", &q); 
  printf("enter %d elements for second matric now\n", p*q);// asking user for elements  
  for (  i = 0 ; i < p ; i++ ) 
  {   	 	
    for (  j = 0 ; j < q ; j++ ) 
    {   	 	 
      scanf ( "%d" , & b [ i ] [ j ] ); 
  	}  	 	 	 	// end of j loop 
  }  	 	 	 	 	 	// end of i loop 
    //displaying the Second matrix 
  printf  ("you have entered the following second matrix\n"); 
  for (  i = 0 ; i < p ; i++ ) 
  {     	 
   for (  j = 0 ; j < q ; j++ ) 
    {  
   	 	printf (" %d    ",  b [ i ] [ j ] ); 
    }      // end of j loop       
    printf ("  \n" );     
  }  	 	 	 	 	 	 	// end of i loop 
    //logic for performing multiplication of a matrix and b matrix into c matrix is given as
  if (n!=p)
  {
    printf("Sorry Multiplication not possible  as the no. of columns in first Matrix is not equal to no of Rows of second matirix\n");
  }
  else
  {
    for(i=0; i<m; i++)
    {
      for(j=0; j<q; j++)
      {
         
        c[i][j]=0;
        for(k=0; k<n; k++)
        {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }                                           // end of k loop
      }                                          //end of j loop
    }                                         // end of i loop
   }                                  // end of else 
  printf("\n\n Here is your Third (PRODUCT) Matrix\n\n");
  {
    for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%d   ",c[i][j]);
      }                                         // end of j loop
    printf(" \n");
    }                                         // end of i loop
  }       
}
