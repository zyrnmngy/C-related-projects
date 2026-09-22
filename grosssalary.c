/* 
Title: Exercise 15
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 29, 2022
*/

#include <stdio.h>

int main()

{
	float basic, gross, da, hra;
	
	printf("Input the salary of the employee: ");
	scanf("%f", &basic);
	
	if(basic<=1000)
	{
		da = basic * 0.8;
		hra = basic * 0.2;
	}
	
	else if(basic<=2000)
	{
		da = basic * 0.90;
		hra = basic * 0.25;
	}
	
	else
	{
		da = basic * 0.95;
		hra = basic * 0.3;
	}
	gross = basic + hra + da;
	printf("The GROSS salary of the employee is: %.2f", gross);
	
	return 0;
}
