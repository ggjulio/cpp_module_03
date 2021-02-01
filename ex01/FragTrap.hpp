/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/01 15:32:44 by juligonz         ###   ########.fr       */
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

	static bool _seeded;

public:
	FragTrap(const std::string & name="");
	FragTrap(const FragTrap &);
	FragTrap & operator=(const FragTrap &);
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

	void setHitPoints(int points);
	void setEnergyPoints(int points);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
	
	void print(const std::string &to_print);
};

#endif
