//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_MCDONALDSCHEESEBURGER_H
#define DESIGN_PATTERNS_MCDONALDSCHEESEBURGER_H

#include "Burger.h"

class McDonaldsCheeseBurger : public Burger {
public:
    McDonaldsCheeseBurger() {
        m_name = std::string("McDonald's Cheese Burger");
        m_bun = std::string("Plain Bun");
        m_condiments.push_back("Ketchup");
        m_condiments.push_back("Mustard");
        m_condiments.push_back("Onions");
        m_condiments.push_back("Pickle");
        m_condiments.push_back("Cheese");
    }

    ~McDonaldsCheeseBurger() {
    }

};

#endif //DESIGN_PATTERNS_MCDONALDSCHEESEBURGER_H
