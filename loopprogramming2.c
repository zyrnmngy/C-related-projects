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
	int i, n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	printf("Natural numbers from 1 to %d: \n ", n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d \n", i);
	}
	return 0;
}
	
