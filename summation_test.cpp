#include <gtest/gtest.h>
#include "summation.h"

TEST(summation_test, answer_05_multiply_2_num){
    EXPECT_EQ(0.75, summation(0, 0.5, 2));
}

TEST(summation_test, answer_05_multiply_2_num_s){
    EXPECT_EQ(0.5, summation(0, 0.5, 1));
}

TEST(summation_test, answer_05_multiply_100){
    EXPECT_EQ(1.0, summation(0, 0.5, 100));
}

TEST(summation_test, answer_08_multiply_1000){
    EXPECT_NE(4.0, summation(0, 0.8, 1000));
}

TEST(summation_test, basic) {
    EXPECT_EQ(1999, summation(1, 0.5, 1000));
    EXPECT_EQ(1.0/3, summation(1.0, -0.5, 000));
}

TEST(summation2_test, basic) {
    EXPECT_EQ(3.14109, 4 * summation2(2.0, -1, 2000));
}
