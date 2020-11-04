#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"

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

TEST(AddTest, AddEvalNonZero) {
    Add* test = new Add(3,7);
    EXPECT_EQ(test->evaluate(), 10);
}

TEST(SubTest, AddEvalNonZero) {
    Sub* test = new Sub(9,3);
    EXPECT_EQ(test->evaluate(), 6);
}

TEST(PowTest, AddEvalNonZero) {
    Pow* test = new Pow(5,2);
    EXPECT_EQ(test->evaluate(), 25);
}

#endif //__OP_TEST_HPP__
