#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"compar_string.c"
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
    struct employee *emp;
    emp=malloc(sizeof(struct employee));
    return(emp);
}

/*
 *employee info.
 */
void 
employee_input(struct employee *emp)
{
    int exit = 0;
    /*
     *assigning input values
     */
    printf("enter employee name: ");
    scanf("%s",emp->name);
    printf("enter employee id: ");
    scanf("\n%d",& emp->id);

    /*
     * check salary if it is less than 0 or greater
     * than 10000.
     */
    while (!exit) {
    	printf("enter employee salary: ");
    	scanf("\n%d",&emp->salary);
	exit = 1;
	if (emp->salary < 0  | emp->salary >10000){
	   printf("salary is out of range. enter correct value.\n");
           exit = 0;
	  }
    }
}
void 
print_output(struct employee *emp)
{
	/*
	 * printing the employee details.
	 */
    printf("%s, %d, %d",emp->name,emp->id,emp->salary);
}
  
void 
main()
{
    int n,i,found;
    char search[10];
    struct employee *emp[10];
    printf("Enter the number of employee:");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        emp[i] = create_employee();
        employee_input(emp[i]);
    }
    printf("Enter the name of employee to search:");
    scanf("%s",search);
    for (i=0; i<n; i++) {
         found = string_compare(search, emp[i]->name);
         if (found) {
             print_output(emp[i]);
         }
    }
}
