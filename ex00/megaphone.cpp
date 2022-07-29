/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:33:07 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/12 14:55:05 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int ac, char **av) {

	std::string		str;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; av[i] ; i++) {
		for (int j = 0; av[i][j]; j++) {
			str.push_back(std::toupper(av[i][j]));
		}
	}

	std::cout << str << std::endl;
	return 0;
}
