//
// Created by Mahi Nuthanapati on 11/25/24.
//

#include "Checkings.h"
#include <iostream>

Checkings::Checkings(const std::string &account_id, long double apr )
  : Account(account_id, apr, "Checkings")
{}

void Checkings::deposit( long double deposit_amount ) {
  account_balance += deposit_amount ;
}

void Checkings::withdraw(long double withdraw_amount) {
  account_balance -= withdraw_amount ;
}

void Checkings::transfer(Account &rhs, long double transfer_amount) {

}

void Checkings::pass_time(long long months) {}