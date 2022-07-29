/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:04:48 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/12 13:44:18 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main() {

	int				index = 0;
	std::string		str_enter;
	Phonebook		book;

	_print_introduction();
	_print_commands();
	std::cout << " _Enter your command here : ";

	while ( std::getline(std::cin, str_enter) && str_enter.compare("EXIT") ) {
		std::cout << std::endl;

		if ( str_enter.compare("ADD") == 0 ) {
			if ( index < 8 && book.get_selected_contact(index)->fill_contact() == 0 )
				index++;
			else if ( index == 8 )
				book.reset_search_contact(&book);
		}

		else if ( str_enter.compare("SEARCH") == 0 ) {
			book.print_search_option( book );
			if ( index != 0 ) {
				std::cout << "Enter the index of the contact : ";
				std::getline( std::cin, str_enter );
				std::cout << std::endl;
				if ( book.is_search_correct(&str_enter) )
					book.get_selected_contact( std::stoi(str_enter) - 1 )->print_full_contact(std::stoi(str_enter));
			}
		}
		std::cout << std::endl;
		std::cout <<" _Enter your command here : ";
	}
	std::cout << std::endl;
	_print_byebye();
}
