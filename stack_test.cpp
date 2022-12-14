#include <gtest/gtest.h>
#include "stack.cpp"

class StackTest : public ::testing::Test {
	protected:
	 void SetUp() override {
		q1_.Push(1);
		q2_.Push(2);
		q2_.Push(3);
	 }
   
	 // void TearDown() override {}
   
	 Stack<int> q0_;
	 Stack<int> q1_;
	 Stack<int> q2_;
};

TEST_F(StackTest, IsEmptyInitially) {
  EXPECT_EQ(q0_.size(), 0);
}

TEST_F(StackTest, DeStackWorks) {
  int* n = q0_.Pop();
  EXPECT_EQ(n, nullptr);

  n = q1_.Pop();
  ASSERT_NE(n, nullptr);
  EXPECT_EQ(*n, 1);
  EXPECT_EQ(q1_.size(), 0);

  n = q2_.Pop();
  ASSERT_NE(n, nullptr);
  EXPECT_EQ(*n, 3);
  EXPECT_EQ(q2_.size(), 1);
}
