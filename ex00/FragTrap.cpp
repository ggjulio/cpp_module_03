/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/30 15:15:39 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>


FragTrap::FragTrap(const std::string & name): _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	print("Created");
}
FragTrap::~FragTrap(){
	print("Destroyed");
}
FragTrap::FragTrap(const FragTrap &other){
	*this = other;
	print("Created using copy constructor");
}
FragTrap& FragTrap::operator=(const FragTrap & other){
	print("ASSIGNATION Operator called");
	_name = other._name;
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints =  other._maxEnergyPoints;
	_level = other._level;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	return *this;
}

void FragTrap::meleeAttack(std::string const &target){
	print("melee attack to <" + target + "> causing "
		+ std::to_string(_meleeAttackDamage) + " damage");
}
void FragTrap::rangedAttack(std::string const &target){
	print("Ranged attack to <" + target + "> causing "
		+ std::to_string(_rangedAttackDamage) + " damage");
}

void FragTrap::takeDamage(unsigned int amount){
	int oldHitPoint = getHitPoints();
	setHitPoints(-amount + _armorDamageReduction);
	print("<takeDamage>("+std::to_string(amount)
		+") Outch, it hurts ! Before:" + std::to_string(oldHitPoint)
		+ "PV | After:" +  std::to_string(getHitPoints()) + "PV");
}

void FragTrap::beRepaired(unsigned int amount){
	int oldHitPoint = getHitPoints();
	setHitPoints(amount);
	print("<beRepaired>("+std::to_string(amount)
		+") Mhh feels good  ! Before:" + std::to_string(oldHitPoint)
		+"PV | After:" + std::to_string(getHitPoints()) + "PV");
	
}
void FragTrap::vaulthunter_dot_exe(std::string &target){
	std::string const poolAttacks[] = {"mange tes morts", "2", "3", "4", "5"};
	int const degats[] = {0, 2, 40, 20, 200};
	
	(void)target;
	if (_seeded == false)
	{
		srand (time(NULL));
		_seeded = true;
	}
	// std::string(attr[rand()%(sizeof(attr)/8)]) + "_" + std::string(name[rand()%(sizeof(name)/8)]));

}

std::string FragTrap::getName(){ return _name;}
int FragTrap::getHitPoints(){ return _hitPoints;}
int FragTrap::getMaxHitPoints(){ return _maxEnergyPoints;}
int FragTrap::getEnergyPoints(){ return _energyPoints;}
int FragTrap::getMaxEnergyPoints(){ return _maxEnergyPoints;}
int FragTrap::getLevel(){ return _level;}
int FragTrap::getMeleeAttackDamage(){ return _meleeAttackDamage;}
int FragTrap::getRangedAttackDamage(){ return _rangedAttackDamage;}
int FragTrap::getArmorDamageReduction(){ return _armorDamageReduction;}

void FragTrap::setHitPoints(int points){
	_hitPoints = _hitPoints + points;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else if (_hitPoints < 0)
		_hitPoints = 0;
}

void FragTrap::setEnergyPoints(int points){
	_energyPoints = _energyPoints + points;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else if (_energyPoints < 0)
		_energyPoints = 0;
}

void  FragTrap::print(const std::string &to_print){
	std::cout << "FragTrap <" << _name << "> " << to_print << std::endl;
}

bool FragTrap::_seeded = false;
