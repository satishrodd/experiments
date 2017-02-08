#include<stdio.h>
void main()
{

	int i,n,l;
	int number[10];
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &number[i]);
	}
	printf("Enter the location to be deleted:");
	scanf("%d", &l);
	printf("The array is:\n");

	for(i=l-1;i<n;i++)
	{
		number[i]=number[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",number[i]);
	}
}
	










	

