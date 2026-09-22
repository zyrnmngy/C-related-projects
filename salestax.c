#include <stdio.h>//

int main()//
{
	int tire, pptire;
	float answer, salestax;
	printf("Input number of tires: ");
	scanf("%d", &tire);
	printf("Input the price per tire: ");
	scanf("%d", &pptire);
	answer = (float)(tire * pptire);
	printf("The total price is %f", answer);
	
	salestax = (float)answer + (answer * 0.07);
	printf("The total price with sales tax is %f", salestax);
	return 0;
}
