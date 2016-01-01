#include <stdio.h>

//Program that counts and displays the number of tab, blank, and new line chars

main()
{
	long c;
	int  blanks = 0, newLines = 0, tabs = 0;

	while((c = getchar()) != EOF){
		if(c == ' ')
			blanks++;
		if(c == '\n')
			newLines++;
		if(c =='\t')
			tabs++;
	}

	printf("There are:\n %d blanks\n %d tabs\n and %d new lines\n", blanks, tabs, newLines);
}
