//Solves quadratic equations in form: ax^2+bx+c=0
//Using midnight formula:
//x1/2 = ((-b+-)(sqrt((b*b)-(4*a*c)))/2*a

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	if(argc<=1)
	{
		fprintf(stderr,"Too less arguments\n");
		return 1;
	}
	if(argc>4)
	{
		fprintf(stderr,"Too much arguments\n");
		return 1;
	}

	float a,b,c,d,x_1,x_2;
	
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);

//Discriminant to check how many solutions the equation has
	d=(b*b)-(4*a*c);

//Discriminant greater than 0
//The sqrt of a positive number always has two solutions
	if(d>0)
	{
		fprintf(stdout,"Two solutions\n");
		
		x_1=((-b)+sqrt(d))/(2*a);
		fprintf(stdout,"x1 = %.2f\n",x_1);
		
		x_2=((-b)-sqrt(d))/(2*a);
		fprintf(stdout,"x2 = %.2f\n",x_2);
	}

//Discriminant equal to 0
//The sqrt of 0 is always 1
	else if(d==0)
	{
		fprintf(stdout,"One solution\n");
		
		x_1=((-b)+sqrt(d))/(2*a);
		fprintf(stdout,"x_1 = %.2f\n",x_1);
	}

//Discriminant less than 0
//Square root of negative number is impossible
	else if(d<0)
	{
		fprintf(stdout,"No solution\n");
		return 1;
	}
				
	return 0;
}
