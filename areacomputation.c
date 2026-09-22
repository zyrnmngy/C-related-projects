/* 
Title: Exercise 12
Author: Zyrene D. Manungay
Email Address: zdtmanungay@slsu.edu.ph
Tools: Notepad++ and Command Propmpt
Date: November 28, 2022
*/

#include <stdio.h>

int main()

{
	int radius, length, width, base, height, choice, side;
	float area;
	printf("Choose amongst the three. \n");
	printf("Enter 1 if you want to find the area of a circle. \n");
	printf("Enter 2 if you want to find the area of a rectangle. \n");
	printf("Enter 3 if you want to find the area of a triangle. \n");
	printf("Enter 4 if you want to find the area of a square. \n");
	printf("Enter your choice here: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
		printf("Input the radius of the circle: ");
		scanf("%d", &radius);
		area = 3.14*radius*radius;
		break;
		
		case 2:
		printf("Input the length of the rectangle: ");
		scanf("%d", &length);
		printf("Enter the width of the rectangle: ");
		scanf("%d", &width);
		area = length*width;
		break;
		
		case 3:
		printf("Input the base of the triangle: ");
		scanf("%d", &base);
		printf("Input the height of the triangle: ");
		scanf("%d", &height);
		area = height*base*0.5;
		break;
		
		case 4:
		printf("Input the measurement of the side: ");
		scanf("%d", &side);
		area = side*side;
		break;
		
		default:
		printf("You have input an invalid choice. Refer to the choices above and try again.");
		break;
	}
	printf("The area is: %f\n", area);
	
	return 0;
}
		
		
	
