/* 
Title: Exercise 10
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 28, 2022
*/

#include <stdio.h>

int main()

{
	int anglea, angleb, anglec, sum;
	printf("Enter the first value of the angle:  \n");
	scanf("%d", &anglea);
	printf("Enter the second value of the angle:  \n");
	scanf("%d", &angleb);
	printf("Enter the third value of the angle:  \n");
	scanf("%d", &anglec);
	
	sum = anglea + angleb + anglec;
	
	if(sum==180)
	{
		printf("It can form a triangle. \n");
	}
	else
	{
		printf("It cannot form a triangle. \n");
	}
	return 0;
}
		
	
	
	

