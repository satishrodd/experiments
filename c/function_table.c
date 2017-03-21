#include<stdio.h>
int product(int num);
void main()
{
	int a,prod;
	printf("Enter the value:\n");
	scanf("%d",&a);
	prod=product(a);	

}
int product(int num)
{
	int i,prod;
	printf("multiflication table of %d is:\n",num);
	for(i=1;i<=10;i++)
	{
		prod=i*num;
		printf("%d\n",prod);	
	}
}
