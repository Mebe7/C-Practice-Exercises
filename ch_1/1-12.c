#include <stdio.h>

//Program that prints it's inputs one word per line

main()
{
	int c, d;

	while((c = getchar()) != EOF){
		if((c == ' ' || c == '\n' || c =='\t') && d == c)
			;
		else if(c == ' ' || c == '\n' || c =='\t'){
			putchar('\n');
			d = c;
		}
		else
			putchar(c);
			d = c;
	}
}
