//
// Created by Mahi Nuthanapati on 11/25/24.
//

#include "Bank.h"
#include "validation.h"
#include "checkings.h"

Bank::Bank() = default ;
Bank::~Bank() = default ;

void Bank::add_account(std::string& inp_str) {
  validation val = validation() ;
  if ( !val.command_validator( inp_str )) {
    add_invalid_command( inp_str ) ;
    return ;
  }


  val.to_lower( inp_str ) ;
  std::vector<std::string> tokens = val.string_split( inp_str, ' ' ) ;
  if ( tokens[0] == "create" ) {
    Account* temp ;
    if ( tokens[1] == "checking" ) {
      temp = new Checkings(tokens[2], std::stod(tokens[3])) ;
    }

    accounts.push_back(temp) ;
  }

}

void Bank::add_invalid_command(std::string invalid_command) {
  invalid_commands.push_back(invalid_command) ;
}

std::vector<Account*> Bank::get_accounts() {
  return accounts ;
}

std::vector<std::string> Bank::get_invalid_commands() {
  return invalid_commands ;
}

void Bank::clean_up() {}