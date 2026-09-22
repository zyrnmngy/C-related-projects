/*
Title: Loop Programming
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Command Prompt and Notpad++
Date: December 12, 2022
*/

#include <stdio.h>

int main()

{
	int start, i;
	
	printf("Enter any number: ");
	scanf("%d", &start);
	
	for (i=start; i>=1; i--)
	{
		printf("%d \n", i);
	}
	
	return 0;
}
