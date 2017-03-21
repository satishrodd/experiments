#include<stdio.h>
void main()
{
	char string[10]="abababe";
	char out[5];
	int i,j,n;
	printf("%s\n",string);
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(string[i]==string[j])
				{
					n=n+1;
					out[0]=string[i];
					printf("%s %d\n",out,n);
				}
		}	
	if(string[i]==string[i+1])
	{
		i=i+1;
	}	
	n=0;
	}
}







			

				
		



















	


