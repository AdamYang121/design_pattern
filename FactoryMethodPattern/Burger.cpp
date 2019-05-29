//
// Created by Hongdong Yang on 2019-05-29.
//

#include "Burger.h"

Burger::Burger() : m_bun(""), m_name(""){

}

Burger::~Burger() {

}

void Burger::Grill() {
    std::cout << "Grill for 5 minutes... done\n";
}

void Burger::Prepare() {
    std::cout << "Preparing " << m_name << "\n";
    std::cout << "Add bottom half of " << m_bun << "...\n";
    std::cout << "Add grilled burger patty...\n";
    std::cout << "Adding condiments :\n";
    std::vector<std::string>::iterator condimentsIter;
    for (condimentsIter = m_condiments.begin(); condimentsIter != m_condiments.end(); condimentsIter++) {
        std::string condiment = *condimentsIter;
        std::cout << "    " << condiment << "\n";
    }
    std::cout << "Adding top " << m_bun << "\n";
}

void Burger::Wrap() {
    std::cout << "Wrapping your " << GetName() << "\n";
}

string Burger::GetName() {
    return m_name;
}

