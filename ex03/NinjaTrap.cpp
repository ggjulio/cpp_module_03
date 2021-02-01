/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/01 14:29:24 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

NinjaTrap::NinjaTrap(const std::string & name): ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap(){
	print("Destroyed");
}

NinjaTrap::NinjaTrap(const NinjaTrap &other): ClapTrap(other._name){
	print("Created using copy constructor");
	*this = other;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap & other){
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

void ninjaShoebox(const ClapTrap &t){
	t.print("You call yourself a badass?");
}

void ninjaShoebox(const FragTrap &t){
	t.print("d");
}

void ninjaShoebox(const ScavTrap &t){
	t.print("Hi Sc4vTP...Viva La Robolution!");
}

void ninjaShoebox(const NinjaTrap &t){
	t.print("I'm a robot ninja too...Viva La Robolution!");
}

void  NinjaTrap::print(const std::string &to_print) const{
	std::cout << "NinjaTrap <" << _name << "> " << to_print << std::endl;
}
