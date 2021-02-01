/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/01 14:36:18 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

int main(){
	// {
	// 	NinjaTrap ninjaTP("Sc4v-TP-v4");	
	// 	ClapTrap &c = ninjaTP;
	// 	c.print("Who am I");
	// 	c.meleeAttack("AHH");
	// 	c.rangedAttack("AHH");
	// 	c.takeDamage(200);
	// 	c.beRepaired(200);
	// 	std::cout << "Actual energy:" << c.getEnergyPoints() << std::endl;
	// 	c.setEnergyPoints(-200);
	// 	c.print(std::string("<energy>(-200)")+" updated energy:"+ std::to_string(c.getEnergyPoints()));
	// 	c.setEnergyPoints(200);
	// 	c.print(std::string("<energy>(200)")+" updated energy:"+ std::to_string(c.getEnergyPoints()));
	// 	// ninjaTP.challengeNewcomer("Pierre");
	// }
	std::cout << "###############################################################" << std::endl;
	{
		FragTrap fragTP("Fr4g-TP-v4");
		ClapTrap &c = fragTP;
		c.print("Who am I");
		c.meleeAttack("AHH");
		c.rangedAttack("AHH");
		c.takeDamage(200);
		c.beRepaired(200);
		std::cout << "Actual energy:" << c.getEnergyPoints() << std::endl;
		c.setEnergyPoints(-200);
		c.print(std::string("<energy>(-200)")+" updated energy:"+ std::to_string(c.getEnergyPoints()));
		c.setEnergyPoints(200);
		c.print(std::string("<energy>(200)")+" updated energy:"+ std::to_string(c.getEnergyPoints()));
		fragTP.vaulthunter_dot_exe("Pierre");
	}
	return 0;
}
