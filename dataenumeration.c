/* enumeration data type
Enum syntax in C
enum identifier [optional{enumerator-list})]

Example of enumeration
Enum month {Jan, Feb, Mar}
			 0	  1		2
#define Jan 20;
#define Feb 21;
#define Mar 22;		
	 
*/

#include <stdio.h>

{
	enum  MONTH {Jan=0, Feb, Mar};
	enum MONTH month = Mar;
	
	printf("\tEnum Program Demonstration");
	
	if (month == 0){
		printf("Value is January");
	} else if (month == 1){
		printf("Value is February");
	}if (month==2){
		printf("Value is March");
	}
	
	printf("End of program");
	
	
}
