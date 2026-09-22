/* 
Title: Exercise 9
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 21, 2022
*/

#include <stdio.h>

int main()

{
	char character;
	
	printf("Enter a letter in the alphabet: ");
	scanf("%c", &character);
	
	switch(character)
	{
		case 'a':
		printf("It is a VOWEL");
		break;
		case 'e':
		printf("It is a VOWEL");
		break;
		case 'i':
		printf("It is a VOWEL");
		break;
		case 'o':
		printf("It is a VOWEL");
		break;
		case 'u':
		printf("It is a VOWEL");
		break;
		case 'A':
		printf("It is a VOWEL");
		break;
		case 'E':
		printf("It is a VOWEL");
		break;
		case 'I':
		printf("It is a VOWEL");
		break;
		case 'O':
		printf("It is a VOWEL");
		break;
		case 'U':
		printf("It is a VOWEL");
		break;
		default:
		printf("It is a CONSONANT");
		break;
	}
	
	return 0;
}
