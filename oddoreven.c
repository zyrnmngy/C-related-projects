/* 
Title: Problem No.1
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022

*/

#include <stdio.h>

int main()

{
	int number;
	printf("Enter a number to check whether ODD or EVEN: ");
	scanf("%d", &number);
	
	switch(number % 2)
	{
		case 0:
		printf("The number is EVEN");
		break;
		
		case 1: 
		printf("The number is ODD");
		break;
	}
	
	return 0;
}
