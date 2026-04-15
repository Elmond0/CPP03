/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:20:22 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/15 10:32:37 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "=== Construction ===" << std::endl;
	ClapTrap a("Alpha");
	ClapTrap b("Bravo");
	ClapTrap c(a);
	ClapTrap d("Delta");
	d = a;

	std::cout << std::endl
			  << "=== Combat ===" << std::endl;
	a.attack("Bravo");
	b.takeDamage(0);

	std::cout << std::endl
			  << "=== Repair ===" << std::endl;
	b.takeDamage(7);
	b.beRepaired(3);

	std::cout << std::endl
			  << "=== Death ===" << std::endl;
	b.takeDamage(8);
	b.attack("Alpha");
	b.beRepaired(5);

	std::cout << std::endl
			  << "=== Energy drain ===" << std::endl;
	for (int i = 0; i < 10; i++)
		a.attack("target");
	a.beRepaired(1);

	std::cout << std::endl
			  << "=== Destruction ===" << std::endl;
	return 0;
}
