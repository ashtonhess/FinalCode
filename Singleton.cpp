//
// Created by Ashton Hess on 5/5/22.
//

#include "Singleton.h"
Singleton *Singleton::instance=NULL;

Singleton *Singleton::getInstance(){
    if (!instance){
        instance = new Singleton();
    }
    return instance;
}
void Singleton::setFile(string filenameIn){
    filename = filenameIn;
}
string Singleton::getFile(){
    return filename;
}