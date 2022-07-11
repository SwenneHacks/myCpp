/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 19:32:44 by swofferh      #+#    #+#                 */
/*   Updated: 2020/11/11 16:26:13 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <iterator>

template<typename T>
typename T::iterator easyfind(T& container, int findme)
{
	typename T::iterator it = std::find(container.begin(), container.end(), findme);
	if (it == container.end())
		throw std::exception();
    return(it);
}

#endif
