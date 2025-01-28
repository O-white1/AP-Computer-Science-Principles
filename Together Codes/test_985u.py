import random
import unittest
from prog985y import Quicksort
from time import perf_counter as current_time

def generate_large_list():
    return [random.randint(0, 10_000_000) for _ in range(1_000_000)]


class TestQuicksort(unittest.TestCase):
    def setUp(self):
        self.startTime = current_time()




    def tearDown(self):
        t = current_time() - self.startTime
        print(f"{self.id()}: {t:6f}")


    def test_normal_case(self):
        inputArray = [4, 2, 5, 1, 3]
        expected_output = [1, 2, 3, 4, 5]
        self.assertEqual(Quicksort.sort(inputArray), expected_output)

    def test_empty_list():
        inputArray = []
        expected_output = []
        assert Quicksort.sort(input) == expected_output

    def test_single_element():
        input = [1]
        expected_output = [1]
        assert Quicksort.sort(input) == expected_output

    #// Test with a list where all elements are identical
    def test_identical_elements():
        input = [5, 5, 5, 5]
        expected_output = [5, 5, 5, 5]
        assert Quicksort.sort(input) == expected_output

    #// Test with negative numbers in the list
    def test_negative_numbers():
        input = [-3, -1, -4, -2]
        expected_output = [-4, -3, -2, -1]
        assert Quicksort.sort(input) == expected_output

    #// Test with mixed integer and float values
    def test_mixed_types():
        input = [3.2, 1.5, 4.8, 2.1]
        expected_output = [1.5, 2.1, 3.2, 4.8]
        assert Quicksort.sort(input) == expected_output


    def test_performance_large_dataset(self):
        inputArray = generate_large_list()
        start_time = current_time()
        Quicksort.sort(inputArray)
        end_time = current_time()
        self.assertLess(end_time-start_time, 10)

    if __name__ == "__main__":
        suite = unittest.TestLoader().loadTestsFromTestCase(TestQuicksort)
        unittest.TextTestRunner(verbosity=0).run(suite)
