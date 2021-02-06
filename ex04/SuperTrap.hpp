/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 04:34:23 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_H
#define SUPER_TRAP_H

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(const std::string & name="");
	SuperTrap(const SuperTrap &);
	SuperTrap & operator=(const SuperTrap &);
	~SuperTrap();

	virtual void print(const std::string &to_print) const;
};

#endif
