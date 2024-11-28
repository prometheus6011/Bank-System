//
// Created by Mahi Nuthanapati on 11/25/24.
//

#include "CD.h"

CD::CD(const std::string &account_id, const long double apr, const long double initial_balance )
  : Account(account_id, apr, initial_balance, "CD")
{}

void CD::deposit(long double deposit_amount) {

}

void CD::withdraw(long double withdraw_amount) {

}

void CD::transfer(Account &rhs, long double transfer_amount) {

}

void CD::pass_time(long long months) {

}
