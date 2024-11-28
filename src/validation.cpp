#include "validation.h"

#include <sstream>
#include <cctype>

bool validation::command_validator( const std::string& inp_str ) {
  if ( inp_str.empty() ) {
    return false ;
  }
  std::vector<std::string> tokens = string_split(inp_str, ' ') ;

  if ( tokens.empty() ) {
    return false ;
  }
  std::string &cmd = tokens[0] ;
  to_lower(cmd) ;
  if ( !valid_command(cmd) ) {
    return false ;
  }

  if ( tokens[0] == "create" ) {
    if ( tokens.size() != 4 ) {
      return false ;
    }
    std::string account_type = tokens[1] ;
    to_lower(account_type) ;
    std::string account_id = tokens[2] ;
    to_lower(account_id) ;
    std::string apr = tokens[3] ;
    to_lower(apr) ;
    if ( !account_type_validator(account_type) ) {
      return false ;
    }
    // note: logic needs to be added to account if acocunt_id already exists in the bank
    if ( !valid_account_number(account_id) ) {
      return false ;
    }
    if ( !valid_apr(apr) ) {
      return false ;
    }
  } else if ( tokens[0] == "deposit" ) {

  } else if ( tokens[0] == "withdraw" ) {

  } else if ( tokens[0] == "transfer" ) {

  } else if ( tokens[0] == "pass" ) {

  }

  return true ;
}

std::vector<std::string> validation::string_split( const std::string& inp_str, const char& delimiter ) {
  std::stringstream ss(inp_str) ;
  std::vector<std::string> tokens ;
  std::string temp ;

  while ( getline(ss, temp, delimiter) ) {
    tokens.push_back(temp) ;
  }

  return tokens ;
}

void validation::to_lower( std::string &inp_str ) {
  for ( auto& c : inp_str ) {
    c = tolower(c) ;
  }
}

bool validation::valid_command( const std::string &inp_str ) {
  return inp_str == "create" || inp_str == "deposit" || inp_str == "withdraw" || inp_str == "transfer" || inp_str == "pass" ;
}

bool validation::account_type_validator( const std::string &inp_str ) {
  return inp_str == "checking" || inp_str == "savings" || inp_str == "cd" ;
}

bool validation::valid_account_number( const std::string& inp_str ) {
  if ( inp_str.size() != 8 ) {
    return false ;
  }

  for ( auto& c : inp_str ) {
    if ( c < '0' || c > '9' ) {
      return false ;
    }
  }

  return true ;
}

bool validation::valid_apr( const std::string& inp_str ) {
  try {
    size_t pos ;
    double apr = std::stod( inp_str, &pos ) ;
    return pos == inp_str.size() && apr >= 0.0 && apr <= 10.0 ;
  } catch ( const std::invalid_argument& e ) {
    return false ;
  } catch ( const std::out_of_range& e ) {
    return false ;
  }
}