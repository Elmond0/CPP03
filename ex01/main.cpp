/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:47:46 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/15 11:07:40 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "=== Construction chaining ===" << std::endl;
	ClapTrap a("Clappy");
	ScavTrap b("Scavvy");
	ScavTrap c(b);
	ClapTrap d("Delta");
	d = a;

	std::cout << std::endl
			  << "=== ClapTrap actions ===" << std::endl;
	a.attack("target");
	a.takeDamage(8);
	a.beRepaired(3);
	a.takeDamage(10);
	a.attack("target");

	std::cout << std::endl
			  << "=== ScavTrap actions ===" << std::endl;
	b.attack("enemy");
	b.takeDamage(40);
	b.beRepaired(15);
	b.guardGate();

	std::cout << std::endl

			  << "=== Energy drain ===" << std::endl;
	for (int i = 0; i < 50; i++)
		b.attack("target");
	b.beRepaired(1);

	std::cout << std::endl
			  << "=== Copy ScavTrap actions ===" << std::endl;
	c.attack("enemy");
	c.takeDamage(90);
	c.beRepaired(5);
	c.takeDamage(50);
	c.attack("enemy");

	std::cout << std::endl
			  << "=== Destruction chaining (reverse order) ===" << std::endl;
	return 0;
}
