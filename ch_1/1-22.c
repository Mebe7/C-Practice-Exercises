#include <stdio.h>
#define FOLDPOINT 23

//Folds long lines of text at the foldpoint

main()
{
	int c,i = 0,j = 0;

	while((c = getchar()) != EOF){
		if(c == '\n')
			i = 0;
		else
			i ++;

		if(i <= FOLDPOINT)
			putchar(c);
		else if(i > FOLDPOINT){
			if(c == ' ' || c == '\t'){
				putchar('\n');
				i = 0;
			}
			else if(j < 7){
				putchar(c);
				j++;
			}
			if(j == 7){
				putchar('-');
				putchar('\n');
				j = 0;
			}
		}
	}
}
