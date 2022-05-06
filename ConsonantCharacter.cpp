//
// Created by Ashton Hess on 5/5/22.
//

#include "ConsonantCharacter.h"
char ConsonantCharacter::randConsonant(){
    srand(time(NULL));
    int randNum = (rand()%21+1)-1;
    return consonants[randNum];
}
char ConsonantCharacter::getChar(){
    return consonantChar;
}
ConsonantCharacter::ConsonantCharacter() {
    consonantChar=randConsonant();
}