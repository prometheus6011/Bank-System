//
// Created by Mahi Nuthanapati on 11/27/24.
//

#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
#include <vector>

class validation {
public:
  static bool command_validator( const std::string& inp_str ) ;
  static std::vector<std::string> string_split( const std::string& inp_str, const char& delimiter ) ;
  static void to_lower( std::string& inp_str ) ;
private:
  static bool valid_command( const std::string& inp_str ) ;
  static bool account_type_validator(const std::string &inp_str);
  static bool valid_account_number(const std::string &inp_str);
  static bool valid_apr(const std::string &inp_str);
};



#endif //VALIDATION_H
