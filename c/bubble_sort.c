#include<stdio.h>

/*
 * Function to sort the given array.
 */

void sort_array(int *array, int n)
{
    int i, k, temp, choice;
    /*
     *asking for which type of sorting
     * to be done
     */
    printf("\nselect type of sorting: type 1 for ascending or type 2 for discending\n");
    scanf("%d",&choice);

    for(k=0;k<n;k++) {
        for(i=0;i<n-1;i++){
	    if (choice==1){
                if (array[i] > array[i+1]){
		    temp=array[i];
		    array[i]=array[i+1];
		    array[i+1]=temp;		
		}	
	    } else {
		if (array[i] < array[i+1]){
    		    temp=array[i];
		    array[i]=array[i+1];
		    array[i+1]=temp;
		}
	    }
	}
    }
}

/*
 * Print the given array.
 */
void print_array(int *a, int n)
{
    int i;
    /*
     *sorted array.
     */
    printf("Array:\n");
    for(i=0;i<n;i++) {
    	printf("%d ",a[i]);
    }
}

/*
 * Function to take array inputs.
 */
void input_array(int *a, int *n) 
{
    /*
     *initializing variables.
     */
    int i;

    /*
     *taking the input.
     */
    printf("Enter the number of array elements:");
    scanf("%d",n);
    printf("Enter the array elements:");
    for(i=0;i<*n;i++) {
	scanf("%d",&a[i]);
    }
}
void main()
{
    /*
     *initializing variables.
     */
    int a[50], n;
    input_array(a, &n);
    print_array(a, n);
    sort_array(a, n);
    print_array(a, n);
}
