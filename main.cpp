#include <iostream>
#include "StrategyPattern/StarWarsCharacter.h"

#include "StrategyPattern/BlasterBehavior.h"
#include "StrategyPattern/CrossBowBehavior.h"
#include "StrategyPattern/LightSaberBehavior.h"
#include "FactoryMethodPattern/BurgerFactory.h"
#include "FactoryMethodPattern/McDonaldsFactory.h"
#include "FactoryMethodPattern/WendysFactory.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    // -------------1. Strategy Pattern ---------------
//    WeaponBehavior *blasterBehavior = new BlasterBehavior();
//    WeaponBehavior *lightSaberBehavior = new LightSaberBehavior();
//    WeaponBehavior *crossBowBehavior = new CrossBowBehavior();
//
//    StarWarsCharacter *hanSolo = new StarWarsCharacter(std::string("Han Solo"), blasterBehavior);
//    StarWarsCharacter *lukeSkywalker = new StarWarsCharacter(std::string("Luke Skywalker"), lightSaberBehavior);
//    StarWarsCharacter *chewy = new StarWarsCharacter(std::string("Chewy"), crossBowBehavior);
//
//    hanSolo->Fight();
//    lukeSkywalker->Fight();
//    chewy->Fight();
//
//    hanSolo->SetWeaponBehavior(lightSaberBehavior);
//    lukeSkywalker->SetWeaponBehavior(crossBowBehavior);
//    chewy->SetWeaponBehavior(blasterBehavior);
//
//    hanSolo->Fight();
//    lukeSkywalker->Fight();
//    chewy->Fight();
//
//    delete hanSolo;
//    delete lukeSkywalker;
//    delete chewy;
//
//    delete blasterBehavior;
//    delete lightSaberBehavior;
//    delete crossBowBehavior;


    // ------------- Factory Method Pattern ---------------

    BurgerFactory *mcDonalds = new McDonaldsFactory();

    Burger *mcDonaldsCheeseBurger = mcDonalds->OrderBurger(std::string("cheeseburger"));


    std::cout << "I just ordered a " << mcDonaldsCheeseBurger->GetName() << "\n\n";
    delete mcDonaldsCheeseBurger;

    Burger *mcDonaldsBurger = mcDonalds->OrderBurger(std::string("burger"));
    std::cout << "I just ordered a " << mcDonaldsCheeseBurger->GetName() << "\n\n";


    delete mcDonaldsBurger;
    delete mcDonalds;

    BurgerFactory *wendys = new WendysFactory();


    Burger *wendysCheeseBurger = wendys->OrderBurger(std::string("cheeseburger"));
    std::cout << "I just ordered a " << wendysCheeseBurger->GetName() << "\n\n";
    delete wendysCheeseBurger;

    Burger *wendysBurger = wendys->OrderBurger(std::string("burger"));
    std::cout << "I just ordered a " << wendysBurger->GetName() << "\n\n";
    delete wendysBurger;

    delete wendys;

    cout << "Good Job!" << endl;

    return 0;

}