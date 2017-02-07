#include<stdio.h>
void main()
{
	int i,j=4;
	char string[10]="WORLD";
	char reverse[10];
	for(i=0;i<5;i++)
	{
		reverse[i]=string[j-i];
	}
	printf("%s",reverse);
	
}
