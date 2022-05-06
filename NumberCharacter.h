//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_NUMBERCHARACTER_H
#define CODE_NUMBERCHARACTER_H
#include <iostream>
using namespace std;
#include "Character.h"

class NumberCharacter: public Character {
private:
    char numChar;
public:
    char getChar() override;
    NumberCharacter();
    ~NumberCharacter(){};
    char randNum();

};


#endif //CODE_NUMBERCHARACTER_H
