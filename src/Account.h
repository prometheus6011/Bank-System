#ifndef ACCOUNT_ABSTRACT_CLASS
#define ACCOUNT_ABSTRACT_CLASS

#include <string>

class Account {
protected:
  const std::string account_id ;
  long double APR ;
  long double account_balance ;
  const std::string type ;

public:
  Account(std::string account_id, long double APR, std::string type);
  Account(std::string account_id, long double APR, long double initial_balance, std::string type);

  virtual ~Account() ;

  std::string get_account_id() const ;
  long double get_APR() const ;
  long double get_account_balance() const ;
  std::string get_type() const ;

  void set_APR( long double new_apr) ;
  void set_account_balance( long double new_balance ) ;

  virtual void deposit( long double deposit_amount ) = 0 ;
  virtual void withdraw( long double withdraw_amount ) = 0 ;
  virtual void transfer(Account& rhs, long double transfer_amount) = 0 ;
  virtual void pass_time( long long months ) = 0 ;
} ;


#endif
