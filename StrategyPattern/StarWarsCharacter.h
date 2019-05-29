//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_STARWARSCHARACTER_H
#define DESIGN_PATTERNS_STARWARSCHARACTER_H

#include <string>
#include "WeaponBehavior.h"

class StarWarsCharacter {
public:
    StarWarsCharacter(std::string name, WeaponBehavior *weaponBehavior);
    virtual ~StarWarsCharacter();

    virtual void  Fight(){
        m_pWeaponBehavior->useWeapon();
    };

    virtual void SetWeaponBehavior(WeaponBehavior *weaponBehavior){
        m_pWeaponBehavior = weaponBehavior;
    }

protected:
    WeaponBehavior *m_pWeaponBehavior;
    std::string m_name;
};

#endif //DESIGN_PATTERNS_STARWARSCHARACTER_H