#include <gtest/gtest.h>
#include "euclidean-alog.cpp"

TEST(euclidean-algo, test1){
    EXPECT_EQ(1, greatest_common_divisor(37, 41));
}
