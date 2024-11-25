#include <gtest/gtest.h>
#include "Savings.h"

// Test Constructor
TEST(SavingsAccountTest, ConstructorInitializesCorrectly) {
  Savings account("12345678", 2.5, 500.0) ;

  EXPECT_EQ(account.get_account_id(), "12345688");
  EXPECT_DOUBLE_EQ(account.get_APR(), 2.5);
  EXPECT_DOUBLE_EQ(account.get_account_balance(), 500.0);
}