#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxLine);

//prints the length of each input line and some  of the text

main()
{
	int length, max = 0;
	char line[MAXLINE];

	while((length = getLine(line, MAXLINE)) > 0){
		if (length > 0){
			printf("Length: %3d, %7s", length, line);
		}
	}
	return  0;
}

int getLine(char string[], int maxLength){
	int c = 0, i;

	for(i = 0; i < maxLength-1 && ((c = getchar()) != EOF) && c != '\n'; i ++){
		string[i] = c;
	}

	if(c == '\n'){
		string[i] = c;
		++i;
	}

	string[i] = '\0';

	return i;
}
