#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0, Sum1 = 0, result;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
  	
  	for(rows = 0; rows < i; rows++)
  	{
  	       Sum1 = Sum1 + a[rows][j - 1 - rows];
  	}
    
    result = Sum * Sum1;
    
 	printf("\n The Sum of Diagonal 1 Elements of a Matrix =  %d", Sum );
 	printf("\n The Sum of Diagonal 2 Elements of a Matrix =  %d", Sum1 );
 	printf("\n Result = %d", result);
 	
 	return 0;
}
