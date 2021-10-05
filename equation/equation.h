//Solves quadratic equations in normal form: x^2+px+q=0
//Using pq-formula
void pq_formula(float p, float q, float *x_1, float *x_2, int *number_of_sol)
{

//Calculating discriminant d
	float d=((p/2)*(p/2))-q;

//discriminant > 0
//Two possible solutions, sqrt of positive number
	if(d>0)
	{
        	*number_of_sol=2;

        	*x_1=((-p)/2)+sqrt(d);
		*x_2=((-p)/2)-sqrt(d);

	}

//discriminant = 0
//One possible solution since sqrt of 0
	else if(d==0)
	{
        	*number_of_sol=1;

        	*x_1=(-p)/2;
	}

//discriminant < 0
//No solution since sqrt of negative number is not possible
	else if(d<0)
	{
        	*number_of_sol=0;
	}
}

//Solves quadratic equations in abc form: ax^2+bx+c=0
//Using midnight formula
void midnight_formula(float a, float b, float c, float *x_1, float *x_2, int *number_of_sol)
{

//Calculating discriminant d
	float d=b*b-4*a*c;

//discriminant > 0
//Two possible solutions, sqrt of positive number
	if(d>0)
	{
        	*number_of_sol=2;

        	*x_1=((-b)+sqrt(d))/(2*a);
		*x_2=((-b)-sqrt(d))/(2*a);
	}

//discriminant = 0
//One possible solution since sqrt of 0
	else if(d==0)
	{
        	*number_of_sol=1;

        	*x_1=(-b)/(2*a);
	}

//discriminant < 0
//No solution since sqrt of negative number is impossible
	else if(d<0)
	{
        	*number_of_sol=0;
	}
}
