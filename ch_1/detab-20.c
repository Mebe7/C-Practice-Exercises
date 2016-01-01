#include <stdio.h>
#define SPACESPER 8

//Replaces all tabs with the appropriate number of spaces

main(){
	int c,i = 0, spaces,j;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			i = 0;
		}
		else if(c != '\t'){
			i++;
		}
		if(c == '\t'){
			spaces = i % SPACESPER;
			if(spaces == 0)
				spaces = 8;
			for(j=0; j < spaces; j++){
				putchar(' ');
			}
		}
		else
			putchar(c);
	}
} 
