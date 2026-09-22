/* 
Title: Exercise 13
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 28, 2022
*/

#include <stdio.h>

int main()

{
	int sidea, sideb, sidec;
	printf("Input the value of side A: ");
	scanf("%d", &sidea);
	printf("Input the value of side B: ");
	scanf("%d", &sideb);
	printf("Input the value of side C: ");
	scanf("%d", &sidec);
	
	if(sidea == sideb && sideb == sidec && sidea == sidec)
	{
		printf("The triangle is an equilateral triangle.");
	}
	
	else if(sidea == sideb || sideb == sidec || sidea == sidec)
	{
		printf("The triangle is an isoceles triangle.");
	}
	
	else
	{
		printf("The triangle is a scalene triangle.");
	}
	return 0;
}
	
