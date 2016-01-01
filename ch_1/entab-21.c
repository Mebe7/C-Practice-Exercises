#include <stdio.h>
#define SPACESPER 8

//Program the replaces long lines of spaces with tabs

main()
{
	int c, i = 0,s = 0, spaces;

	while((c = getchar()) != EOF){
		if(c != '\n')
			i++;
		else if(c == '\n')
			i = 0;

		if(c == ' ')
			s++;
		else if(c != ' ' && s == 1){
			putchar(' ');
			s = 0;
		}
		else
			s = 0;

		spaces = i % SPACESPER;

		if(c != ' ' && s <= 1)
			putchar(c);
		else{
			if( c== ' ')
				;
			else{
				int tab, space, j;

				if(s < spaces)
					space = spaces;
				else {
					tab = s / spaces;
					space = s % spaces;
				}

				for(j = 0; j <= tab; j++){
					putchar('\t');
				}

				for(j = 0; j <= space; j++){
					putchar(' ');
				}
			}
		}
	}
}
