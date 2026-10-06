#ifndef LEAGUE_H
#define LEAGUE_H

#include "includes.hpp"
#include "Team.h"

class League {
    public:
        std::vector<Team> league;
        std::string name;
        League (std::string name) : league(30), name(this->name) {}
    
    private:
        int id_;
};

#endif 