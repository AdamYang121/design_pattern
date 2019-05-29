//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_CROSSBOWBEHAVIOR_H
#define DESIGN_PATTERNS_CROSSBOWBEHAVIOR_H


#include "WeaponBehavior.h"

class CrossBowBehavior: public WeaponBehavior {
public:
    CrossBowBehavior();
    virtual ~CrossBowBehavior();

    virtual void useWeapon(){
        std::cout << "I am using my cross bow!\n";
    }
};


#endif //DESIGN_PATTERNS_CROSSBOWBEHAVIOR_H
