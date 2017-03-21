#include<stdio.h>
int product(int num1,int num2);
int main()
{
	int a,b;
	int prod; 
	prod=product(a,b);
    printf("%d\n",prod);
	return 0;
}

int product(int num1,int num2)
{
	printf("Enter the 2 numbers:");
	scanf("%d %d",&num1,&num2);

	printf("the product is:\n");
	return num1*num2;
}

