#include<stdio.h>
void main()
{
	int i,j,flag;
	printf("Prime numbers between 1 to 100 :\n");
	for(i=2;i<100;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\n",i);
		}
	}
}
