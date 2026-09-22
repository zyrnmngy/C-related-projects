/* 
Title: Problem No.2
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022

*/

#include <stdio.h>

int main()

{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	if((number %5 == 0) && (number %11 == 0))
	{
		printf("The number is divisible by both 5 and 11");
	}
	
	else
	{
		printf("The number is not divisible by both 5 and 11.");
	}
	
	return 0;
}
