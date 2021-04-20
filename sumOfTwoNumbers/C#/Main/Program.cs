using System;
using SumOfTwoNumbers;

namespace Main
{
  class Program
  {
    static void Main(string[] args)
    {
      var solution = new Solution();
      int num1 = Convert.ToInt32(Console.ReadLine());
      int num2 = Convert.ToInt32(Console.ReadLine());
      int sum = solution.SumOfTwoNumbers(num1, num2);

      Console.WriteLine(sum);
    }
  }
}
