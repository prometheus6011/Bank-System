//
// Created by Mahi Nuthanapati on 11/25/24.
//

#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

class Bank {
private:
  std::vector<Account*> banks;

public:
  Bank() ;
  ~Bank() ;


};



#endif //BANK_H
