/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/07 21:01:06 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/19 18:23:28 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

int main(int argc, char **argv) {
	std::string output;
	int i;

	i = 1;
	if (argc == 1) {
		output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		while (i < argc){
			std::string str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			output += str;
			i++;
		}
	}
	std::cout << output << std::endl;
	return (0);
}
