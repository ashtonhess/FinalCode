//
// Created by Ashton Hess on 5/5/22.
//

#include "NumberCharacter.h"
NumberCharacter::NumberCharacter(){
    numChar=randNum();
}
char NumberCharacter::getChar(){
    return numChar;
}
char NumberCharacter::randNum(){
//    srand(time(nullptr));
//    int randNum=48+(rand()%(57-48+1));
//    return (char)randNum;
    random_device rd;
    mt19937 r(rd());
    uniform_int_distribution<>id(48,57);
    int rand=id(r);
    cout<<"number rand number: "<<rand<<endl;
    return rand;
}
