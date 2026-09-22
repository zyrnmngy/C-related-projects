/*Problem: 
What are the average of the four grades?

4 integers

Grade1 is the first integer
Grade2 is the second integer
Grade3 is the third integer
Grade4 is the fourth integer
answer is the average of the four numbers

operations/formula

answer = (Grade1 + Grade2 + Grade3 + Grade4)/4

*/

#include <stdio.h>//

int main()//
{
  int Grade1, Grade2, Grade3, Grade4;
  float average;
  printf("Input Grade No.1: ");
  scanf("%d",&Grade1);
  printf("Input Grade No.2: ");
  scanf("%d",&Grade2);
  printf("Input Grade No.3: ");
  scanf("%d",&Grade3);
  printf("Input Grade No.4: ");
  scanf("%d",&Grade4);
  average= (float)(Grade1 + Grade2 + Grade3 + Grade4)/4;
  printf("The Average of the four grades is %f\n", average); 
  return 0;
}
