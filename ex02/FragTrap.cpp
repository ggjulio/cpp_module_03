/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/31 17:02:03 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(const std::string & name): ClapTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

	print("Created");
	if (_seeded == false)
	{
		srand (time(NULL));
		_seeded = true;
	}
}

FragTrap::~FragTrap(){
	print("Destroyed");
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other._name){
	print("Created using copy constructor");
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap & other){
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

void FragTrap::vaulthunter_dot_exe(std::string const &target){
	char const *poolAttacks[] = {"Torgue Fiesta", "Laser Inferno", "Blight Bot", "Miniontrap", "Gun Wizard"};
	int const damages[sizeof(poolAttacks)/8] = {15, 21, 9, 5, 17};
	int const attackCost = 25;
	
	if (_energyPoints >= attackCost)
	{
		setEnergyPoints(-attackCost);
		int attack = rand()%(sizeof(poolAttacks)/8);
		print("<vaulthunter_dot_exe> | Remaining energy:"+std::to_string(getEnergyPoints())
		+" | Damage:"+std::to_string(damages[attack])+" | Attack to <" + target
			+"> using <"+poolAttacks[attack]+">");
	}
	else
		print("<vaulthunter_dot_exe> OPPS robot only have "+std::to_string(getEnergyPoints())
			+"PT    |  You need "+std::to_string(attackCost-getEnergyPoints())+" energy points");	
}

void  FragTrap::print(const std::string &to_print){
	std::cout << "FragTrap <" << _name << "> " << to_print << std::endl;
}
