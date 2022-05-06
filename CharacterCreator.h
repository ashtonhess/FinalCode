//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_CHARACTERCREATOR_H
#define CODE_CHARACTERCREATOR_H
#include <iostream>
using namespace std;
#include "Creator.h"
#include "Character.h"
#include "VowelCharacter.h"
#include "ConsonantCharacter.h"
#include "NumberCharacter.h"

class CharacterCreator: public Creator {
private:
public:
    //CharacterCreator(){};
    ~CharacterCreator()override {};
    Character* generateVowelCharacter() override;
    Character* generateConsonantCharacter() override;
    Character* generateNumberCharacter() override;
};



#endif //CODE_CHARACTERCREATOR_H
