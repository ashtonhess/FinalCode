//
// Created by Ashton Hess on 5/5/22.
//

#ifndef CODE_SUBSTRINGCOUNTER_H
#define CODE_SUBSTRINGCOUNTER_H
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <sstream>
#include <vector>



/*Define a class named “SubstringCounter”, that has a two private
        attributes “string search_substring”, and “int substring _count”
        that has public getter and setter functions for each attribute.
        The “SubstringCounter” class should contain one public function:
        “int readAndCount()”. You should have 5 threads (reader threads)
        created that has the task “int readAndCount()”. Since that you will
        have 5 reader threads, this means that you will have 5 instances from
        SubstringCounter.
*/
class SubstringCounter {
private:
    string search_substring;
    int substring_count;
public:
    SubstringCounter(string searchString);
    ~SubstringCounter(){};
    void setSearchSubstring(string searchSubstring);
    string getSearchSubstring();
    void setSubstringCount(int substringCount);
    int getSubstringCount();
    string readFileIntoString();
    int readAndCount();
    static void*subsThread(void*input);



    };


#endif //CODE_SUBSTRINGCOUNTER_H
