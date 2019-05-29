//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_MCDONALDSFACTORY_H
#define DESIGN_PATTERNS_MCDONALDSFACTORY_H


#include "BurgerFactory.h"

class McDonaldsFactory : public BurgerFactory {

public:
    McDonaldsFactory();

    virtual ~McDonaldsFactory();

    Burger* CreateBurger(string type);
};


#endif //DESIGN_PATTERNS_MCDONALDSFACTORY_H
