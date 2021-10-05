//Solves quadratic equations in normal form: x^2+px+q=0
//Using pq-formula

void pq_formula(float p, float q)
{

//Calculating discriminant d

	float d=((p/2)*(p/2))-q;
	
	float x_1,x_2;
	
//discriminant > 0
//Two possible solutions, sqrt of positive number
	if(d>0)
	{
		fprintf(stdout,"d>0:\tTwo solutions\n");
		
		x_1=((-p)/2)+sqrt(d);
		fprintf(stdout,"x1=%.2f\n",x_1);
		
		x_2=((-p)/2)-sqrt(d);
		fprintf(stdout,"x2=%.2f\n",x_2);
	}

//discriminant = 0
//One possible solution since sqrt of 0
	else if(d==0)
	{
		fprintf(stdout,"d=0:\tOne solution\n");
		
		x_1=x_1=((-p)/2)+sqrt(d);
		fprintf(stdout,"x1=%.2f\n",x_1);
	}

//discriminant < 0
//No solution since sqrt of negative number is not possible
	else if(d<0)
	{
		fprintf(stdout,"d<0\tNo solution");
	}
}

//Solves quadratic equations in abc form: ax^2+bx+c=0
//Using midnight formula

void midnight_formula(float a, float b, float c)
{

//Calculating discriminant d

	float d=(b*b)-(4*a*c);
	
	float x_1,x_2;

//discriminant > 0
//Two possible solutions, sqrt of positive number
	if(d>0)
	{
		fprintf(stdout,"d>0\tTwo solutions\n");
	
		x_1=((-b)+sqrt(d))/(2*a);
		fprintf(stdout,"x1 = %.2f\n",x_1);

		x_2=((-b)-sqrt(d))/(2*a);
		fprintf(stdout,"x2 = %.2f\n",x_2);
	}

//discriminant == 0
//One possible solution since sqrt of 0
	else if(d==0)
	{
		fprintf(stdout,"d=0\tOne solution\n");
		
		x_1=((-b)+sqrt(d))/(2*a);
		fprintf(stdout,"x1 = %.2f\n",x_1);
	}

//discriminant < 0
//No solution since sqrt of negative number is impossible
	else if(d<0)
	{
		fprintf(stdout,"d<0\tNo solution\n");
	}
}

		
