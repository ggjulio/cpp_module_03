/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/31 17:03:45 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string & name);
	ScavTrap(const ScavTrap &);
	ScavTrap & operator=(const ScavTrap &);
	~ScavTrap();

	void challengeNewcomer(std::string const &target);
	
	virtual void print(const std::string &to_print);
};

#endif
