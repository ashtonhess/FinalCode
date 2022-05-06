//
// Created by Ashton Hess on 5/5/22.
//

#include "SubstringCounter.h"
SubstringCounter::SubstringCounter(string searchString){
    search_substring=searchString;
}
void SubstringCounter::setSearchSubstring(string searchSubstring){
    search_substring = searchSubstring;
}
string SubstringCounter::getSearchSubstring(){
    return search_substring;
}
void SubstringCounter::setSubstringCount(int substringCount){
    substring_count = substringCount;
}
int SubstringCounter::getSubstringCount(){
    return substring_count;
}

int SubstringCounter::readAndCount(){
return 0;
}