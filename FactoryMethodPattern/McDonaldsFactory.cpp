//
// Created by Hongdong Yang on 2019-05-29.
//

#include "McDonaldsFactory.h"
#include "McDonaldsCheeseBurger.h"
#include "McDonaldsBurger.h"

McDonaldsFactory::McDonaldsFactory() {}

McDonaldsFactory::~McDonaldsFactory() {

}

Burger *McDonaldsFactory::CreateBurger(string type) {
    if (type.compare("cheeseburger") == 0 ){
        return new McDonaldsCheeseBurger();
    } else{
        return new McDonaldsBurger();
    }
}
