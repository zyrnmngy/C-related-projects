/* 
Title: Switch Problem
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022

*/

#include <stdio.h>

int main()

{
	int one, two;
	printf("Enter the first number: ");
	scanf("%d", &one);
	printf("Enter the second number: ");
	scanf("%d", &two);
	
	switch(one > two)
	{
		case 0: 
		printf("%d, is the maximum number", two);
		break;
		case 1: 
		printf("%d, is the maximum number", one);
		break;
		default:
		printf("Both numbers you've entered are equal");
		break;
	}
	return 0;
}
	
	
		
