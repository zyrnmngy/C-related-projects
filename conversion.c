#include <stdio.h>//

int main()//
{
	float kilometers;
	printf("Input the number of kilometers: ");
	scanf("%f", &kilometers);
	printf("Conversion in miles is %f:\n", kilometers * 0.62);
	float miles;
	printf("Input the number of miles: ");
	scanf("%f", &miles);
	printf("Conversion in kilometers is %f:\n", miles * 1.61);
	return 0;
}//
	
