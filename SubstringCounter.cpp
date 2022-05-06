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
    string fStr;
    fStr = readFileIntoString();
    cout<<fStr<<endl;
    int occurrences = 0;
    std::string::size_type pos = 0;

    string splitString = fStr;
    vector<string> sv = vector<string>();
    for (size_t i = 0; i < fStr.size(); i += 100)
    {
        string sub = fStr.substr(i, 100);
        sv.push_back(sub);
    }
    pthread_t readThreads[5];
    int*return1=0;
    int*return2=0;
    int*return3=0;
    int*return4=0;
    int*return5=0;


    //creating threads for each char type
    pthread_create(&readThreads[0],NULL,subsThread,(void*)return1);
    pthread_create(&readThreads[1],NULL,subsThread,(void*)return2);
    pthread_create(&readThreads[2],NULL,subsThread,(void*)return3);
    pthread_create(&readThreads[3],NULL,subsThread,(void*)return4);
    pthread_create(&readThreads[4],NULL,subsThread,(void*)return5);
    for (int i = 0; i < 5; ++i) {
        pthread_join(readThreads[i],NULL);
    }
    while ((pos = fStr.find(search_substring, pos )) != std::string::npos) {
        ++ occurrences;
        pos += search_substring.length();
    }
    std::cout <<"OCCURRENCES: "<< occurrences << std::endl;
    cout<<"substring find finished"<<endl;
    return occurrences;
}
void*SubstringCounter::subsThread(void*input) {
//    int*returnPtr=(int*)input;
//    int count=0;
    //std::string::size_type pos = 0;
//    while ((pos = fStr.find(search_substring, pos )) != std::string::npos) {
//        ++ occurrences;
//        pos += search_substring.length();
//    }
    //*returnPtr=count;
    return NULL;
}
string SubstringCounter::readFileIntoString() {
    ifstream input_file("output.txt");
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << "output.txt" << "'" << endl;
        exit(EXIT_FAILURE);
    }
    return string((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());
}