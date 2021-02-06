/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 23:05:31 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

bool ClapTrap::_seeded = false;

ClapTrap::ClapTrap(const std::string & name): _name(name), _hitPoints(0),
	_maxHitPoints(0), _energyPoints(0), _maxEnergyPoints(0), _level(0),
	_meleeAttackDamage(0), _rangedAttackDamage(0), _armorDamageReduction(0)
{
	print("Created");
	if (_seeded == false)
	{
		srand (time(NULL));
		_seeded = true;
	}
}
ClapTrap::~ClapTrap(){
	print("Destroyed");
}
ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name){
	print("Created using copy constructor");
	*this = other;
}
ClapTrap& ClapTrap::operator=(const ClapTrap & other){
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

void ClapTrap::meleeAttack(std::string const &target){
	std::ostringstream ss;
 
	ss << "melee attack to <" << target << "> causing "
		<< _meleeAttackDamage << " damage";
	print(ss.str());
}
void ClapTrap::rangedAttack(std::string const &target){
	std::ostringstream ss;
 
	ss << "Ranged attack to <" << target << "> causing "
		<< _rangedAttackDamage << " damage";
	print(ss.str());
}

void ClapTrap::takeDamage(unsigned int amount){
	std::ostringstream ss;
	const char *quote =  "Oh my God, I'm leaking! I'm leaking! ... I can see...the code";
	int oldHitPoint = getHitPoints();

	setHitPoints(-amount + _armorDamageReduction);
	ss <<"<takeDamage>(" << amount
		<< ") " << quote <<"  | Before:" << oldHitPoint
		<< "PV | After:" << getHitPoints() << "PV";
	print(ss.str());
}

void ClapTrap::beRepaired(unsigned int amount){
	std::ostringstream ss;
	const char *quote =  "Good as new, I think. Am I leaking ?                          ";
	int oldHitPoint = getHitPoints();

	setHitPoints(amount);
	ss << "<beRepaired>("<<amount
		<<") "<<quote<< " | Before:" << oldHitPoint
		<<"PV | After:" << getHitPoints() << "PV";
	print(ss.str());
}

std::string ClapTrap::getName(){ return _name;}
int ClapTrap::getHitPoints(){ return _hitPoints;}
int ClapTrap::getMaxHitPoints(){ return _maxHitPoints;}
int ClapTrap::getEnergyPoints(){ return _energyPoints;}
int ClapTrap::getMaxEnergyPoints(){ return _maxEnergyPoints;}
int ClapTrap::getLevel(){ return _level;}
int ClapTrap::getMeleeAttackDamage(){ return _meleeAttackDamage;}
int ClapTrap::getRangedAttackDamage(){ return _rangedAttackDamage;}
int ClapTrap::getArmorDamageReduction(){ return _armorDamageReduction;}

void ClapTrap::setHitPoints(int points){
	_hitPoints = _hitPoints + points;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else if (_hitPoints < 0)
		_hitPoints = 0;
}

void ClapTrap::setEnergyPoints(int points){
	_energyPoints = _energyPoints + points;
	if (_energyPoints > _maxEnergyPoints)
		_energyPoints = _maxEnergyPoints;
	else if (_energyPoints < 0)
		_energyPoints = 0;
}

void  ClapTrap::print(const std::string &to_print) const{
	std::cout << "ClapTrap <" << _name << "> " << to_print << std::endl;
}
