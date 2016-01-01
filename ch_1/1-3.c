#include <stdio.h>

/* Program that prints out a table of temps in F by 20 and their 
   corrosponding C temp */

main()
{
	float ftemp, ctemp;
	int min, max, step;

	min = 0;
	max = 300;
	step = 20;

	ftemp = min;

	printf(" F  |  C  \n\n");

	while(ftemp <= max){
		ctemp = (5.0/9.0) * (ftemp-32.0);
		printf("%3.0f | %6.1f\n", ftemp, ctemp);
		ftemp += step;
	}
}
