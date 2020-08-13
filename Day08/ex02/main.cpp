/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 17:06:45 by frfrey            #+#    #+#             */
/*   Updated: 2020/08/13 17:06:45 by frfrey           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int			main()
{
	MutantStack<int> mstack;
	std::cout << "Empty: " << mstack.empty() << std::endl;
	std::cout << "Size before push: " << mstack.size() << std::endl;
	mstack.push(17);
	std::cout << "---> " << mstack.top() << std::endl;
	std::cout << "Size after push: " << mstack.size() << std::endl;
	std::cout << "Empty: " << mstack.empty() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	std::cout << "Empty: " << mstack.empty() << std::endl;

	for (int i = 0; i < 10; i++)
		mstack.push(i);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << std::endl;
	std::cout << mstack.size() << " items in mstack" << std::endl;
	while (it != ite)
	{
		std::cout << "> " << *it << std::endl;
		++it;
	}

	std::cout << std::endl;
	std::stack<int> s(mstack);

	return 0;
}
