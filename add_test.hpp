#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvalNonZero) {
    Op* three = new Op(3);
    Op* seven = new Op(7);
    Add* test = new Add(three,seven);
    EXPECT_EQ(test->evaluate(), 10);
    EXPECT_EQ(test->stringify(), "3.000000 + 7.000000");
}

TEST(AddTest, AddEvalZero) {
    Op* zero = new Op(0);
    Add* test = new Add(zero,zero);
    EXPECT_EQ(test->evaluate(), 0);
    EXPECT_EQ(test->stringify(), "0.000000 + 0.000000");
}

TEST(AddTest, AddEvalNegative) {
    Op* two = new Op(2);
    Op* negFive = new Op(-5);
    Add* test = new Add(two,negFive);
    EXPECT_EQ(test->evaluate(), -3);
    EXPECT_EQ(test->stringify(), "2.000000 + -3.000000");
}


#endif 