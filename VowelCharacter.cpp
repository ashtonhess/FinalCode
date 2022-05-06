//
// Created by Ashton Hess on 5/5/22.
//

#include "VowelCharacter.h"
VowelCharacter::VowelCharacter() {
    vowelChar=randVowel();
}
char VowelCharacter::randVowel(){
    srand(time(NULL));
    int randNum = (rand()%5+1)-1;
    cout<<"Vowel rand number: "<<randNum<<endl;
    return vowels[randNum];
}
char VowelCharacter::getVowel(){
    return vowelChar;
}
char VowelCharacter::getChar() {
    return vowelChar;
}
