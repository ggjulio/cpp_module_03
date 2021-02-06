/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 01:34:57 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main(){
	FragTrap fragTP("Fr4g-TP-v4");
	std::stringstream ss;

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

	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	return 0;
}
