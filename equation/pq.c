//Solves quadratic equations in normal form: x^2+px+q=0
//Using pq formula:
//x1/2 = (-p/q) +- sqrt((p/2)^2-q))

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "equation.h"

int main(int argc, char *argv[])
{
	if(argc<=2)
	{
		fprintf(stderr,"Error:\tNot enough arguments\n");
		exit(1);
	}
	else if(argc>3)
	{
		fprintf(stderr,"Error:\tToo much arguments\n");
		exit(1);
	}

	float p,q;
	p=atof(argv[1]);
	q=atof(argv[2]);

	float x_1,x_2;
	int number_of_sol;

	pq_formula(p,q,&x_1,&x_2,&number_of_sol);

	if(number_of_sol==2)
	{
		fprintf(stdout,"x1 = %.2f\tx2 = %.2f\n",x_1,x_2);
	}
	else if(number_of_sol==1)
	{
		fprintf(stdout,"x1 = %.2f\n",x_1);
	}
	else if(number_of_sol==0)
	{
		fprintf(stdout,"N/A\n");
	}

	return 0;
}
