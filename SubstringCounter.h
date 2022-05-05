//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_SUBSTRINGCOUNTER_H
#define CODE_SUBSTRINGCOUNTER_H
#include <iostream>
using namespace std;
#include <string>

class SubstringCounter {
private:
    string search_substring;
    int substring_count;
public:
    void setSearchSubstring(string searchSubstring);
    string getSearchSubstring();
    void setSubstringCount(int substringCount);
    int getSubstringCount();

    int readAndCount();


};


#endif //CODE_SUBSTRINGCOUNTER_H
