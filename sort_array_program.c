#include <stdio.h>

//Function to swap two integer numbers
void swap(int *i,int *j)
{
    int temp;
    temp = *i;
    *i=*j;
    *j=temp;
    
    return;
}

int main()
{
    //Example array
    int array[]={1,5,3,2,7,8,9};
    
    //The algo itself are two nested for loops
    //This will sort the array elements from lowest to highest number
    for(int i=0;i<=(sizeof(array)/sizeof(int));i++)
    {
        for(int j=i+1;j<(sizeof(array)/sizeof(int));j++)
        {
            if(array[i]>array[j]) swap(&array[i],&array[j]);
        }
    }
    
    //Print the sorted array
    for(i=0;i<(sizeof(array)/sizeof(int));i++)
    {
        printf("%d\n",array[i]);
    }
    
    return 0;
}
