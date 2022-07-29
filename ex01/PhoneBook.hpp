/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:41:36 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/11 16:36:07 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {

	public :
		void		reset_search_contact( Phonebook *book );
		Contact		*get_selected_contact( int i );
		bool		is_search_correct(std::string *str_enter);
		void		print_search_option( Phonebook book );
		Phonebook();
		~Phonebook();

	private :
		Contact		contact_list[8];

};

void	_print_introduction( void );
bool	_str_isdigit(std::string str);
void	_print_commands( void );
void	_print_byebye( void );

#endif
