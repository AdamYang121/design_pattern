//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_WENDYSBURGER_H
#define DESIGN_PATTERNS_WENDYSBURGER_H

#include "Burger.h"

class WendysBurger : public Burger {
public:
    WendysBurger() {
        m_name = std::string("Burger King Burger");
        m_bun = std::string("Sesame Seed Bun");
        m_condiments.push_back("Ketchup");
        m_condiments.push_back("Mustard");
        m_condiments.push_back("Pickle");
    }

    virtual ~WendysBurger() {

    }
};

#endif //DESIGN_PATTERNS_WENDYSBURGER_H
