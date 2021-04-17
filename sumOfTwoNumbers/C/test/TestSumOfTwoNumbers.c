#include "unity.h"
#include "sumOfTwoNumbers.h"

void should_sum_two_small_numbers(void)
{
  TEST_ASSERT_EQUAL_INT32(10, sumOfTwoNumbers(7, 3));
}

void should_sum_two_biggets_numbers(void)
{
  TEST_ASSERT_EQUAL_INT32(2000, sumOfTwoNumbers(1000, 1000));
}

void setUp(void) {}

void tearDown(void) {}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(should_sum_two_small_numbers);
  RUN_TEST(should_sum_two_biggets_numbers);

  return UNITY_END();
}