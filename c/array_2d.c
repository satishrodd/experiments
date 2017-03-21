#include<stdio.h>
void main()
{
	int matrix[3][2];
	int i,j;
	printf("enter the values of the matrix: ");
	scanf("%d",&matrix[3][2]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
	
			printf("%d\t",matrix[i][j]);
		}
	printf("\n");	
	}
}
