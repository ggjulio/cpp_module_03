/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/06 22:54:00 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	FragTrap();

public:
	FragTrap(const std::string & name);
	FragTrap(const FragTrap &);
	FragTrap & operator=(const FragTrap &);
	virtual ~FragTrap();

	void vaulthunter_dot_exe(std::string const &target);
	
	virtual void print(const std::string &to_print) const;
};

#endif
