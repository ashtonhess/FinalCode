//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_VOWELCHARACTER_H
#define CODE_VOWELCHARACTER_H
#include <iostream>
using namespace std;
#include "Character.h"

class VowelCharacter: public Character {
private:
    char vowelChar;
public:
    char getChar() override;
    VowelCharacter();
    ~VowelCharacter(){};
    char vowels[5]= {'a','e','i','o','u'};
    char randVowel();
    char getVowel();

};


#endif //CODE_VOWELCHARACTER_H
