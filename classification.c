/* 
Title: Alphabet, Digit or Character
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022
*/

#include <stdio.h>

int main()

{
	char character;
	printf("Input a character of your choice: ");
	scanf("%c", &character);
	
	if((character >= 'a' && character <= 'z') || (character <= 'A' && character <= 'Z'))
	{
		printf("The character is an ALPHABET");
	}
	
	else if((character>='0' && character<='9') || (character<='0' && character>='9'))
	{
		printf("The character is a DIGIT");
	}
	
	else
	{
		printf("The character is a special character");
	}
	return 0;
}
		
