#ifndef CONTRACT_H
#define CONTRACT_H

#include "includes.hpp"

class Contract {
    public:
        int yearsRemaining;
        int yearsTotal;
        int contractAmount;
        

        std::string getContractString() {
            std::cout << "$" << contractAmount << ", " << yearsTotal << " contract" << std::endl; 
        }
};

#endif 