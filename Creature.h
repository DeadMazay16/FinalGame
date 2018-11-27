//
// Created by zaqwer on 28.11.18.
//

#ifndef FINALGAME_CREATURE_H
#define FINALGAME_CREATURE_H

#include<iostream>
#include <map>

class Creature
{

private:
    std::string                     name;
    std::map<std::string, float>    stats;  // хп, броня и остальное
    std::map<std::string, int>      params; // сила, ловкость и остальное
     
};


#endif //FINALGAME_CREATURE_H
