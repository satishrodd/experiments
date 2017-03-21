#include<stdio.h>
void main()
{
	char character;
	int ch;
	printf("Enter the character : ");
	scanf("%c",&character);
	ch=character-'a';

	printf("position of the character is :%d\nASCII value of the character is :%d\n",ch+1,character);
}
