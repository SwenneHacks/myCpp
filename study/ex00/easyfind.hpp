/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 15:59:03 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/11/08 19:31:42 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iterator>

template<typename T>
void easyfind(T& a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw std::runtime_error(" does not contain the number: ");
}

#endif
