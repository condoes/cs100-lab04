#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowEvalNonZero) {
    Base* three = new Op(3);
    Base* two = new Op(2);
    Pow* test = new Pow(three,two);
    EXPECT_EQ(test->evaluate(), 9);
    EXPECT_EQ(test->stringify(), "3.000000 ** 2.000000");
}

TEST(PowTest, PowEvalZero) {
    Base* zero = new Op(0);
    Pow* test = new Pow(zero,zero);
    EXPECT_EQ(test->evaluate(), 1);
    EXPECT_EQ(test->stringify(), "0.000000 ** 0.000000");
}

TEST(PowTest, PowEvalExponentZero) {
    Base* zero = new Op(0);
    Base* six = new Op(6);
    Pow* test = new Pow(six,zero);
    EXPECT_EQ(test->evaluate(), 1);
    EXPECT_EQ(test->stringify(), "6.000000 ** 0.000000");
}

TEST(PowTest, PowEvalNegativeBaseEvenExp) {
    Base* two = new Op(2);
    Base* negFive = new Op(-5);
    Pow* test = new Pow(negFive,two);
    EXPECT_EQ(test->evaluate(), 25);
    EXPECT_EQ(test->stringify(), "-5.000000 ** 2.000000");
}

TEST(PowTest, PowEvalNegativeOddExp) {
    Base* three = new Op(3);
    Base* negTwo = new Op(-2);
    Pow* test = new Pow(three,negTwo);
    EXPECT_NEAR(test->evaluate(), 0.111111, 0.001);
    EXPECT_EQ(test->stringify(), "3.000000 ** -2.000000");
}


#endif 