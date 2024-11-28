#include "Account.h"

#include <utility>

Account::Account( std::string account_id, const long double APR, std::string type )
  : account_id(std::move( account_id )), APR( APR ), account_balance( 0.0 ), type(std::move(type))
{}

Account::Account( std::string account_id, const long double APR, const long double initial_balance, std::string type )
  : account_id(std::move( account_id )), APR( APR ), account_balance( initial_balance ), type(std::move(type))
{}

Account::~Account() = default;

std::string Account::get_account_id() const {
  return account_id ;
}

long double Account::get_APR() const {
  return APR ;
}

long double Account::get_account_balance() const {
  return account_balance ;
}

std::string Account::get_type() const {
  return type ;
}

void Account::set_APR( const long double new_apr ) {
  APR = new_apr ;
}

void Account::set_account_balance( const long double new_balance ) {
  account_balance = new_balance ;
}