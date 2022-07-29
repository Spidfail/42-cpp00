/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:25:43 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/11 14:38:31 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <ctype.h>

class Contact {

	public:
		bool	fill_contact( void );

		void	print_contact( int i );
		void	print_full_contact( int i );
		void	print_elem_contact( std::string str );

		Contact();
		~Contact();

	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;

		std::string		phone_number;

		std::string		darkest_secret;
};

#endif
