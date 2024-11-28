//
// Created by Mahi Nuthanapati on 11/25/24.
//

#include "Savings.h"

Savings::Savings(const std::string &account_id, long double apr, long double initial_balance)
  : Account(account_id, apr, "Savings" )
{}

void Savings::deposit(long double deposit_amount) {

}

void Savings::withdraw(long double withdraw_amount) {

}

void Savings::pass_time(long long months) {

}

void Savings::transfer(Account &rhs, long double transfer_amount) {

}
