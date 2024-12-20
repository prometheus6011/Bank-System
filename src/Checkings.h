//
// Created by Mahi Nuthanapati on 11/25/24.
//

#ifndef CHECKINGS_H
#define CHECKINGS_H

#include "Account.h"

class Checkings : public Account {
public:
  Checkings(const std::string &account_id, long double apr ) ;

  void deposit( long double deposit_amount ) override ;
  void withdraw( long double withdraw_amount ) override ;
  void transfer( Account& rhs, long double transfer_amount ) override ;
  void pass_time( long long months ) override ;
} ;



#endif //CHECKINGS_H
