int factorial(int n)
{
	int f=1;

	for(int c=1;c<=n;c++)
	{
		f=f*c;
	}

	return f;
}

double binom_coefficient(int n, int k)
{
	double b;

	b=(factorial(n))/((factorial(n-k))*(factorial(k)));

	return b;
}

double dbinom(int n, int k, double p, double q)
{
	double probability;
	probability=(binom_coefficient(n,k))*pow(p,k)*pow(q,(n-k));

	return probability;
}
