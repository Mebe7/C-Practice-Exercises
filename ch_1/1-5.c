#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

/*Prints out a F to C temperature table using a for loop 
  as well as symbolic constants*/


main()
{
	int ftemp;

	printf(" F  |  C  \n\n");

	for(ftemp = MAX; ftemp >= MIN; ftemp = ftemp - STEP){
		printf("%3d |%6.1f\n", ftemp, (5.0/9.0) * (ftemp - 32));
	}
}
