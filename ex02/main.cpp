/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 03:11:23 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main(){
	std::stringstream ss;
	{
		ScavTrap scavTP("Sc4v-TP-v4");	
		ClapTrap &c = scavTP;
		
		c.print("Who am I");
		c.meleeAttack("AHH");
		c.rangedAttack("AHH");
		c.takeDamage(200);
		c.beRepaired(200);
		std::cout << "Actual energy:" << c.getEnergyPoints() << std::endl;
		c.setEnergyPoints(-200);
		ss << "<energy>(-200) updated energy:" << c.getEnergyPoints();
		c.print(ss.str());
		ss.str("");
		c.setEnergyPoints(200);
		ss << "<energy>(200) updated energy:" << c.getEnergyPoints();
		c.print(ss.str());
		ss.str("");		
		scavTP.challengeNewcomer("Pierre");
	}
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
		ss << "<energy>(-200) updated energy:" << c.getEnergyPoints();
		c.print(ss.str());
		ss.str("");
		c.setEnergyPoints(200);
		ss << "<energy>(200) updated energy:" << c.getEnergyPoints();
		c.print(ss.str());
		ss.str("");		
		fragTP.vaulthunter_dot_exe("Pierre");
	}
	return 0;
}
