/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:03:04 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/12 13:52:22 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


Phonebook::Phonebook() {
}


Contact		*Phonebook::get_selected_contact( int i ) {
	
	return &contact_list[i];
}

void	Phonebook::reset_search_contact( Phonebook *book ) {

	std::string		buff;

	std::cout << "          You have more than 8 contacts in your Phonebook." << std::endl;
	std::cout << "          Do you want to replace one contact with a new one ?";
	while ( buff.empty() == true
			|| (buff.compare("yes") && buff.compare("no") && buff.compare("EXIT")) ) {
		std::cout << " Answer by yes/no : ";
		std::getline(std::cin, buff);
	}

	if ( buff.compare("yes") == 0 ) {
		print_search_option( *book );
		std::cout << "Please enter which one : ";
		std::getline(std::cin, buff);
		if ( book->is_search_correct(&buff) )
			book->contact_list[std::stoi(buff) - 1].fill_contact();
	}
}

bool	Phonebook::is_search_correct(std::string *str_enter) {

	while ( true ) {
		std::cout << std::endl;
		std::cout << std::endl;
		if ( str_enter->length() == 1 ) {
			if ( _str_isdigit(*str_enter) == true )
				if (std::stoi(*str_enter) > 0 && std::stoi(*str_enter) < 9)
					return true ;
		}
		else if ( str_enter->compare("EXIT") == 0)
			return false;
		std::cout << " Please, enter a number between 1 and 8 (included). ";
		std::cout << "The system cannot held more than 8 contacts. " << std::endl;
		std::cout << " Enter the index of the contact : ";
		if ( !( std::getline(std::cin, *str_enter)) )
			return false;
	}
}

void	Phonebook::print_search_option( Phonebook book ) {

	std::cout << " CONTACTS :" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for ( int i = 0; i < 8 ; i++ ) 
		book.contact_list[i].print_contact( i );
}

Phonebook::~Phonebook() {
}
