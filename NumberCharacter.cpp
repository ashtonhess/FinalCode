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
    srand(time(NULL));
    int randNum=48+(rand()%(57-48+1));
    return (char)randNum;
}
