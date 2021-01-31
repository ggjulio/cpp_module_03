/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/31 17:22:54 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ninja_TRAP_H
#define Ninja_TRAP_H

#include <string>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(const std::string & name);
	NinjaTrap(const NinjaTrap &);
	NinjaTrap & operator=(const NinjaTrap &);
	~NinjaTrap();

	// void vaulthunter_dot_exe(std::string const &target);
	
	virtual void print(const std::string &to_print);
};

#endif
