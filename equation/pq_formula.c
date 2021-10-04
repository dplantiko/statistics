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
	
	float x,p,q,d;
	
	p=atof(argv[1]);
	q=atof(argv[2]);

	printf("p=%f\n",p);
	printf("q=%f\n",q);

	x=((-p)/2)+sqrt((p/2)*(p/2)-q);
	printf("x1=%f\n",x);
	x=((-p)/2)-sqrt((p/2)*(p/2)-q);
	printf("x2=%f\n",x);

	return 0;
}
