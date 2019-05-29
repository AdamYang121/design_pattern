#include <iostream>
#include "StrategyPattern/StarWarsCharacter.h"

#include "StrategyPattern/BlasterBehavior.h"
#include "StrategyPattern/CrossBowBehavior.h"
#include "StrategyPattern/LightSaberBehavior.h"



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


    // ------------- Strategy Pattern ---------------




    return 0;
}