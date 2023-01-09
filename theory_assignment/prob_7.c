#include <stdio.h>

void sorting_array(int *array , int n)
{
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

    printf("After sorting: ");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ", array[i]);
    }
}

// function to calculate the median of the array
float get_median(int array[] , int n)
{
    float median=0;
    
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    else
        median = array[n/2];
    
    return median;
}

int main()
{
    int array_1[30] = {0};

    int i=0 ,n=0;
    float median=0;

    printf("Enter the amount of numbers:");
    scanf("%d",&n);

    printf("The numbers are:");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&array_1[i]);
    }

    sorting_array(array_1 , n);
 
    median = get_median(array_1 , n);
    
    printf("\nmedian= %f", median);
    return 0;
}