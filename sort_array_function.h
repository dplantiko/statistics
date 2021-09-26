void swap(int *i,int *j)
{
    int temp;
    temp = *i;
    *i=*j;
    *j=temp;
    
    return;
}

void sortArray(int array[], int length)
{
    int i,j;
    for(i=0;i<=length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(array[i]>array[j]) swap(&array[i],&array[j]);
        }
    }    
    
    return;
}

void printArray(int array[], int length)
{
    int i;
    for(i=0;i<=length-1;i++)
    {
        printf("%d\n",array[i]);
    }
    
    return;
}
    
