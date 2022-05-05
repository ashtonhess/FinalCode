//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_CHARACTERCREATOR_H
#define CODE_CHARACTERCREATOR_H
#include <iostream>
using namespace std;
#include "Creator.h"

class CharacterCreator: public Creator {
private:
public:
    Character* generateVowelCharacter();
    Character* generateConsonantCharacter();
    Character* generateNumberCharacter();
};


#endif //CODE_CHARACTERCREATOR_H
