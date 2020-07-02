// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Frey Francois <ff@gbu.com>                        //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.class.hpp"

int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0),
	 _accountIndex(Account::_nbAccounts)
{
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";closed" << std::endl;
}

int			Account::getNbAccounts( void )
{
	return (Account::_totalAmount);
}

int			Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int			Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void		Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

void		Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"
		<< _nbWithdrawals << std::endl;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	return (true);
}

int			Account::checkAmount( void ) const
{
	return (_amount);
}

void		Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void		Account::_displayTimestamp( void )
{
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	std::cout << "["
		<< timePtr->tm_year + 1900
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_mon + 1
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_mday
		<< "_"
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_hour
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_min
		<< std::setw(2) << std::right << std::setfill('0')
		<< timePtr->tm_sec
		<< "] ";
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //
