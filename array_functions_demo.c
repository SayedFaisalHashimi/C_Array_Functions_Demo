#include <stdio.h>

// This program is written by  Sayed Faisal Hashimi
// It calculates the maximum, minimum, and sum of elements in an integer array.
// The program also validates user input for array size and array elements.


// Function declarations
void input_array(int x[],int* size);       // Function to input array elements with validation

void display_array(int x[], int* size);  // Displays all elements of the array

int max(int x[],int* size);                   // Function to find the maximum element

int min(int x[], int* size);                  // Function to find the minimum element

float sum_and_average(int x[],int* size, int* sum);  // Function to calculate the sum and average of elements



// main function
int main()
{
    int M=0,m=0; 
    int a[100];   // Array to store up to 100 integers
    int sum;      
    int size;     // Actual size of the array entered by the user

    float avg=0;
   
    input_array(a,&size);       // Input array elements
    display_array(a, &size);    // Prints all numbers stored in the array
    M=max(a,&size);             // Find maximum element
    m=min(a,&size);             // Find minimum element
    avg=sum_and_average(a,&size,&sum);// Calculate sum and average of elements


    // Display results
    printf(" Max element is : %d\n", M);
    printf(" Min element is : %d\n", m);
    printf(" Sum is : %d\n ", sum);
    printf("Average is : %.2f\n ", avg);

    return 0;
}



// Function to input array elements with validation
void input_array(int x[],int* size)
{
    int i;

    // Input and validate the array size
    
do {
    printf("\nEnter the size (1–100): ");
    scanf("%d", size);
    if(*size <= 0 || *size > 100)
        printf(" Invalid size! Please try again.\n");
} while(*size <= 0 || *size > 100);


     // Input and validate each array element

    for(i = 0; i < *size; i++) {
    int valid;
    do {
        printf("Enter element %d: ", i + 1);
        valid = scanf("%d", &x[i]);
        if(!valid) {
            printf("Invalid input! Enter an integer.\n");
            while(getchar() != '\n'); // clear buffer
        }
    } while(!valid);
}


    
}


// Function to find the maximum element in the array

int max(int x[],int* size)
{
    int Max=x[0],i;
    for(i=0;i<*size;i++)
    {
        if(x[i]>Max)
        {
        Max=x[i];
        }
        
    }
    
    return Max;
}



// Function to calculate the sum and average of array elements

float sum_and_average(int x[], int* size, int *sum)
{
    *sum = 0;
    for(int i = 0; i < *size; i++)
        *sum += x[i];
    return (*size) ? (float)(*sum)/(*size) : 0.0f;
}



// Function to find the minimum element in the array

int min(int x[], int* size) {
    int Min = x[0];
    for(int i = 1; i < *size; i++) {
        if(x[i] < Min) {
            Min = x[i];
        }
    }
    return Min;
}



// Function to display array's elements

void display_array(int x[], int* size)
{
    // Display the entered array
    int j;
    printf("\nYou entered the following numbers:\n");
      for(j=0; j<*size; j++) {
      printf("%d ", x[j]);
}
printf("\n");
}



