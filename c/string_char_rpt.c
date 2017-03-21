#include<stdio.h>
void main()
{
	int i,j;
	char string[10]="abad ";
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(string[i]==string[j])
			{
				printf("%s\nRepeated\n");
			
				
				return;
			}

		}
	}
	
	printf("%s \nNOt Repeated\n");
	

}
