//
// Created by Ashton Hess on 5/5/22.
//

#include "VowelCharacter.h"
VowelCharacter::VowelCharacter() {
    vowelChar=randVowel();
}
char VowelCharacter::randVowel(){
    //srand(time(nullptr));
    //int randNum = (rand()%5+1)-1; //this wouldn't get me random numbers unless compiled again
    random_device rd;
    mt19937 r(rd());
    uniform_int_distribution<>id(0,4);
    int rand=id(r);
    //cout<<"Vowel rand number: "<<rand<<endl;
    return vowels[rand];
}
char VowelCharacter::getVowel(){
    return vowelChar;
}
char VowelCharacter::getChar() {
    return vowelChar;
}
