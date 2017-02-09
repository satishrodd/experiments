#include<stdio.h>
#include<string.h>
void main()
{
	 char string1[100],string2[100];
 	 int n,i,j;
	 char reverse[100];
	 char out[20];
	 printf("Enter the string1 : ");
	 scanf("%s",&string1);
	 printf("Enter the string2 : ");
	 scanf("%s",&string2);
	
	i=strlen(string1);
	for(j=0;string2[j]!='\0';j++,i++)
	{
		string1[i]=string2[j];
	}
	printf("Concatenation of two strings : %s\n",string1);
	n=strlen(string1);
	
	for(j=0,i=n-1;j<n-1,i>-1;j++,i--)
	{

		reverse[j]=string1[i];
	}
	reverse[n]='\0';
	printf("Reverse of the output : %s \n",reverse);
}
