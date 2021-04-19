#include <gtest/gtest.h>
#include "sumofTwoNumbers.h"

TEST(SumOfTwoNumbers, ShouldSumTwoSmallNumbers)
{
  EXPECT_EQ(sumofTwoNumbers(7, 3), 10);
}

TEST(SumOfTwoNumbers, ShouldSumTwoBiggestNumbers)
{
  EXPECT_EQ(sumofTwoNumbers(1000, 1000), 2000);
}