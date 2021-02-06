/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 02:40:26 by juligonz         ###   ########.fr       */
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
	FragTrap fragTP("Fr4g-TP-v4");

	fragTP.meleeAttack("BAD_TRAVELER");
	fragTP.rangedAttack("BAD_TRAVELER");

	fragTP.takeDamage(50);
	fragTP.beRepaired(10);
	fragTP.beRepaired(200);
	fragTP.takeDamage(200);

	std::cout << std::endl;
	std::cout << "Actual energy:" << fragTP.getEnergyPoints() << std::endl;
	fragTP.setEnergyPoints(-200);
	ss << "<energy>(-200) updated energy:" << fragTP.getEnergyPoints();
	fragTP.print(ss.str());
	ss.str("");

	fragTP.setEnergyPoints(200);
	ss << "<energy>(200) updated energy:" << fragTP.getEnergyPoints();
	fragTP.print(ss.str());
	ss.str("");

	std::cout << std::endl << std::endl;
	fragTP.setEnergyPoints(-2);
	ss << "<energy>(-2) updated energy:" << fragTP.getEnergyPoints();
	fragTP.print(ss.str());
	ss.str("");

	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	}
	std::cout << std::endl << std::endl
		<< "##########################################################"
		<< std::endl;
	{
	ScavTrap scavTP("Sc4v-TP-v2");

	scavTP.meleeAttack("BAD_TRAVELER");
	scavTP.rangedAttack("BAD_TRAVELER");

	scavTP.takeDamage(50);
	scavTP.beRepaired(10);
	scavTP.beRepaired(200);
	scavTP.takeDamage(200);

	std::cout << std::endl;
	std::cout << "Actual energy:" << scavTP.getEnergyPoints() << std::endl;
	scavTP.setEnergyPoints(-200);
	ss << "<energy>(-200) updated energy:" << scavTP.getEnergyPoints();
	scavTP.print(ss.str());
	ss.str("");
	
	scavTP.setEnergyPoints(200);
	ss << "<energy>(200) updated energy:" << scavTP.getEnergyPoints();
	scavTP.print(ss.str());
	ss.str("");

	scavTP.challengeNewcomer("NEWCOMER");
	scavTP.challengeNewcomer("NEWCOMER");
	}
	return 0;
}
