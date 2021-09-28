//Program for Linear Regression
//Approach: Method of Least Squares
#include <stdio.h>

int main()
{
    //Custom array
    int length;
    printf("Please enter number of values:");
    scanf("%d",&length);
    float array[length][2];
    
    for(int i=0;i<=length-1;i++)
    {
        printf("Please enter x[%d]",i);
        scanf("%f",&array[i][0]);
        printf("Please enter y[%d]",i);
        scanf("%f",&array[i][1]);
    }
    
    //printf("Length = %i\n",length);
    
    for(int i=0;i<=length-1;i++)
    {
        printf("x[%i] %.4f\ty[%i] %.4f\n",i,array[i][0],i,array[i][1]);
    }
    
    //Calculate Sum and Average
    float sumx=0;
    float sumy=0;
    
    for(int i=0;i<=length-1;i++)
    {
        sumx+=array[i][0];
        sumy+=array[i][1];
    }
    
    float avgx=sumx/length;
    float avgy=sumy/length;
    
    //printf("Sum X Values = %.2f\nAverage X Values = %.2f\n",sumx,avgx);
    //printf("Sum Y Values = %.2f\nAverage Y Values = %.2f\n",sumy,avgy);
    
    //Calculate mount m
    //Calulate dividend and divisor
    float dividend=0;
    float divisor=0;
    
    for(int i=0;i<=length-1;i++)
    {
        dividend+=((array[i][0]-avgx)*(array[i][1]-avgy));
        divisor+=(array[i][0]-avgx)*(array[i][0]-avgx);
    }
    
    //printf("Dividend = %.2f\n",dividend);
    //printf("Divisor = %.2f\n",divisor);
    
    //Mount m = dividend/divisor
    float m=dividend/divisor;
    
    //printf("Mount = %.4f\n",m);

    //Y Value where x=0
    //b=avgy-m*avgx
    float b=avgy-m*avgx;
    
    //printf("Axis Intersection Point = %.4f\n",b);
    //printf("g(x) = %.4f*x + %.4f\n",m,b);
    
    return 0;
}
