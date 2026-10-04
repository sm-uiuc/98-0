#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include "includes.hpp"
#include "Contract.h"

class Player {
    public:
        int potential;
        int age;
        std::string firstName;
        std::string lastName;
        std::string position;
        Contract contract;

        // Ratings from 40 - 99
        int insideScoring;
        int midrange;
        int threePointShooting;
        int freeThrowShooting;
        int offensiveIQ;
        int defensiveIQ;
        int passing;
        int rebounding;
        int speed;
        int strength;
        int playerOverall;
        int injuryProbability;

        int getId() const;
        Player(int id, std::string firstName, std::string lastName, std::string pos, int age);

        void setID() {};
    private:
        int _playerID;
};

#endif