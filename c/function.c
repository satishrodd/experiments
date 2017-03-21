#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int i,j,sum;
	printf("enter the 2 numbers:");
	scanf("%d %d",&i,&j);
	
	sum=add(i,j);
	printf("sum=%d",sum);

}
