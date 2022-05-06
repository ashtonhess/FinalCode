//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_CHARACTER_H
#define CODE_CHARACTER_H
#include <iostream>
using namespace std;
#include <chrono>
#include <stdlib.h>
#include <random>

class Character {
public:
    virtual ~Character(){};
    virtual char getChar() = 0;
};


#endif //CODE_CHARACTER_H
