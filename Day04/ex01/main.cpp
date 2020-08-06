/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 12:09:32 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/04 12:09:32 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.Class.hpp"
#include "RadScorpion.Class.hpp"
#include "PlasmaRifle.Class.hpp"
#include "PowerFist.Class.hpp"
#include "SuperMutant.Class.hpp"


int main()
{
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	Enemy* c = new SuperMutant();
	moi->attack(c);
	std::cout << *moi;
	moi->equip(pr);
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->recoverAP();
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->recoverAP();
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;

	delete pr;
	delete pf;
	return EXIT_SUCCESS;
}
