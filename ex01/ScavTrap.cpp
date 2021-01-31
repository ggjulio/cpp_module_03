/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/31 15:27:05 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

bool ScavTrap::_seeded = false;

ScavTrap::ScavTrap(const std::string & name): _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1),
	_meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	print("Created");
	if (_seeded == false)
	{
		srand (time(NULL));
		_seeded = true;
	}
}
ScavTrap::~ScavTrap(){
	print("Destroyed");
}
ScavTrap::ScavTrap(const ScavTrap &other){
	*this = other;
	print("Created using copy constructor");
}
ScavTrap& ScavTrap::operator=(const ScavTrap & other){
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

void ScavTrap::meleeAttack(std::string const &target){
	print("melee attack to <" + target + "> causing "
		+ std::to_string(_meleeAttackDamage) + " damage");
}
void ScavTrap::rangedAttack(std::string const &target){
	print("Ranged attack to <" + target + "> causing "
		+ std::to_string(_rangedAttackDamage) + " damage");
}

void ScavTrap::takeDamage(unsigned int amount){
	const char *quote =  "Oh my God, I'm leaking! I'm leaking! ... I can see...the code";
	int oldHitPoint = getHitPoints();

	setHitPoints(-amount + _armorDamageReduction);
	print("<takeDamage>("+std::to_string(amount)
		+") "+quote+"  | Before:" + std::to_string(oldHitPoint)
		+ "PV | After:" +  std::to_string(getHitPoints()) + "PV");
}

void ScavTrap::beRepaired(unsigned int amount){
	const char *quote =  "Good as new, I think. Am I leaking ?                          ";
	int oldHitPoint = getHitPoints();

	setHitPoints(amount);
	print("<beRepaired>("+std::to_string(amount)
		+") "+quote+ " | Before:" + std::to_string(oldHitPoint)
		+"PV | After:" + std::to_string(getHitPoints()) + "PV");
	
}
void ScavTrap::challengeNewcomer(std::string const &target){
	char const *poolChallenges[] = {"Not Full of Monkeys", "Knee-Deep in Brass",
		"Hard Boiled", "Afternoon Delight", "Open Pandora's Boxes"};

	int challenge = rand()%(sizeof(poolChallenges)/8);
	print("<vaulthunter_dot_exe> Hey <" + target
		+"> ! Come here. I have a challenge for you : <"+poolChallenges[challenge]+">");
}

std::string ScavTrap::getName(){ return _name;}
int ScavTrap::getHitPoints(){ return _hitPoints;}
int ScavTrap::getMaxHitPoints(){ return _maxEnergyPoints;}
int ScavTrap::getEnergyPoints(){ return _energyPoints;}
int ScavTrap::getMaxEnergyPoints(){ return _maxEnergyPoints;}
int ScavTrap::getLevel(){ return _level;}
int ScavTrap::getMeleeAttackDamage(){ return _meleeAttackDamage;}
int ScavTrap::getRangedAttackDamage(){ return _rangedAttackDamage;}
int ScavTrap::getArmorDamageReduction(){ return _armorDamageReduction;}

void ScavTrap::setHitPoints(int points){
	_hitPoints = _hitPoints + points;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else if (_hitPoints < 0)
		_hitPoints = 0;
}

void ScavTrap::setEnergyPoints(int points){
	_energyPoints = _energyPoints + points;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else if (_energyPoints < 0)
		_energyPoints = 0;
}

void  ScavTrap::print(const std::string &to_print){
	std::cout << "ScavTrap <" << _name << "> " << to_print << std::endl;
}
