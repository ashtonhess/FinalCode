//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_CONSONANTCHARACTER_H
#define CODE_CONSONANTCHARACTER_H
#include <iostream>
using namespace std;
#include "Character.h"

class ConsonantCharacter: public Character {
private:
    char consonantChar;
public:
    ConsonantCharacter();
    ~ConsonantCharacter(){};
    char getChar() override;
    char consonants[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    char randConsonant();



};


#endif //CODE_CONSONANTCHARACTER_H
