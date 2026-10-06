#ifndef TEAM_H
#define TEAM_H
#pragma once

#include "includes.hpp"
#include "Player.h"

class Team {
    std::string teamName;
    std::vector<std::unique_ptr<Player>> roster;
    std::string conference;
    std::string division;
    std::string mood;
    int wins;
    int losses;
    
    // Ratings from 40 - 99
    int teamOverall;  
    Team () {}  
    Team (std::string name, std::string conference, std::string division) : roster(15) {
        this->teamName = name;
        this->conference = conference;
        this->division = division;
    }
    private:
        int _teamID;
};

#endif