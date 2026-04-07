/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <elmondo@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:48:01 by elmondo           #+#    #+#             */
/*   Updated: 2026/04/07 16:48:02 by elmondo          ###   ########.fr       */
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

	std::cout << std::endl
			  << "=== ClapTrap ===" << std::endl;
	a.attack("target");
	a.takeDamage(8);
	a.beRepaired(3);

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
			  << "=== FragTrap death ===" << std::endl;
	c.takeDamage(80);
	c.attack("target");
	c.beRepaired(5);

	std::cout << std::endl
			  << "=== Destruction chaining (reverse order) ===" << std::endl;
	return 0;
}
