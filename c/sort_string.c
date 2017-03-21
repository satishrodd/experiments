#include<stdio.h>
#include<string.h>
int main()
{
	char input[100],output[100];
	int i,t,x,len,no[26]={0};
	char ch;	
	printf("Enter the string :");
	scanf("%s\n",input);
	len=strlen(input);
	for(i=0;i<len;i++)
	{
	 ch=input[i]-'a';
 	 no[ch]++;	 
	}
	t=0;
	for (ch='a'; ch<='z';ch++)
	{
		x=ch-'a';
		for(i=0; i<no[x];i++)
		{
		output[t]=ch;
		t++;
		}
	}	
	output[t]='\0';
	printf("%s\n",output);
	return 0;

}
