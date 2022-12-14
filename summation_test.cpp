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
    EXPECT_TRUE (4.0 < summation(0, 0.8, 1000));
    EXPECT_TRUE (4.01 > summation(0, 0.8, 1000));
}

TEST(summation_test, basic) {
    EXPECT_EQ(1999, summation(1, 0.5, 1000));
    EXPECT_EQ(0, summation(1.0, -0.5, 000));
}

TEST(summation2_test, basic) {
    EXPECT_NE(3.14159, 4 * summation2(2.0, -1, 2000));
    EXPECT_TRUE(3.1410 < 4 * summation2(2.0, -1, 2000));
    EXPECT_TRUE(3.1416 > 4 * summation2(2.0, -1, 2000));
}
