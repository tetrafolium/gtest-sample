#include <gtest/gtest.h>
#include <stdio.h>
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
    EXPECT_EQ(4.0, summation(0, 0.8, 1000));
}
