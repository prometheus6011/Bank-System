//
// Created by Mahi Nuthanapati on 11/25/24.
//

#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Account.h"

class Bank {
private:
  std::vector<Account*> accounts ;
  std::vector<std::string> invalid_commands ;

public:
  Bank() ;
  ~Bank() ;

  void add_account(std::string &inp_str) ;
  void add_invalid_command(std::string invalid_command) ;
  std::vector<Account*> get_accounts() ;
  std::vector<std::string> get_invalid_commands() ;
  void clean_up() ;
};



#endif //BANK_H
