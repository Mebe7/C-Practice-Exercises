#include <stdio.h>

//Copies a file and replaces sequences of blanks with one blank

main()
{
	int c, d;

	while((c = getchar()) != EOF){
		if( c == ' ' && c == d)
			;
		else{
			putchar(c);
			d = c;
		}
	}
}
