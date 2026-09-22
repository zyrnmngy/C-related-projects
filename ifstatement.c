/*
Title: Vowels or Consonants?
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022
*/

#include <stdio.h>

int main()
{
	char letter;
	printf("Enter a letter of your choice: ");
	scanf("%c", &letter);
	
	if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U')
	{
		printf("The letter is a VOWEL");
	}
	
	if(letter>='a' && letter<='z' || letter>='A' && letter<='Z')
	{
		printf("The letter is a CONSONANT");
	}
	
	else
	{
		printf("You have input an invalid character");
	}
	return 0;
}
