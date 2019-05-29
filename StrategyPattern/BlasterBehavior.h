//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_BLASTERBEHAVIOR_H
#define DESIGN_PATTERNS_BLASTERBEHAVIOR_H


#include "WeaponBehavior.h"

class BlasterBehavior: public WeaponBehavior{
public:
    BlasterBehavior();
    virtual ~BlasterBehavior();

    virtual void useWeapon(){
        std::cout <<  "I am using my blaster!\n";
    }

};


#endif //DESIGN_PATTERNS_BLASTERBEHAVIOR_H
