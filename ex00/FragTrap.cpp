/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:33 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/30 01:34:34 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>


FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1),
	_meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5){
		std::cout << "FragTrap <" << name << "> Created" << std::endl; 
	}
FragTrap::~FragTrap(){
	std::cout << "FragTrap <" << _name << "> Destroyed" << std::endl; 	
}

void FragTrap::rangedAttack(std::string const &target){
	std::cout << "FragTrap <" << _name 
		<< "> ranged attack to <" << target << ">"; 	
}
void FragTrap::takeDamage(unsigned int amount){
	
}
void FragTrap::beRepaired(unsigned int amount){
	
}
void FragTrap::vaulthunter_dot_exe(std::string &target){
	
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

bool FragTrap::setHitPoints(int points){
	if (points )
		return false;
	_hitPoints = points;
	return true;
}
bool FragTrap::setEnergyPoints(int points){
	if (points )
		return false;
	_energyPoints = points;
	return true;
}
