#include <stdio.h>
#define MAXLINE 1000

//C program that removes comments from other C programs.

main()
{

int c, b = 0;

	while((c = getchar()) != EOF){
		if(c == '/' && b == '/' || c == '/' && b == '\n'){
			while(c != '\n'){
				b = c;
				c = getchar();
			}
		}
		else if(c == '*' && b == '/'){
			while(c != '/' && b != '*'){
				b = c;
				c = getchar();
			}
		}
		else{
			b = c;
			putchar(c);
		}
	}
}

