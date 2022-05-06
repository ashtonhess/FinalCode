#include <iostream>
using namespace std;
//#include "Character.h"
//#include "VowelCharacter.h"
//#include "ConsonantCharacter.h"
//#include "NumberCharacter.h"
//#include "Creator.h"
//#include "CharacterCreator.h"
#include "FileGenerator.h"
#include "SubstringCounter.h"
#include "Singleton.h"
int main(){
//
//    Creator*create = new CharacterCreator();
//
//    Character* v1 = create->generateVowelCharacter();
//    cout<<endl<<endl<<v1->getChar()<<endl<<endl;
//    Character* c1 = create->generateConsonantCharacter();
//    cout<<endl<<endl<<c1->getChar()<<endl<<endl;
//    Character* n1 = create->generateNumberCharacter();
//    cout<<endl<<endl<<n1->getChar()<<endl<<endl;
//
    Singleton::getInstance();
    Singleton::getInstance()->setFile("output.txt");
    cout<<"Singleton file name: "<<Singleton::getInstance()->getFile()<<endl;


    FileGenerator *gen;
    gen = new FileGenerator();
    gen->writeFile();

    SubstringCounter *sc = new SubstringCounter("a");
    //cout<<"searchstring: "<<sc->getSearchSubstring()<<endl;
    sc->readAndCount();




}