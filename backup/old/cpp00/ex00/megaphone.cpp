/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/07 21:01:06 by swofferh      #+#    #+#                 */
/*   Updated: 2021/01/18 15:07:40 by sofferha      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cin cout endl
#include <string> // at (prints out the content of a string character by character)
#include <cctype> // toupper

int main(int argc, char **argv) {
	std::string output;
	int i;

	i = 1;
	if (argc == 1) {
		output = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		while (i < argc){
			std::string str = argv[i];
			for (int j = 0; j < str.size(); j++)
				str.at(j) = std::toupper(str.at(j));
			output += str;
			i++;
		}
	}
	std::cout << output << std::endl;
	return (0);
}
