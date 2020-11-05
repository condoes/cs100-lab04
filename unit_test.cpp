#include "gtest/gtest.h"

#include "op_test.hpp"
#include "Mult_test.hpp"
#include "Div_test.hpp"
#include "sub_test.hpp"
#include "add.hpp"
#include "pow.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
