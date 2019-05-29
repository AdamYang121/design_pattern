//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_MCDONALDSBURGER_H
#define DESIGN_PATTERNS_MCDONALDSBURGER_H

#include "Burger.h"

class McDonaldsBurger : public Burger {
public:
    McDonaldsBurger() {
        m_name = std::string("McDonald's Burger");
        m_bun = std::string("Plain Bun");
        m_condiments.push_back("Ketchup");
        m_condiments.push_back("Mustard");
        m_condiments.push_back("Onions");
        m_condiments.push_back("Pickle");
    }

    ~McDonaldsBurger() {

    }

};

#endif //DESIGN_PATTERNS_MCDONALDSBURGER_H
