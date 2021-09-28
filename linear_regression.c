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
    
    /*
    //Example array
    float array[7][2];
    //X Values          Y Values
    array[0][0]=100;    array[0][1]=40;
    array[1][0]=200;    array[1][1]=50;
    array[2][0]=300;    array[2][1]=50;
    array[3][0]=400;    array[3][1]=70;
    array[4][0]=500;    array[4][1]=65;
    array[5][0]=600;    array[5][1]=65;
    array[6][0]=700;    array[6][1]=80;
    
    const int length=(sizeof(array)/2)/sizeof(float);
     */
    
    printf("%i\n",length);
    
    for(int i=0;i<=length-1;i++)
    {
        printf("x[%i] %.4f\ty[%i] %.4f\n",i,array[i][0],i,array[i][1]);
    }
    
    //Calculate Sum and Average
    float sumx=0;
    for(int i=0;i<=length-1;i++)
    {
        sumx+=array[i][0];
    }
    float avgx=sumx/length;
    
    float sumy=0;
    for(int i=0;i<=length-1;i++)
    {
        sumy+=array[i][1];
    }
    float avgy=sumy/length;
    
    //printf("Sum X Values = %.2f\nAverage X Values = %.2f\n",sumx,avgx);
    //printf("Sum Y Values = %.2f\nAverage Y Values = %.2f\n",sumy,avgy);
    
    //Calculate mount m
    //Calulate dividend
    float dividend=0;
    for(int i=0;i<=length-1;i++)
    {
        dividend+=((array[i][0]-avgx)*(array[i][1]-avgy));
    }
    //printf("Dividend = %.2f\n",dividend);

    //Calculate divisor
    float divisor=0;
    for(int i=0;i<=length-1;i++)
    {
        divisor+=(array[i][0]-avgx)*(array[i][0]-avgx);
    }
    
    //printf("Divisor = %.2f\n",divisor);
    
    //Mount m = dividend/divisor
    float m=dividend/divisor;
    //printf("Mount = %.4f\n",m);

    //Y Value where x=0
    //b=avgy-m*avgx
    float b=avgy-m*avgx;
    //printf("Axis Intersection Point = %.4f\n",b);
    
    printf("g(x) = %.4f*x + %.4f\n",m,b);
    
    return 0;
}
