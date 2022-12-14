#include <gtest/gtest.h>
#include "summation.h"

TEST(summation_test, answer_05_multiply_2_num){
    EXPECT_EQ(1.75, summation(0, 0.5, 2));
}

TEST(summation_test, answer_05_multiply_2_num_s){
    EXPECT_EQ(1.5, summation(0, 0.5, 2));
}

TEST(summation_test, answer_05_multiply_100){
    EXPECT_EQ(2.0, summation(0, 0.5, 100));
}

TEST(summation_test, answer_08_multiply_100){
    EXPECT_EQ(2.0, summation(0, 0.8, 100));
}