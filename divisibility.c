/* 
Title: Sample Problem
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Prompt
Date: November 16, 2022

*/

#include <stdio.h>

int main()

{
	int nm;
	printf("Enter a number to check whether it is divisible by 6 or 10: ");
	scanf("%d", &nm);
	
	if(nm %6 == 0)
	{
		printf("The number you've entered is divisible by 6.");
	}
	
	else if(nm %10 == 0)
	{
		printf("The number you've entered is divisible by 10.");
	}
	
	else 
	{
		printf("The number you've enetered is divisible by neither 6 or 10.");
	}
	
	return 0;
}


	
	
	
	
	
	
