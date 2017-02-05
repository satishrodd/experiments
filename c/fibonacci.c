#include<stdio.h>
void main()
{
	int i,j,k,n;
	i=j=1;
	for(n=0;n<8;n++)
	{
		k=i+j;
		i=j;
		j=k;
	printf("%d ",k);
	}

}
