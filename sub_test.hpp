#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubEvalPositive) {
    Base* ten = new Op(10);
    Base* five = new Op(5);
    Sub* test = new Sub(ten,five);
    EXPECT_EQ(test->evaluate(), 5);
    EXPECT_EQ(test->stringify(), "10.000000 - 5.000000");
}

TEST(SubTest, SubEvalZero) {
    Base* zero = new Op(0);
    Sub* test = new Sub(zero,zero);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0.000000 - 0.000000");
}

TEST(SubTest, SubEvalNegative) {
    Base* two = new Op(2);
    Base* Five = new Op(5);
    Sub* test = new Sub(two,Five);
    EXPECT_EQ(test->evaluate(), -3);
    EXPECT_EQ(test->stringify(), "2.000000 - 5.000000");
}


#endif 