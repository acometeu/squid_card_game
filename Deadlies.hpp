/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 21:55:06 by acomet            #+#    #+#             */
/*   Updated: 2024/02/27 20:46:31 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DEADLIES_HPP
#define	DEADLIES_HPP

#include <string>
#include <iostream>
#include <vector>
#include <random>

class Deadlies {

public:

    Deadlies(void);
    ~Deadlies(void);

    void    create_deck_minus_one_squid(void);
    void    shuffle(void);
    void    squid_algo(void);

    std::vector<int>    get_deck(void) const;

private:

    std::vector<int> _deck;
    
};

enum families {squid, horse, rabbit, tortoise, cat, lion, pig, sheep, joker};


#endif