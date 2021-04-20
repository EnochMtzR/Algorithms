import unittest
import solution


class TestSolution(unittest.TestCase):
    def test_sum_two_small_numbers(self):
        sum = solution.sum_of_two_numbers(7, 3)

        self.assertEqual(sum, 10)

    def test_sum_two_biggest_numbers(self):
        sum = solution.sum_of_two_numbers(1000, 1000)

        self.assertEqual(sum, 2000)


if __name__ == "__main__":
    unittest.main()
