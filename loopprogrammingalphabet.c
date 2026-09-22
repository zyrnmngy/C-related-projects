/*
Title: Loop Programming
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Command Prompt and Notpad++
Date: December 12, 2022
*/

#include <stdio.h>

int main()

{
	char i, alphabet;
	printf("Enter any alphabet: ");
	scanf("%c", &alphabet);
	
	for(i=alphabet;i<='z';i++)
	{
		printf("%c \n", i);
	}
	
	return 0;
}
