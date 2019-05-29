//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_LIGHTSABERBEHAVIOR_H
#define DESIGN_PATTERNS_LIGHTSABERBEHAVIOR_H


#include "WeaponBehavior.h"

class LightSaberBehavior: public WeaponBehavior{
public:
    LightSaberBehavior();
    virtual ~LightSaberBehavior();

    virtual void useWeapon(){
        std::cout << "I am using my light saber!\n";
    }
};


#endif //DESIGN_PATTERNS_LIGHTSABERBEHAVIOR_H
