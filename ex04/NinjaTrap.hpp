/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 22:58:20 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ninja_TRAP_H
#define Ninja_TRAP_H

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
protected:
	NinjaTrap();
public:
	NinjaTrap(const std::string & name);
	NinjaTrap(const NinjaTrap &);
	NinjaTrap & operator=(const NinjaTrap &);
	virtual ~NinjaTrap();

	void ninjaShoebox(const ClapTrap &);
	void ninjaShoebox(const FragTrap &);
	void ninjaShoebox(const ScavTrap &);
	void ninjaShoebox(const NinjaTrap &);
	
	virtual void print(const std::string &to_print) const;
};

#endif
