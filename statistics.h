void swap(float *i, float *j)
{
    float temp;
    temp=*i;
    *i=*j;
    *j=temp;
    
    return;
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
        
    return;
}

void print_array(float array[], int length)
{
    int i;
    
    for(i=0;i<=length-1;i++)
    {
        printf("%.2f ",array[i]);
    }
    printf("\n");

    return;
}

void print_sorted_array(float array[], int length)
{
    
    sort_array(array,length);
    int i;
    
    for(i=0;i<=length-1;i++)
    {
        printf("%.2f ",array[i]);
    }
    printf("\n");

    return;
}

//Calculates the difference between highest and lowest number
float calc_range(float array[], int length)
{
    sort_array(array,length);
    float r;
    r=array[(length-1)]-array[0];
    
    return r;
}

//Sum of all numbers of the array
float calc_sum(float array[], int length)
{
    float s=0.0;
    int i;
    for(i=0;i<=length-1;i++)
    {
        s=s+array[i];
    }
    
    return s;
}

//Calculates the average
float calc_avg(float array[], int length)
{
    float avg,s;
    s=calc_sum(array,length);
    avg=s/length;
    
    return avg;
}

//Lowest number
float calc_min(float array[], int length)
{
    sort_array(array,length);
    
    return array[0];
}

//Highest number
float calc_max(float array[], int length)
{
    sort_array(array,length);
    
    return array[(length-1)];
}

//Variance (n = length)
float calc_variance(float array[], int length)
{
    int i;
    float avg,s=0.0;
    avg=calc_avg(array,length);
    
    for(i=0;i<=length-1;i++)
    {
        s=s+((array[i]-avg)*(array[i]-avg));
    }
    
    return s/length;
}

//Corrected Variance (n = length-1)
float calc_corr_variance(float array[], int length)
{
    int i;
    float avg,s=0.0;
    avg=calc_avg(array,length);
    
    for(i=0;i<=length-1;i++)
    {
        s=s+((array[i]-avg)*(array[i]-avg));
    }
    
    return s/(length-1);
}

//Standard Deviation (n = length)
//Square root of Variance
float calc_sd(float array[], int length)
{
    float var,sd;
    var=calc_variance(array,length);
    sd=sqrt(var);

    return sd;
}

//Corrected Standard Deviation
//Square root of Corrected Variance
float calc_corr_sd(float array[], int length)
{
    float var,sd;
    var=calc_corr_variance(array,length);
    sd=sqrt(var);

    return sd;
}

//50% of all Values are higher, 50% lower than Median
float calc_median(float array[], int length)
{
    float median;
    int i;
    
    sort_array(array,length);
    
    if(length%2 != 0)
    {
        i=(length-1)/2;
        median=array[i];
    }
    
    else if(length%2 == 0)
    {
        i=(length/2)-1;
        median=(array[i]+array[(i+1)])/2;
    }
    
    return median;
}

//75% are less than Upper Quartil
float calc_upper_quartil(float array[], int length)
{
    float upper_quartil;
    float p,h,f;
    int i;
    p=0.75;
    
    sort_array(array,length);
    
    //Check for p*length is integer or not
    h=length;
    h=p*h;
    length=p*length;
    
    if((h-length)<=0.0001)
    {
        i=(int)(h-1);
        upper_quartil=0.5*(array[i]+array[(i+1)]);
    }
    else
    {
        i=(int)h;
        upper_quartil=array[i];
    }
    
    return upper_quartil;
}

//25% are greater than Lower Quartil
float calc_lower_quartil(float array[], int length)
{
    float lower_quartil;
    float p,h,f;
    int i;
    p=0.25;
    
    sort_array(array,length);
    
    //Check for p*length is integer or not
    h=length;
    h=p*h;
    length=p*length;
    
    if((h-length)<=0.0001)
    {
        i=(int)(h-1);
        lower_quartil=0.5*(array[i]+array[(i+1)]);
    }
    else
    {
        i=(int)h;
        lower_quartil=array[i];
    }
    
    return lower_quartil;
}

float calc_p_quantil(float array[], int length, float p)
{
    float p_quantil,h,f;
    int i;

    sort_array(array,length);

    //Check for p*length is integer or not
    h=length;
    h=p*h;
    length=p*length;

    if((h-length)<=0.0001)
    {
        i=(int)(h-1);
        p_quantil=0.5*(array[i]+array[(i+1)]);
    }
    else
    {
        i=(int)h;
        p_quantil=array[i];
    }

    return p_quantil;
}
