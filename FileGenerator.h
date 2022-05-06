//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_FILEGENERATOR_H
#define CODE_FILEGENERATOR_H
#include <iostream>
#include <pthread.h>
#include <mutex>
#include "CharacterCreator.h"
using namespace std;

mutex mtx;

class FileGenerator {
private:

public:
    void writeFile();
};


#endif //CODE_FILEGENERATOR_H
