//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_CREATOR_H
#define CODE_CREATOR_H
#include <iostream>
using namespace std;
#include "Character.h"

class Creator {
private:
public:

    virtual ~Creator(){};
    virtual Character* generateVowelCharacter()=0;
    virtual Character* generateConsonantCharacter()=0;
    virtual Character* generateNumberCharacter()=0;
};


#endif //CODE_CREATOR_H
