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
    int array[]={1,5,3,2,7,8,9};
    
    //This will sort the array elements from lowest to highest number
    int length=(sizeof(array)/sizeof(int));
    for(int i=0;i<=length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(array[i]>array[j]) swap(&array[i],&array[j]);
        }
    }
    
    //Print the sorted array
    for(i=0;i<=length;i++)
    {
        printf("%d\n",array[i]);
    }
    
    return 0;
}
