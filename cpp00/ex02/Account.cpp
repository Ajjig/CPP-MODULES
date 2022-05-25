#include "Account.hpp"
#include <iostream>
#include <sys/time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

int Account::checkAmount() const {
    return _amount;
}

void Account::_displayTimestamp() {
    std::cout << 000;
}

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "Account:" << _accountIndex << " | amount:" << _amount << " | deposits:" << _nbDeposits << " | withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _totalNbDeposits++;
}

Account::Account() {
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
}

void	Account::makeDeposit( int deposit ) {
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ) {
    if (_amount < withdrawal)
        return false;
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}