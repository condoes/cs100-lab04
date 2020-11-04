#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Mult.hpp"
#include "Div.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(MultTest, MultEvaluateNonZero) {
    Mult* test = new Mult(3,2);
    EXPECT_EQ(test->evaluate(), 6);
}

TEST(DivTest, DivEvaluateNonZero) {
    Div* test = new Div(6,2);
    EXPECT_EQ(test->evaluate(), 3);
}

#endif //__OP_TEST_HPP__
