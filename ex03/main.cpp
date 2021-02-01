/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/01 15:48:21 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

int main(){
	ClapTrap ct = ClapTrap("clap");
	FragTrap ft = FragTrap("clap");
	ScavTrap st = ScavTrap("scav");
	{
		NinjaTrap ninjaTP("Sc4v-TP-v4");	
		ClapTrap &c = ninjaTP;
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
		
	std::cout << "###############################################################" << std::endl;
		ninjaTP.ninjaShoebox(ct);
		ninjaTP.ninjaShoebox(ft);
		ninjaTP.ninjaShoebox(st);
		ninjaTP.ninjaShoebox(ninjaTP);
	std::cout << "###############################################################" << std::endl;
	}
	return 0;
}
