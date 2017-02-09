#include<stdio.h>
#include<string.h>
void main()
{
	char string1[10];
	char string2[10];
	int i,n;
	printf("Enter the string1 : ");
	scanf("%s",&string1);
	printf("Enter the string2 : ");
	scanf("%s",&string2);
	n=strlen(string1);
	for(i=0;string2[i]!='\0';i++,n++)
	{
		string1[n]=string2[i];
	}
	printf("Output is : %s\n",string1);

}
