/* 
Title: Exercise 11
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 28, 2022
*/

#include <stdio.h>

int main()

{
	int selling, cost, total;
	printf("Enter the Cost price of the product: ");
	scanf("%d", &cost);
	printf("Enter the Selling price of the product: ");
	scanf("%d", &selling);
	
	if(selling>cost)
	{
		total = selling - cost;
		printf("You have gained a profit of : %d\n", total);
	}
	
	else if(cost>selling)
	{
		total = cost - selling;
		printf("You have lost a profit of : %d\n", total);
	}
	
	else
	{
		printf("You have gained and lost nothing.");
	}
	return 0;
}
	
