/* 
Title: Exercise 14
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 28, 2022
*/

#include <stdio.h>

void main()

{
	int math, physics, chem, total, maphy;
	
	printf("Eligibility Criteria: \n");
	printf("Grades in Math should be 65 or higher. \n");
	printf("Grades in Physics should be 55 or higher. \n");
	printf("Grades in Chemistry should be 50 or higher. \n");
	printf("The total in all three subjects should be 190 or higher. \n");
	printf("or the total in Math and Physics should be 140 or higher. \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	printf("Input the grades in Math: ");
	scanf("%d", &math);
	printf("Input the grades in Physics: ");
	scanf("%d", &physics);
	printf("Input the grades in Chemistry: ");
	scanf("%d", &chem);
	printf("The total in all three subjects: %d\n", math + physics + chem);
	printf("The total in Math and Physics: %d\n", math + physics);
	
	if(math>=65)
		if(physics>=55)
			if(chem>=50)
				if(math + physics + chem >= 190 || math + physics >= 140)
				printf("The candidate is elligible for admission. \n");
				else
				printf("The candidate is not elligible for admission. \n");
			else
				printf("The candidate is not elligible for admission. \n");
		else
			("The candidate is not elligible for admission. \n");
	else
		("The candidate is not elligible for admission. \n");
}		
	
