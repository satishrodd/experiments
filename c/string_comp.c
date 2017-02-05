#include<stdio.h>

void compare(char* s1, char* s2, int len)
{
	int i;
	printf("%s---%s\n", s1, s2);
	for (i=0;i<len;i++)
	{
		if(s1[i]!=s2[i]) {
			printf("not same");
			return;
		}
	}
	
	printf("Both are same");
	return;
}
void main()
{
	char str1[10]="abcd";
	char str2[10]="abce";

	compare(str1, str2, 4);

}


