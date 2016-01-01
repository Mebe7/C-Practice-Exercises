#include <stdio.h>

//Prints a histogram of the frequency of letters in the input

main()
{
	char letters[26];
	int lettersFrequency[26] = {0}, i, c, j;

	//fill the letters array
	for(i =0; i<26; i++){
		letters[i] = 'a' + i;
	}

	//fills the frequency array
	while((c = getchar()) != EOF){
		lettersFrequency[c-'a']++;
	}

	//prints the histogram

	for(i = 0; i < 26; i++){
		printf("%c: ", letters[i]);

		for(j = 1; j <= lettersFrequency[i]; j++){
			putchar('|');
		}

		printf("\n");
	}
}
