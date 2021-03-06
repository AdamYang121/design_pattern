//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_WENDYSFACTORY_H
#define DESIGN_PATTERNS_WENDYSFACTORY_H

#include "Burger.h"
#include "BurgerFactory.h"

class WendysFactory : public BurgerFactory {
public:
    WendysFactory();
    virtual ~WendysFactory();
    Burger* CreateBurger(string type);
};


#endif //DESIGN_PATTERNS_WENDYSFACTORY_H
