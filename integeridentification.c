/*
Title: Positive, Negative or Zero
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022
*/

#include <stdio.h>

int main()
{
	int number;
	printf("WELCOME TO PROBLEM NO.1<<33\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Enter a number of your choice: ");
	scanf("%d", &number);
	
	if(number<0)
	{
		printf("The number is negative");
	}
	
	if(number>0)
	{
		printf("The number is positive");
	}
	
	if(number==0)
	{
		printf("The nuber is zero");
	}
	return 0;
}
	
	
	
