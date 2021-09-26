void swap(int *i,int *j)
{
    int temp;
    temp = *i;
    *i=*j;
    *j=temp;
    
    return;
}

void sortArray(int *array[], int length)
{
    for(int i=0;i<=length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(*array[i]>*array[j]) swap(array[i],array[j]);
        }
    }

