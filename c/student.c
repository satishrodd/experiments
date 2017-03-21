#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee 
{
	char 	name[10]; 	// employee name.
	int 	id;		// employee id.
	int	salary;		// employee salary.
};

/*
 * function to create employee objects.
 */
struct employee * 
create_employee() 
{
    struct employee *s1;
    s1=malloc(sizeof(struct employee));
    return(s1);
}

/*
 *employee info.
 */
void 
employee_input(struct employee *s1)
{
    int exit = 0;
    /*
     *assigning input values
     */
    printf("enter employee name: ");
    scanf("%s",s1->name);
    printf("enter employee id: ");
    scanf("\n%d",& s1->id);

    /*
     * check salary if it is less than 0 or greater
     * than 10000.
     */
    while (!exit) {
    	printf("enter employee salary: ");
    	scanf("\n%d",&s1->salary);
	exit = 1;
	if (s1->salary < 0  | s1->salary >10000){
	   printf("salary is out of range. enter correct value.\n");
           exit = 0;
	  }
    }
}
void 
print_output(struct employee *s1)
{
	/*
	 * printing the employee details.
	 */
    printf("%s, %d, %d",s1->name,s1->id,s1->salary);
}
  
void 
main()
{
    struct employee *s1;
    s1 = create_employee();
    employee_input(s1);
    print_output(s1);
}
