//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_FILEGENERATOR_H
#define CODE_FILEGENERATOR_H
#include <iostream>
#include <string>
#include <pthread.h>
#include <mutex>
#include <fstream>
#include "Singleton.h"
#include "CharacterCreator.h"
using namespace std;


class FileGenerator {
private:

public:
    FileGenerator();
    ~FileGenerator();
    static void*vThread(void*input);
    static void*cThread(void*input);
    static void*nThread(void*input);

    void writeFile();
};


#endif //CODE_FILEGENERATOR_H
