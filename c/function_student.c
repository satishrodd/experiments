#include<stdio.h>
struct student
{
	char name[20];
	int age;
	int roll;
};

void student_print(struct student *s2)
{
	printf("\nDisplaying info..\n\n");

	printf("Name:%s\n",s2->name);
	printf("Age:%d\n",s2->age);
	printf("roll no:%d\n",s2->roll);


}

void student_input(struct student *s1)
{
	
	printf("enter the name:");
	scanf("%s",s1->name);
	printf("enter age:");
	scanf("%d",&s1->age);
	printf("Enter roll no:");
	scanf("%d",&s1->roll);


}
int main()
{
	struct student s;
	printf("student info:\n");
	student_input(&s);

	student_print(&s);
	return 0;
}
