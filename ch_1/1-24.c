#include <stdio.h>
#define MAXOPENCHAR 1000 //defines the maximum number of open chars on the stack

//Checks C programs for unbalanced paranthesis, brackets, braces, and quotes

/*Functional but not finished. Still need to define an actual stack structure
  with appropriate functions, as well as functions to compare open and close
  chars (possibly with interaction between their int values).*/

main()
{
	int stack[MAXOPENCHAR] = {0}, lineNum = 1, i = 1;
	char c, b;

	while((c = getchar()) != EOF)
	{
		switch(c)
		{
			case('('):  //with an open char, put it on the stack
			case('{'):
			case('['):
				if(b != '\''){
					stack[i] = c;
					i++;
					break;
				}
			//have the possibility to be both open and close chars
			//checks them and then decides
			case('\''):
				if(stack[i-1] != '\''){
					stack[i] = c;
					i++;
				}
				else
					i--;
				break;
			case('"'):
				if(stack[i-1] != '"'){
					stack[i] = c;
					i++;
				}
				else
					i--;
				break;
			//close chars only
			//moves the index, effectivly removing the top
			case(')'):
				if(stack[i-1] != '(' && b != '\''){
					printf("ERROR: found unmatched %c at line %d\n", c, lineNum);
				}
				else
					i--;
				break;
			case('}'):
				if(stack[i-1] != '{' && b != '\''){
                                        printf("ERROR: found unmatched %c at line %d\n", c, lineNum);
				}
                                else
                                        i--;
                                break;
			case(']'):
				if(stack[i-1] != '[' && b != '\''){
                                        printf("ERROR: found unmatched %c at line %d\n",  c, lineNum);
                                }
				else
                                        i--;
                                break;
			case('\n'):
				lineNum++;
		}
		b = c;
	}
	printf("All other chars balanced and accounted for\n");
}
