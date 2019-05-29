//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_BURGERFACTORY_H
#define DESIGN_PATTERNS_BURGERFACTORY_H


#include "Burger.h"

class BurgerFactory {
public:
    BurgerFactory();

    virtual ~BurgerFactory();
    Burger* OrderBurger(string type);
    virtual Burger* CreateBurger(string type); // virtual method can be override by the subclass
};
#endif //DESIGN_PATTERNS_BURGERFACTORY_H
