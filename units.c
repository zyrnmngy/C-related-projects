/* 
Title: Exercise 16
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 29, 2022
*/

#include <stdio.h>

int main()

{
	int unit;
	float amount, total, surcharge;
	
	printf("Enter the number of units consumed: ");
	scanf("%d", &unit);
	
	if(unit<=50)
	{
		amount = unit * 0.50;
	}
	else if(unit<=150)
	{
		amount = 25 + ((unit - 50) * 0.75);
	}
	
	else if(unit<=250)
	{
		amount = 100 + ((unit - 150) * 1.20);
	}
	
	else
	{
		amount = 220 + ((unit - 250) * 1.50);
	}
	
	surcharge = amount * 0.20;
	total = surcharge + amount;
	
	printf("Your total electricity bill is: %.2f", total);
	
	return 0;
}
		
