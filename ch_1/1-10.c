#include <stdio.h>

//Replaces tabs with \t, backspace with \b,  and \ with \\

main()
{

	int c;

	while((c = getchar()) != EOF){
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\t");
		else if(c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}
