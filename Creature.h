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
    std::map<std::string, float>    rates;  // блокирование брони, шанс уклонения и остальное

    /*!
     * Пересчитать параметры существа
     */
    void recountStats();

public:
    std::string getName();

    /*!
     * Дефолтный конструктор, при котором у существа будут минимальные параметры (1 для всех характеристик).
     */
    Creature(std::string name);
    Creature(std::string name, std::map<std::string, int> params);

    /*!
     * Атаковать данное существо
     * @param type Тип наносимого урона
     * @param amount Количество урона
     * @return Количество нанесённого урона
     */
    float attack(std::string type, float amount);
};


#endif //FINALGAME_CREATURE_H
