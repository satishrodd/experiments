#include<stdio.h>

struct student
{
	char name[20];
	int age;
	int roll;
};
	

int main()
{
	int i,n;
	struct student s[n];

	printf("Enter the number of students:");
	scanf("%d",&n);
	printf("Student  info\n");

	for(i=0;i<n;i++)
	{	
		printf("\nstudent %d\n",i+1);	
	
		printf("Enter the name :");
		scanf("%s",s[i].name);

		printf("Enter the age :");
		scanf("%d",&s[i].age);

		printf("Enter the roll No :");
		scanf("%d",&s[i].roll);
	}
	printf("\nDisplaying information\n\n");
	for(i=0;i<n;i++)
	{
		printf("student %d\n",i+1);

		printf("Name :%s\n",s[i].name);
		printf("Age :%d\n",s[i].age);
		printf("Roll No :%d\n\n",s[i].roll);
	}

}
