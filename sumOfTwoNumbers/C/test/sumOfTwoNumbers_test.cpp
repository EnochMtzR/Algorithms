#include <gtest/gtest.h>
extern "C"
{
#include "sumOfTwoNumbers.h"
}

TEST(SumOfTwoNumbers, ShouldSumTwoSmallNumbers)
{
  EXPECT_EQ(sumOfTwoNumbers(7, 3), 10);
}

TEST(SumPfTwoNumbers, ShouldSumTwoBiggestNumbers)
{
  EXPECT_EQ(sumOfTwoNumbers(1000, 1000), 2000);
}