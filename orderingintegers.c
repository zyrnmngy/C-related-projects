/* 
Title: Exercise 8
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 21, 2022
*/

#include <stdio.h>

int main()

{
	float number;
	
	printf("Input a number: ");
	scanf("%d", &number);
	
	switch(number > 0)
	{
		case 1:
		printf("The number is POSITIVE");
		break;
		case 0:
		switch(number < 0)
		{
			case 1:
			printf("The number is NEGATIVE.");
			break;
			case 0:
			printf("The number is ZERO");
			break;
		}
	}
	return 0;
}
		
		
