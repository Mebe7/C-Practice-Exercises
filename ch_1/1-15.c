#include <stdio.h>
#define MAX 300
#define MIN 0
#define STEP 20

//temperature conversion using functions

float tempConvert(int fTemp)
{
	float cTemp = ((5.0/9.0) * (fTemp - 32));

	return cTemp;
}

main()
{
	int fTemp;
	float cTemp;

	printf(" F  |   C  \n\n");

	for(fTemp = MIN; fTemp <= MAX; fTemp = fTemp + STEP){
		cTemp = tempConvert(fTemp);
		printf("%3d | %6.2f\n", fTemp, cTemp);
	}


}


