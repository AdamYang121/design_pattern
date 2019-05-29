//
// Created by Hongdong Yang on 2019-05-29.
//
#include "WendysFactory.h"
#include "WendysCheeseBurger.h"
#include "WendysBurger.h"

WendysFactory::WendysFactory() {}

WendysFactory::~WendysFactory() {

}

Burger *WendysFactory::CreateBurger(string type) {
    if (type.compare("cheeseburger") == 0) {
        return new WendysCHeeseBurger();
    } else {
        return new WendysBurger();
    }
}
