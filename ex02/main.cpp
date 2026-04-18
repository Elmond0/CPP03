/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:48:01 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/18 11:04:32 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "=== Construction chaining ===" << std::endl;
	ClapTrap a("Clappy");
	ScavTrap b("Scavvy");
	FragTrap c("Fraggy");
	FragTrap e(c);
	ClapTrap d("Delta");
	d = a;

	std::cout << std::endl
			  << "=== ClapTrap ===" << std::endl;
	a.attack("target");
	a.takeDamage(8);
	a.beRepaired(3);
	a.takeDamage(10);
	a.attack("target");

	std::cout << std::endl
			  << "=== ScavTrap ===" << std::endl;
	b.attack("target");
	b.takeDamage(40);
	b.beRepaired(10);
	b.guardGate();

	std::cout << std::endl
			  << "=== FragTrap ===" << std::endl;
	c.attack("target");
	c.takeDamage(60);
	c.beRepaired(20);
	c.highFivesGuys();

	std::cout << std::endl
			  << "=== Energy drain ===" << std::endl;
	for (int i = 0; i < 100; i++)
		c.attack("target");
	c.beRepaired(1);

	std::cout << std::endl
			  << "=== Copy ScavTrap actions ===" << std::endl;
	e.attack("enemy");
	e.takeDamage(90);
	e.beRepaired(5);
	e.takeDamage(50);
	e.attack("enemy");

	std::cout << std::endl
			  << "=== Destruction chaining (reverse order) ===" << std::endl;
	return 0;
}
