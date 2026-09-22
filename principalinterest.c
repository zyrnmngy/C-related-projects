#include <stdio.h>//

int main()

{
	float principal, years, interest, interestrate, interestamount, totalamount;
	printf("Enter the Principal Amount: ");
	scanf("%f", &principal);
	printf("Enter the number of years: ");
	scanf("%f", &years);
	printf("Enter the interest rate of the loan: ");
	scanf("%f", &interest);
	
	interestrate = (interest / 100);
	
	interestamount = (principal * years * interestrate);
	printf("The interest amount to be paid by the customer = %.2f ", interestamount); 
	totalamount = (principal + interestamount);
	printf("The total amount to be paid by the customer = %.2f ", totalamount);
	return 0;
}
	
