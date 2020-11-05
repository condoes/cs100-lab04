#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "Div.hpp"

TEST(DivTest, DivEvalPositive) {
    Base* ten = new Op(10);
    Base* five = new Op(5);
    Div* test = new Div(ten,five);
    EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivtStringPositive) {
    Base* ten = new Op(10);
    Base* five = new Op(5);
    Div* test = new Div(ten,five);
    EXPECT_EQ(test->stringify(), "10.000000 / 5.000000");
}

// TEST(DivTest, DivEvalZero) {
//     Base* zero = new Op(0);
//     Div* test = new Div(zero,zero);
//     EXPECT_THROW(test->evaluate(), nan);
//}

TEST(DivTest, DivtStringZero) {
    Base* zero = new Op(0);
    Div* test = new Div(zero,zero);
    EXPECT_EQ(test->stringify(), "0.000000 / 0.000000");
}

TEST(DivTest, DivEvalNegative) {
    Base* ten = new Op(-10);
    Base* two = new Op(2);
    Div* test = new Div(ten,two);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(DivTest, DivStringNegative) {
    Base* ten = new Op(-10);
    Base* two = new Op(2);
    Div* test = new Div(ten,two);
    EXPECT_EQ(test->stringify(), "-10.000000 / 2.000000");
}

#endif //__DIV_TEST_HPP__