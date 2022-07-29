/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:04:22 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/12 13:37:17 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <ctime>

#include <iostream>

Account::Account( int initial_deposit ) : 
	_accountIndex( Account::_nbAccounts ), 
	 _amount( initial_deposit ),  _nbDeposits(0), _nbWithdrawals(0) {

	// [19920104_091532] index:0;amount:42;created
	//
	Account::_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "created" << std::endl;
	Account::_nbAccounts++;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

	int	Account::getNbAccounts( void ) {
		return (Account::_nbAccounts);
	}

	int	Account::getTotalAmount( void ) {
		return (Account::_totalAmount);
	}

	int	Account::getNbDeposits( void ) {
		return (Account::_totalNbDeposits);
	}

	int	Account::getNbWithdrawals( void ) {
		return (Account::_totalNbWithdrawals);
	}

	void	Account::_displayTimestamp( void ) {
		// Time format : [yearmonthday_hourminsec]
		//
		time_t	now = time(0);

		tm	*time_of_day = localtime(&now);

		std::cout << "[" << time_of_day->tm_year + 1900;
		std::cout << time_of_day->tm_mon << time_of_day->tm_mday;
		std::cout << "_" << time_of_day->tm_hour << time_of_day->tm_min << time_of_day->tm_sec;
		std::cout << "]" << " ";
	}


	void	Account::displayAccountsInfos( void ) {
		// Final text :
		// accounts:8;total:21524;deposits:8;withdrawals:0
		//
		_displayTimestamp();
		std::cout << "accounts:" << getNbAccounts() << ";";
		std::cout << "total:" << getTotalAmount() << ";";
		std::cout << "deposits:" << getNbDeposits() << ";";
		std::cout << "withdrawals:" << getNbWithdrawals();
		std::cout << std::endl;
	}


	void	Account::makeDeposit( int deposit ) {
		// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
		//
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";

		if ( deposit >= 0 ) {
			Account::_totalAmount += deposit;
			Account::_totalNbDeposits++;

			this->_nbDeposits++;
			this->_amount += deposit;
		}
		std::cout << "deposit:" << deposit << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << _nbDeposits << std::endl;
		return ;
	}

bool	Account::makeWithdrawal( int withdrawal ) {
		// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
		//
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";

		if (withdrawal >= 0) {
			if ( checkAmount() - withdrawal < 0 ) {
				std::cout << "withdrawal:" << "refused" << std::endl;
				return false;
			}
			this->_amount -= withdrawal;
			this->_nbWithdrawals++;

			Account::_totalAmount -= withdrawal;
			Account::_totalNbWithdrawals++;
		}

		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}


	int		Account::checkAmount( void ) const {
		return this->_amount;
	}


	void	Account::displayStatus( void ) const {
		// Final text :
		// index:0;amount:47;deposits:1;withdrawals:0
		//
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "deposits:" << this->_nbDeposits << ";";
		std::cout << "withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
	}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "closed" << std::endl;
}
