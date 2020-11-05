#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "Rand.hpp"

TEST(RandTest, RandEvaluate) {
    Rand* test = new Rand();
    EXPECT_LT(test->evaluate(), 100);
}

#endif //__RAND_TEST_HPP__