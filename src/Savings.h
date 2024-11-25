//
// Created by Mahi Nuthanapati on 11/25/24.
//

#ifndef SAVINGS_H
#define SAVINGS_H
#include "Account.h"


class Savings : public Account {
public:
  Savings(const std::string &account_id, long double apr, long double initial_balance);

  void deposit( long double deposit_amount ) override ;
  void withdraw( long double withdraw_amount ) override ;
  void transfer(Account& rhs, long double transfer_amount) override ;
  void pass_time( long long months ) override ;
};



#endif //SAVINGS_H
