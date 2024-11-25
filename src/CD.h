//
// Created by Mahi Nuthanapati on 11/25/24.
//

#ifndef CD_H
#define CD_H
#include "Account.h"


class CD : public Account {
public:
  CD(const std::string &account_id, long double apr, long double initial_balance) ;

  void deposit( long double deposit_amount ) ;
  void withdraw( long double withdraw_amount ) ;
  void transfer(Account& rhs, long double transfer_amount) ;
  void pass_time( long long months ) ;
};



#endif //CD_H
