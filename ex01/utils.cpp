/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:00:53 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/11 15:28:12 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	_str_isdigit(std::string str) {

	int		length = str.length();

	for ( int i = 0 ; i < length ; ++i ) {
		if ( std::isdigit(str[i]) )
			return (true);
	}
			return (false);
}

void	_print_introduction( void ) {

	std::cout << std::endl;
	std::cout << "      PHONEBOOK CORP. (all rights reserved)" << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your own Phone Book, how can I help you ?" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}

void	_print_commands( void ) {

	std::cout << std::endl;
	std::cout << "       Available options :" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "| ADD    : add a contact to your phonebook. Limit : 8 contacts.    |" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "| SEARCH : search a contact in you phonebook.                      |" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "| EXIT   : exit your phonebook.                                    |" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	_print_byebye( void ) {

	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "-----------------Goodbye-Mr.Mrs.-!------------------" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "|      PHONEBOOK CORP. (all rights reserved)       |" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}

