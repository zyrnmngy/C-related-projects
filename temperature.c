#include <stdio.h>//

int main()

{
	float farenheit, celsius;
	printf("Enter the temperature in Farenheit: "); 
	scanf("%f", &farenheit);
	
	celsius = (farenheit - 32) * 5 / 9;
	printf("%.2f Fahrenheit = %.2f Celsius", farenheit, celsius);
	return 0;
}
 
