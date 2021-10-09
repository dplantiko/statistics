#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	
	printf("Enter integer value: ");
	scanf("%d",&number);

	int binarray[64];
	
	int counter=0;
	for(int i=0;number>=1;i++,counter++)
	{
		printf("%d\t:2\t%d\tREM %d\t%.0f\n",number,(number/2),(number%2),(pow(2,i)));
		binarray[i] = (number%2);
		number=(number/2);
	}
	
	printf("In Dual:\n");

	for(int i=0;i<counter;i++)
	{
		printf("%d",binarray[i]);
		if((i+1)%4==0)
		{
			printf(" ");
		}
	}
	
	printf("\n");
	
	return 0;
}
