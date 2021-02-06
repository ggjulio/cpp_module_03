/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 03:43:51 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

NinjaTrap::NinjaTrap(const std::string & name): ClapTrap(name)
{
	print("Created");
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

void NinjaTrap::ninjaShoebox(const ClapTrap &t){
	t.print(" <ninjashoebox> Save me from the Badass!");
}

void NinjaTrap::ninjaShoebox(const FragTrap &t){
	t.print(" <ninjashoebox> You call yourself a badass?");
}

void NinjaTrap::ninjaShoebox(const ScavTrap &t){
	t.print(" <ninjashoebox> Hi Sc4vTP...Viva La Robolution!");
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &t){
	t.print(" <ninjashoebox> I'm a robot ninja too...Viva La Robolution!");
}

void  NinjaTrap::print(const std::string &to_print) const{
	std::cout << "NinjaTrap <" << _name << "> " << to_print << std::endl;
}
