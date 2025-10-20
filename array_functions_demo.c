#include <stdio.h>
     // This program is written by Eng. Sayed Faisal Hashimi and will calculate the Maximum number between an array's elements & sum of them. 



// Function declarations.

void def_ine(int x[],int* size);

int max(int x[],int* size);  

int min(int x[], int* size);

void sum2(int x[],int* size, int* sum);



// main part.
int main()
{
    int M=0,sum=0,m=0; 
    int a[100];
    int size;
    def_ine(a,&size);
    M=max(a,&size);
    m=min(a,&size);
    sum2(a,&size, &sum);
    printf(" Max element is : %d\n", M);
    printf(" Min element is : %d\n", m);
    printf(" Sum is : %d ", sum);

    return 0;
}



// called  Definition function for a[]; .
void def_ine(int x[],int* size)
{
    int i;
    
do {
    printf(" Enter the size (1–100): ");
    scanf("%d", size);
    if(*size <= 0 || *size > 100)
        printf(" Invalid size! Please try again.\n");
} while(*size <= 0 || *size > 100);


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


    printf("\nYou entered the following numbers:\n");
      for(i=0; i<*size; i++) {
      printf("%d ", x[i]);
}
printf("\n");
    
}


// Called Max of a[i] elements calculation function .
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



// Called finding sum of the elements for a[i]; .
void sum2(int x[],int* size, int* sum)
{
    int j;
    for(j=0;j<*size;j++)
    {
        *sum+=x[j];
    }
    
    
    
}



int min(int x[], int* size) {
    int Min = x[0];
    for(int i = 1; i < *size; i++) {
        if(x[i] < Min) {
            Min = x[i];
        }
    }
    return Min;
}




