/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/23 19:22:46 by swofferh      #+#    #+#                 */
/*   Updated: 2020/10/23 19:59:08 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
    if (ac < 4 || ac > 4)
    {
        std::cerr << "Error: input required './replace [FILE] [s1] s2]'" << std::endl;
        return (1);
    }
    std::string file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream ifs(file);
    if(!ifs.good())
    {
        std::cerr << "Error 1";
        return (1);
    }
    if (s1.empty())
    {
        std::cerr << "Error 2";
        return (1);
    }
    if (s2.empty())
    {
        std::cerr << "Error 3";
        return (1);
    }
    std::stringstream   buff;
    std::string         content;
    buff << ifs.rdbuf();
    content = buff.str();
    
    size_t  match;
    while ((match = content.find(s1)) != std::string::npos)
        content.replace(match, s1.length(), s2);
    
    std::ofstream ofs(file + ".replace");
    if(!ofs.good())
    {
        std::cerr << "Error 4";
        return (1);
    }
    ofs << content;
    ofs.close();
    return 0;
}
