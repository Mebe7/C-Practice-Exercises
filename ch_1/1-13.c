#include <stdio.h>
#define MAXLENGTH 20

//Prints a histogram of the length of words in it's input of up to length 20

main()
{
	int lengths[MAXLENGTH] = {0};
	int c, length = 0, i;

	while((c = getchar()) != EOF){
		if(c == '\n' || c == ' ' || c == '\t'){
			lengths[length]++;
			length = 0;
		}
		else
			length++;
	}

	for( i = 1; i <= MAXLENGTH; i++){
		int j = 0;

		if (i < 10){
			printf(" %d: ", i);
		}
		else{
			printf("%d: ", i);
		}

		for(j = 1; j <= lengths[i]; j++){
			printf("|");
		}

		printf("\n");

	}
}
