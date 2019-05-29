//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_WEAPONBEHAVIOR_H
#define DESIGN_PATTERNS_WEAPONBEHAVIOR_H

#include <iostream>

class WeaponBehavior {
public:
    virtual ~WeaponBehavior(){}
    virtual void useWeapon() = 0;
};


#endif //DESIGN_PATTERNS_WEAPONBEHAVIOR_H
