//
// Created by Hongdong Yang on 2019-05-29.
//

#include "BurgerFactory.h"

BurgerFactory::BurgerFactory() {}

BurgerFactory::~BurgerFactory() {

}

Burger *BurgerFactory::OrderBurger(string type) {
    Burger *burger = CreateBurger(type);

    burger->Grill();
    burger->Prepare();
    burger->Wrap();
    return burger;
}

Burger *BurgerFactory::CreateBurger(string type) {
    return nullptr;
}
