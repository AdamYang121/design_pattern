//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_WENDYSCHEESEBURGER_H
#define DESIGN_PATTERNS_WENDYSCHEESEBURGER_H

#include "Burger.h"

class WendysCHeeseBurger : public Burger {
public:
    WendysCHeeseBurger() {
        m_name = std::string("Burger King Cheese Burger");
        m_bun = std::string("Sesame Seed Bun");
        m_condiments.push_back("Ketchup");
        m_condiments.push_back("Mustard");
        m_condiments.push_back("Pickle");
        m_condiments.push_back("Cheese");
    }

    virtual ~WendysCHeeseBurger() {
    }
};

#endif //DESIGN_PATTERNS_WENDYSCHEESEBURGER_H
