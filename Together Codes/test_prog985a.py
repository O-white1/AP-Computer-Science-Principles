import unittest
from Prog985a import Calc
from time import perf_counter as current_time


class TestCalc(unittest.TestCase):
    def setUp(self):
        self.startTime = current_time()

    #addition
    def test_add_normal_case(self):
        self.assertEqual(Calc.add(1, 2), 3)
    def  test_add_edge_case_(self):
        self.assertEqual(Calc.add(0, 0), 0)
    def test_add_error_case_(self):
        self.assertEqual(Calc.add(1, -1), 0)

    #subtraction
    def test_sub_normal_case(self):
        self.assertEqual(Calc.sub(1, 2), -1)
    def test_sub_edge_case(self):
        self.assertEqual(Calc.sub(0, 0), 0)
    def test_sub_error_case(self):
        self.assertEqual(Calc.sub(1, -1), 2)

    #multiplication
    def test_mul_normal_case(self):
        self.assertEqual(Calc.mul(1, 2), 2)
    def test_mul_edge_case(self):
        self.assertEqual(Calc.mul(0, 0), 0)
    def test_mul_error_case(self):
        self.assertEqual(Calc.mul(1, -1), -1)

    #division
    def test_div_normal_case(self):
        self.assertEqual(Calc.div(1, 2), 0.5)
    def test_div_edge_case_(self):
        with self.assertRaises(ZeroDivisionError):
            Calc.div(0, 0)
    def test_div_error_case_(self):
        self.assertEqual(Calc.div(1, -1), -1)

    #modulus
    def test_mod_normal_case(self):
        self.assertEqual(Calc.mod(1, 2), 1)
    def test_mod_edge_case(self):
        with self.assertRaises(ZeroDivisionError):
            Calc.div(0, 0)
    def test_mod_error_case_(self):
        self.assertEqual(Calc.mod(1, -1), 0)





def tearDown(self):
    t = current_time() - self.startTime
    print(f"{self.id()}: {t:6f}")




if __name__ == "__main__":
    suite = unittest.TestLoader().loadTestsFromTestCase(TestCalc)
    unittest.TextTestRunner(verbosity=0).run(suite)