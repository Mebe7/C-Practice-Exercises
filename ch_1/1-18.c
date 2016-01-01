#include <stdio.h>
#include <string.h>
#define MAXLINESIZE 1000

//Removes the blanks and tabs from the ends of lines
main()
{
	int c, i = 0, f;
	char line[MAXLINESIZE];

	while((c = getchar()) != EOF){
		if(c != '\n'){
			line[i] = c;
			i++;
		}

		else if(c == '\n'){
			while(line[i] == ' ' || line[i] == '\t' || line[i] == '\n'){
				i--;
			}

			f = i;

			for (i = 0; i <= f; i++){
				putchar(line[i]);
			}
			putchar('\n');
			i = 0;
			memset(&line[0], 0, sizeof(line));
		}
	}
}
