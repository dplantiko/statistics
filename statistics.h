void swap(float *i, float *j)
{
    float temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

//Sorts an array from lowest to highest number
void sort_array(float array[], int length)
{
    int i,j;
        
    for(i=0;i<=length-1;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(array[i]>array[j]) swap(&array[i],&array[j]);
        }
    }
}

void print_array(float array[], int length)
{
    int i;
    
    for(i=0;i<=length-1;i++)
    {
        printf("%.2f ",array[i]);
    }
    printf("\n");
}

//Calculates the difference between highest and lowest number
float calc_range(float array[], int length)
{    
    return array[(length-1)]-array[0];
}

//Sum of all numbers of the array
float calc_sum(float array[], int length)
{
    float s=0.0;
    
    for(int i=0;i<=length-1;i++)
    {
        s=s+array[i];
    }
    
    return s;
}

//Calculates the average
float calc_avg(float array[], int length, float sum)
{   
    return sum/length;
}

//Lowest number
float calc_min(float array[], int length)
{
    return array[0];
}

//Highest number
float calc_max(float array[], int length)
{   
    return array[(length-1)];
}

//Variance (n = length)
float calc_variance(float array[], int length, float avg)
{
    float s=0.0;
    
    for(int i=0;i<=length-1;i++)
    {
        s=s+((array[i]-avg)*(array[i]-avg));
    }
    
    return s/length;
}

//Corrected Variance (n = length-1)
float calc_corr_variance(float array[], int length, float avg)
{
    float s=0.0;
    
    for(int i=0;i<=length-1;i++)
    {
        s=s+((array[i]-avg)*(array[i]-avg));
    }
    
    return s/(length-1);
}

//Standard Deviation (n = length)
//Square root of Variance
float calc_sd(float array[], int length, float var)
{
    float sd;

    sd=sqrt(var);

    return sd;
}

//50% of all Values are higher, 50% lower than Median
float calc_median(float array[], int length)
{
    int i;
    
    if(length%2 != 0)
    {
        int i=(length-1)/2;
        return array[i];
    }
    
    else if(length%2 == 0)
    {
        int i=(length/2)-1;
        return (array[i]+array[(i+1)])/2;
    }
    
    return 1;
}

float calc_p_quantil(float array[], int length, float p)
{
    float h,f;
    int i,j;
    
    j=length;

    //Check for p*length is integer or not
    h=p*length;

    if((h-(p*length)<=0.0001))
    {
        i=(int)(h-1);
        return 0.5*(array[i]+array[(i+1)]);
    }
    else
    {
        i=(int)h;
        return array[i];
    }
}
