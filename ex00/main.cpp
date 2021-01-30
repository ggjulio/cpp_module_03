/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 18:21:30 by juligonz          #+#    #+#             */
/*   Updated: 2021/01/30 15:05:19 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(){
	FragTrap fragTP("Fr4g-TP-v4");

	fragTP.meleeAttack("BAD_HUMAN");
	fragTP.rangedAttack("BAD_HUMAN");
	fragTP.takeDamage(50);
	fragTP.beRepaired(10);
	fragTP.beRepaired(200);
	fragTP.takeDamage(200);

	std::cout << "Actual energy:" << fragTP.getEnergyPoints() << std::endl;
	fragTP.setEnergyPoints(200);
	fragTP.print("<energy>(200)"+ "updated energy:" );
	return 0;

}