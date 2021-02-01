/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/01 15:32:52 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include <string>

class ScavTrap
{
private:
	std::string _name;
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;

	static bool _seeded;

public:
	ScavTrap(const std::string & name="");
	ScavTrap(const ScavTrap &);
	ScavTrap & operator=(const ScavTrap &);
	~ScavTrap();

	std::string getName();
	int getHitPoints();
	int getMaxHitPoints();
	int getEnergyPoints();
	int getMaxEnergyPoints();
	int getLevel();
	int getMeleeAttackDamage();
	int getRangedAttackDamage();
	int getArmorDamageReduction();

	void setHitPoints(int points);
	void setEnergyPoints(int points);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const &target);
	
	void print(const std::string &to_print);
};

#endif
