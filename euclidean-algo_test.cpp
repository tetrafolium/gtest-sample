#include <gtest/gtest.h>
#include "euclidean-algo.cpp"

TEST(euclidean-algo, test1){
    EXPECT_EQ(1, greatest_common_divisor(37, 41));
    EXPECT_EQ(1, greatest_common_divisor(37, 51));
    EXPECT_EQ(1, greatest_common_divisor(38, 52));
}

TEST(euclidean-algo, test1){
    EXPECT_EQ(8, greatest_common_divisor(8, 16));
}
