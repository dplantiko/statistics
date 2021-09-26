#include <stdio.h>

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
    int i,j;
    
    int array[]={1,5,3,2,7,8,9};
    
    for(i=0;i<=(sizeof(array)/sizeof(int));i++)
    {
        for(j=i+1;j<(sizeof(array)/sizeof(int));j++)
        {
            if(array[i]>array[j]) swap(&array[i],&array[j]);
        }
    }
    
    for(i=0;i<(sizeof(array)/sizeof(int));i++)
    {
        printf("%d\n",array[i]);
    }
    
    return 0;
}
            
