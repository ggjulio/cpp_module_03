/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 04:41:44 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>
#include <string>

SuperTrap::SuperTrap(const std::string & name): ClapTrap(name)
{
/*
Hit points (Fragtrap) 100
•Max hit points (Fragtrap) 100
•Energy points (Ninjatrap) 120
•Max energy points (Ninjatrap) 120
•Level (1)
•Name (Parameter of constructor)
•Melee attack damage (Ninjatrap) 60
•Ranged attack damage (Fragtrap) 20
•Armor damage reduction (Fragtrap) 5
•rangedAttack (Fragtrap) 20
•meleeAttack (Ninjatrap) 60
*/

	print("Created");
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

SuperTrap::~SuperTrap(){
	print("Destroyed");
}

SuperTrap::SuperTrap(const SuperTrap &other): ClapTrap(other._name){
	print("Created using copy constructor");
	*this = other;
}

SuperTrap& SuperTrap::operator=(const SuperTrap & other){
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

void  SuperTrap::print(const std::string &to_print) const{
	std::cout << "SuperTrap <" << _name << "> " << to_print << std::endl;
}
