/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 03:45:00 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main(){
	std::stringstream ss;
	ClapTrap ct = ClapTrap("clap");
	FragTrap ft = FragTrap("frag");
	ScavTrap st = ScavTrap("scav");
	std::cout << "###############################################################" << std::endl;
	{
		NinjaTrap ninjaTP("Sc4v-TP-v4");	
	std::cout << "###############################################################" << std::endl;
		ClapTrap &c = ninjaTP;
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
		
	std::cout << "###############################################################" << std::endl;
		ninjaTP.ninjaShoebox(ct);
		ninjaTP.ninjaShoebox(ft);
		ninjaTP.ninjaShoebox(st);
		ninjaTP.ninjaShoebox(ninjaTP);
	std::cout << "###############################################################" << std::endl;
	}
	std::cout << "###############################################################" << std::endl;
	return 0;
}
