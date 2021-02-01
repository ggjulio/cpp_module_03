/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/01 14:19:54 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(const std::string & name): ClapTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

}
ScavTrap::~ScavTrap(){
	print("Destroyed");
}
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other._name){
	print("Created using copy constructor");
	*this = other;
}
ScavTrap& ScavTrap::operator=(const ScavTrap & other){
	_name = other._name;
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints =  other._maxEnergyPoints;
	_level = other._level;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	print("ASSIGNATION Operator called");
	return *this;
}

void ScavTrap::challengeNewcomer(std::string const &target){
	char const *poolChallenges[] = {"Not Full of Monkeys", "Knee-Deep in Brass",
		"Hard Boiled", "Afternoon Delight", "Open Pandora's Boxes"};

	int challenge = rand()%(sizeof(poolChallenges)/8);
	print("<challengeNewcomer> Hey <" + target
		+"> ! Come here. I have a challenge for you : <"+poolChallenges[challenge]+">");
}

void  ScavTrap::print(const std::string &to_print) const{
	std::cout << "ScavTrap <" << _name << "> " << to_print << std::endl;
}
