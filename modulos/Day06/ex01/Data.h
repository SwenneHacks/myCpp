/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 16:37:55 by swofferh      #+#    #+#                 */
/*   Updated: 2023/08/04 16:37:55 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP06_DATA_H
#define CPP06_DATA_H

#include <iostream>

class Data
{
public:
    Data(void);
    Data(const Data& ref);
    ~Data(void);

    Data& operator=(const Data& ref);

    // Functions
    void HelloWorld(void);
    void SpookyPrint(void);
private:
    const int32_t   _SpookyData;
};


#endif //CPP06_DATA_H
