#include<stdio.h>
int main()
{
	int m,n,mat[100][100],i,j;
	printf("enter the size of the matrix: ");
	scanf("%d %d",&m,&n);
	printf("enter the matrix values:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			scanf("%d",&mat[i][j]);
		}
	}
	printf("the matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}

