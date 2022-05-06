//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_SINGLETON_H
#define CODE_SINGLETON_H

#include <iostream>
using namespace std;
class Singleton {
private:
    static Singleton *instance;
    Singleton(){};
    string filename;
public:
    static Singleton *getInstance();
    Singleton(Singleton const& ) = delete; // copy constructor;
    Singleton& operator=(Singleton const&) = delete; // copy assignment
    Singleton(Singleton &&) = delete; // move constructor
    Singleton& operator = (Singleton &&) = delete; // move assignment
    ~Singleton(); //Deconstructor
    void setFile(string filenameIn);
    string getFile();

};


#endif //CODE_SINGLETON_H
