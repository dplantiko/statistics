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
	else if(argc>4)
	{
		fprintf(stderr,"Error:\tToo much arguments\n");
		exit(1);
	}

	float a,b,c;
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);

	float x_1,x_2;
	int number_of_sol;

	midnight_formula(a,b,c,&x_1,&x_2,&number_of_sol);

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
