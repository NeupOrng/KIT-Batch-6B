#include<stdio.h>


void main()
{
	int  i , j, k, a1, a2, b1, b2;
	printf("This is the program of matrix multiplication\n");
	printf("Input the number of row in matrix 1 : ");
	scanf("%d", &a1);
	printf("\nInput the number of collum in matrix 1 : ");
	scanf("%d", &a2);
	printf("\nInput the number of row in matrix 2 : ");
	scanf("%d", &b1);
	printf("\nInput the number of collum in matrix 2 : ");
	scanf("%d", &b2);
	int matrix1[a1][a2],matrix2[b1][b2], answer[a1][a2];
	if (a2 != b1)
	{
		printf("No answer");
	}
	else
	{
		for (i=0;i<a1;i++)
		{
			for (j=0;j<a2;j++)
			{
				printf("\nEnter the value to the matrix1[%d][%d] : ", i,j);
				scanf("%d", &matrix1[i][j]);
			}	
		}
		for (i=0;i<b1;i++)
		{
			for (j=0;j<b2;j++)
			{
			printf("\nEnter the value to the matrix2[%d][%d] : ", i,j);
			scanf("%d", &matrix2[i][j]);
			}	
		}
		for (i=0;i<a1;i++)
		{	for(j=0;j<a2;j++)	{
				answer[i][j]=0;
				for( k = 0; k< a2; k++){
					answer[i][j] += matrix1[j][k]*matrix2[k][j];
				}	}	}
		printf("answer\n");
		for (i=0;i<a1;i++)
		{for(j=0;j<a2;j++){
				printf("%5d",answer[i][j]);
		}printf("\n");	}	}
	
}
 
