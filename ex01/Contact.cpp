/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:01:14 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/12 13:51:39 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
};

void	Contact::print_elem_contact( std::string str ) {

	if (str.size() <= 10) {
		std::cout << std::setw(10);
		std::cout << str;
	}
	else if ( str.empty() == false ) {
		for (int i = 0; i < 9 && str[i] ; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	return ;
}

void	Contact::print_full_contact( int i ) {

	if (first_name.empty() && last_name.empty() && nickname.empty()
			&& phone_number.empty() && darkest_secret.empty()) {
		std::cout << "Contact empty." << std::endl;
		return ;
	}
	std::cout << "You choosed to print the credentials of Mr of Mrs : " << this->last_name << "(." << i << ")" << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "First name : " << first_name << std::endl; 
	std::cout << "Last name : " << last_name << std::endl; 
	std::cout << "nick's name : " << nickname << std::endl; 
	std::cout << "phone number : " << phone_number << std::endl; 
	std::cout << "The Unspeakable Truth, his/her darkest secret : " << darkest_secret << std::endl; 
	return ;
}

void	Contact::print_contact( int i ) {

	if (first_name.empty() && last_name.empty() && nickname.empty()
			&& phone_number.empty() && darkest_secret.empty())
		return ;

	std::cout << "|" << std::setw(9) << i + 1 << "-";
	std::cout << "|" ; print_elem_contact(first_name); 
	std::cout << "|" ; print_elem_contact(last_name);
	std::cout << "|" ; print_elem_contact(nickname); std::cout << "|" ;
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

bool		Contact::fill_contact() {

	std::cout << std::endl;
	std::cout << "Please, enter listed credentials : " << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << " FIRST NAME : ";
	std::getline(std::cin, first_name);

	std::cout << " LAST NAME : ";
	std::getline(std::cin, last_name);

	std::cout << " NICKNAME : ";
	std::getline(std::cin, nickname);

	std::cout << " PHONE NUMBER : ";
	std::getline(std::cin, phone_number);

	std::cout << " (His little darkest secret, naughty boy) : ";
	std::getline(std::cin, darkest_secret);
	std::cout << std::endl;

	return (darkest_secret.size() == 0 && first_name.size() == 0 && last_name.size() == 0
			&& nickname.size() == 0 && phone_number.size() == 0);
}

Contact::~Contact() {
};
