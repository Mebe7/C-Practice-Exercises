#include <stdio.h>
#include <string.h>
#define MAXLINESIZE 1000

//Reverses the given lines one at a time

main()
{
	int c, i = 0;
	char line[MAXLINESIZE];

	while((c = getchar()) != EOF){
		if(c != '\n'){
			line[i] = c;
			i++;
		}
		else if(c == '\n'){
			for(i; i >= 0; i--){
				putchar(line[i]);
			}
			memset(&line[0], 0, sizeof(line));
			i = 0;

			putchar('\n');
		}
		else{
			printf("Something went wrong...");
		}
	}
}
