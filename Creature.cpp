//
// Created by zaqwer on 28.11.18.
//

#include "Creature.h"

Creature::Creature(std::string name)
{
    params["strength"]          = 1;
    params["perception"]        = 1;
    params["endurance"]         = 1;
    params["charisma"]          = 1;
    params["intelligence"]      = 1;
    params["agility"]           = 1;
    params["luck"]              = 1;
    this->name = std::move(name);
    recountStats();
}

std::string Creature::getName()
{
    return this->name;
}

Creature::Creature(std::string name, std::map<std::string, int> params)
{
    this->name = std::move(name);
    this->params = std::move(params);
    recountStats();
}

void Creature::recountStats()
{
    stats["max_hp"] = 10 + params["strength"] + params["endurance"] * 2 + stats["level"] * (params["endurance"] / 2 + 2);
    stats["armor"] = params["strength"] * 0.1f;
    rates["phys_resist"] = 1 - (0.03f * stats["armor"]) / (1 + 0.03f * stats["armor"]);

    // todo После добавления оружия
    // rates["attack_speed"] =

}
