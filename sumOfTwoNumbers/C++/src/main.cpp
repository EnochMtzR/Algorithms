#include <iostream>
#include "sumofTwoNumbers.h"

int main()
{
  int num1, num2;
  int sum;

  std::cin >> num1 >> num2;
  sum = sumofTwoNumbers(num1, num2);

  std::cout << sum << std::endl;

  return 0;
}