#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(test1, infinite_x) {
    double answer1, answer2;
    ASSERT_EQ(findX(0, 0, 0, &answer1, &answer2), 3);
}

TEST(test2, no_solution) {
    double answer1, answer2;
    ASSERT_EQ(findX(0, 0, 100, &answer1, &answer2), -1);
}

TEST(test3, not_square) {
    double answer1, answer2;
    ASSERT_EQ(findX(0, 3, 6, &answer1, &answer2), 1);
    ASSERT_DOUBLE_EQ(answer1, -2);
}

TEST(test4, negative_d) {
    double answer1, answer2;
    ASSERT_EQ(findX(2, 4, 8, &answer1, &answer2), -1);
}


TEST(test5, zero_d) {
    double answer1, answer2;
    ASSERT_EQ(findX(2, -4, 2, &answer1, &answer2), 1);
    ASSERT_DOUBLE_EQ(answer1, 1);
}


TEST(test6, two_solutions) {
    double answer1, answer2;
    ASSERT_EQ(findX(2, -6, 4, &answer1, &answer2), 2);
    ASSERT_DOUBLE_EQ(answer1, 2);
    ASSERT_DOUBLE_EQ(answer2, 1);
}
