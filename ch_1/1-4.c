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

	ctemp = min;

	printf(" C  |  F  \n\n");

	while(ctemp <= max){
		ftemp = (9.0/5.0) * (ctemp+32.0);
		printf("%3.0f | %6.1f\n", ctemp, ftemp);
		ctemp += step;
	}
}
