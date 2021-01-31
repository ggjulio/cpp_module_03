/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/31 17:07:51 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <string>

class ClapTrap
{
public:
	ClapTrap(const std::string & name);
	ClapTrap(const ClapTrap &);
	ClapTrap & operator=(const ClapTrap &);
	~ClapTrap();

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
	
	virtual void print(const std::string &to_print);

protected:
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
};

#endif
