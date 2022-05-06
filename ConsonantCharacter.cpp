//
// Created by Ashton Hess on 5/5/22.
//

#include "ConsonantCharacter.h"
char ConsonantCharacter::randConsonant(){
    //uint64_t ms = chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
//    srand(time(nullptr));
//    int randNum = (rand()%21+1)-1;
//    return consonants[randNum];
    random_device rd;
    mt19937 r(rd());
    uniform_int_distribution<>id(0,21);
    int rand=id(r);
    //cout<<"consonant rand number: "<<rand<<endl;
    return consonants[rand];
}
char ConsonantCharacter::getChar(){
    return consonantChar;
}
ConsonantCharacter::ConsonantCharacter() {
    consonantChar=randConsonant();
}