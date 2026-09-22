/* 
Title: Exercise 7
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 21, 2022
*/

#include <stdio.h>

int main()

{
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	if(year %4 == 0)
	{
		printf("It is a LEAP YEAR");
	}
	
	else
	{
		printf("It is not a LEAP YEAR");
	}
	
	return 0;
}
		


