#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define SLEEPTIME 1

int main(int argc(),char *argv[])
{
	FILE *fptr;
	fptr=fopen("test.dat","a");
	
	if(fptr==NULL)
	{
		exit(1);
	}
	
	int max = atoi(argv[1]);
	time_t now;
	time(&now);

	for(int i=0;i<max;i++)
	{	
		time(&now);
		fprintf(fptr,"[%d]\t%d\t%s",i,rand(),ctime(&now));
		sleep(SLEEPTIME);
	}	

	fclose(fptr);

	return 0;
}
