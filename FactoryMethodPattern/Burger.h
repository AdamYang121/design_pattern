//
// Created by Hongdong Yang on 2019-05-29.
//

#ifndef DESIGN_PATTERNS_BURGER_H
#define DESIGN_PATTERNS_BURGER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Burger {
public:
    Burger();

    ~Burger();

    void Grill();

    void Prepare();

    void Wrap();

    string GetName();

protected:
    string m_name;
    string m_bun;
    vector<string> m_condiments;
};

#endif //DESIGN_PATTERNS_BURGER_H
