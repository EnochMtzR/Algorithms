#include <stdio.h>
#include <stdlib.h>
#include "sumOfTwoNumbers.h"

int main()
{
  int num1, num2;
  int sum;

  scanf("%d %d", &num1, &num2);
  sum = sumOfTwoNumbers(num1, num2);
  printf("%d\n", sum);

  return 0;
}