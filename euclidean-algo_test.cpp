#include <gtest/gtest.h>
#include "euclidean-algo.h"

TEST(euclidean_algo, test1){
    EXPECT_EQ(1, greatest_common_divisor(37, 41));
    EXPECT_EQ(1, greatest_common_divisor(37, 51));
    EXPECT_EQ(1, greatest_common_divisor(38, 52));
}

TEST(euclidean_algo, test2){
    EXPECT_EQ(8, greatest_common_divisor(8, 16));
}
