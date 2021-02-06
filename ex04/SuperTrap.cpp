/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 23:16:20 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>
#include <string>

SuperTrap::SuperTrap(const std::string & name): ClapTrap(name), FragTrap(), NinjaTrap()
{
	print("Created");
	_level = 1;
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
