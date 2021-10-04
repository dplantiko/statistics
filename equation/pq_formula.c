//Solves quadratic equations in normal form: x^2+px+q=0
//Using pq formula:
//x1/2 = (-p/q) +- sqrt((p/2)^2-q))

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	if(argc<=1)
	{
		printf("Too less arguments.\n");
		return 1;
	}
	
	float x_1,x_2,p,q,d;
	
	p=atof(argv[1]);
	q=atof(argv[2]);
	
	d=((p/2)*(p/2))-q;
	
	if(d>0)
	{
		printf("d=%f\n2 solutions\n",d);
		
		x_1=((-p)/2)+sqrt((p/2)*(p/2)-q);
		printf("x1=%f\n",x_1);
		
		x_2=((-p)/2)-sqrt((p/2)*(p/2)-q);
		printf("x2=%f\n",x_2);
	}
	
	else if(d==0)
	{
		printf("d=%f\n1 solution\n",d);
		
		x_1=((-p)/2)+sqrt((p/2)*(p/2)-q);
		printf("x1=%f\n",x_1);
	}
	
	else if(d<0)
	{
		printf("d=%f\nNo solution\n",d);
		return 0;
	}

	return 0;
}
