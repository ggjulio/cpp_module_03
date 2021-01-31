/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/31 14:37:10 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main(){
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
	fragTP.print(std::string("<energy>(-200)")+" updated energy:"+ std::to_string(fragTP.getEnergyPoints()));

	fragTP.setEnergyPoints(200);
	fragTP.print(std::string("<energy>(200)")+" updated energy:"+ std::to_string(fragTP.getEnergyPoints()));

	std::cout << std::endl << std::endl;
	fragTP.setEnergyPoints(-2);
	fragTP.print(std::string("<energy>(-2)")+" updated energy:"+ std::to_string(fragTP.getEnergyPoints()));

	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	fragTP.vaulthunter_dot_exe("BAD_TRAVELER");
	return 0;
}
