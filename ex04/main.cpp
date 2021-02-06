/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 04:39:05 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main(){
	std::stringstream ss;
	SuperTrap superTP("Super-TP-v5");
	std::cout << "######################################" << std::endl;

	std::cout << "hit points: " << superTP.getHitPoints() << std::endl;
	std::cout << "max hit points: " << superTP.getMaxHitPoints() << std::endl;
	std::cout << "energy points: " << superTP.getEnergyPoints() << std::endl;
	std::cout << "max energy points: " << superTP.getMaxEnergyPoints() << std::endl;
	std::cout << "level: " << superTP.getLevel() << std::endl;
	superTP.rangedAttack("BAD");
	superTP.meleeAttack("BAD");
	superTP.vaulthunter_dot_exe("BAD");
	superTP.ninjaShoebox(ClapTrap("clap"));

	std::cout << "######################################" << std::endl;
	return 0;
}
