#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "Mult.hpp"

TEST(MultTest, MultEvalPositive) {
    Base* ten = new Op(10);
    Base* five = new Op(5);
    Mult* test = new Mult(ten,five);
    EXPECT_EQ(test->evaluate(), 50);
}

TEST(MultTest, MultStringPositive) {
    Base* ten = new Op(10);
    Base* five = new Op(5);
    Mult* test = new Mult(ten,five);
    EXPECT_EQ(test->stringify(), "10.000000 * 5.000000");
}

TEST(MultTest, MultEvalZero) {
    Base* zero = new Op(0);
    Mult* test = new Mult(zero,zero);
    EXPECT_EQ(test->evaluate(), 0);
}
TEST(MultTest, MultStringZero) {
    Base* zero = new Op(0);
    Mult* test = new Mult(zero,zero);
    EXPECT_EQ(test->stringify(), "0.000000 * 0.000000");
}

TEST(MultTest, MultEvalNegative) {
    Base* two = new Op(-2);
    Base* Five = new Op(5);
    Mult* test = new Mult(two,Five);
    EXPECT_EQ(test->evaluate(), -10);
}

TEST(MultTest, MultStringNegative) {
    Base* two = new Op(-2);
    Base* Five = new Op(5);
    Mult* test = new Mult(two,Five);
    EXPECT_EQ(test->stringify(), "-2.000000 * 5.000000");
}

#endif //__MULT_TEST_HPP__