/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/30 01:33:04 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include <string>

class FragTrap
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

public:
	FragTrap(std::string name);
	~FragTrap();

	std::string getName();
	int getHitPoints();
	int getMaxHitPoints();
	int getEnergyPoints();
	int getMaxEnergyPoints();
	int getLevel();
	int getMeleeAttackDamage();
	int getRangedAttackDamage();
	int getArmorDamageReduction();

	bool setHitPoints(int points);
	bool setEnergyPoints(int points);


	void rangedAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string &target);
};



#endif