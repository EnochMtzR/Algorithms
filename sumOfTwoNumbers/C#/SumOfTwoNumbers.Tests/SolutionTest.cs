using NUnit.Framework;

namespace SumOfTwoNumbers.Tests
{
  public class SolutionTest
  {
    private Solution _solution;

    [SetUp]
    public void Setup()
    {
      _solution = new Solution();
    }

    [Test]
    public void ShouldSumTwoSmallNumbers()
    {
      var sum = _solution.SumOfTwoNumbers(7, 3);

      Assert.AreEqual(sum, 10);
    }

    [Test]
    public void ShouldSumTwoBiggestNumbers()
    {
      var sum = _solution.SumOfTwoNumbers(1000, 1000);

      Assert.AreEqual(sum, 2000);
    }
  }
}