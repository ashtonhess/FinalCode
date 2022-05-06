//
// Created by Ashton Hess on 5/5/22.
//

#include "FileGenerator.h"
void FileGenerator::writeFile(){

    pthread_t writeThreads[3];
    for (int i = 0; i < 3; ++i) {
        pthread_create(&writeThreads[i],NULL,vowelThread,NULL);
    }


}
//v=200
//c=200
//n=100
//total=500
void*vowelThread(void*input){



    Creator*create = new CharacterCreator();
    for (int i = 0; i < 200; ++i) {
        Character*v=create->generateVowelCharacter();
        mtx.lock();
        //write to file

        mtx.unlock();
    }
//
//    Character* v1 = create->generateVowelCharacter();
//    cout<<endl<<endl<<v1->getChar()<<endl<<endl;
//    Character* c1 = create->generateConsonantCharacter();
//    cout<<endl<<endl<<c1->getChar()<<endl<<endl;
//    Character* n1 = create->generateNumberCharacter();
//    cout<<endl<<endl<<n1->getChar()<<endl<<endl;
}