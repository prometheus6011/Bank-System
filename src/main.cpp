#include <iostream>
#include "Bank.h"

int main() {
  auto bank = Bank() ;

  std::string inp_str = "create checking 12345678 5.0" ;
  bank.add_account(inp_str) ;

  const std::vector<Account*> accounts = bank.get_accounts() ;
  std::cout << accounts[0]->get_type() << std::endl ;

  return 0 ;
}
