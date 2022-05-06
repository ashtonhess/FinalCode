//
// Created by Ashton Hess on 5/5/22.
//

#include "FileGenerator.h"
pthread_mutex_t wmtx;

FileGenerator::FileGenerator() {

}
FileGenerator::~FileGenerator(){
    pthread_mutex_destroy(&wmtx);

}
void FileGenerator::writeFile(){
    ofstream *outFile = new ofstream();
    if(!*outFile){
        cerr<<"Error creating ofstream"<<endl;
    }
    //initializing mutex
    if(pthread_mutex_init(&wmtx, NULL) != 0) {
        std::cerr<< "Error initializing writer lock\n";
    }
    cout<<"Starting write to file w 3 threads"<<endl;
    pthread_t writeThreads[3];
    //creating threads for each char type
    pthread_create(&writeThreads[0],NULL,vThread,(void*)outFile);
    pthread_create(&writeThreads[1],NULL,cThread,(void*)outFile);
    pthread_create(&writeThreads[2],NULL,nThread,(void*)outFile);
    //joining threads
    for (int i = 0; i < 3; ++i) {
        pthread_join(writeThreads[i],NULL);
    }
    cout<<"file write finished"<<endl;
//    std::ofstream matrixFile;
//    matrixFile.open(filePath);
//    if(!matrixFile)
//        std::cerr << "Failed to open file: " << filePath << std::endl;
//    std::cout << "Starting file write... ";
//    matrixFile << rows_ << std::endl;
//    matrixFile << columns_ << std::endl;
//    for (int i = 0; i < rows_*columns_; ++i) {
//        matrixFile<<data_[i]<<" ";
//        if((i+1)%columns_==0&&i!=0){
//            matrixFile<<"\n";
//        }
//    }
//    std::cout << "Finished file write." << std::endl;
//    matrixFile.close();
   // pthread_mutex_destroy(&wmtx);
}
//v=200
//c=200
//n=100
//total=500
void*FileGenerator::vThread(void*input) {
    ofstream *outFile= (ofstream*)input;

    Creator *create = new CharacterCreator();
    for (int i = 0; i < 200; ++i) {
        Character *v = create->generateVowelCharacter();
        //get mutex for critical section
        pthread_mutex_lock(&wmtx);
        outFile->open(Singleton::getInstance()->getFile(), ios::app);//open file for appending
        //writing to file while this thread has the mutex locked.
        //cout<<"vowel "<<v->getChar()<<endl;
        *outFile << v->getChar();//put the char into the file
        outFile->close();//close file after appending char
        pthread_mutex_unlock(&wmtx);//unlock mutex so next operation can lock mutex
    }
    return NULL;
}
void*FileGenerator::cThread(void*input) {
    ofstream *outFile= (ofstream*)input;
    Creator *create = new CharacterCreator();
    for (int i = 0; i < 200; ++i) {
        Character *c = create->generateConsonantCharacter();
        pthread_mutex_lock(&wmtx);
        //writing to file while this thread has the mutex locked.
        outFile->open(Singleton::getInstance()->getFile(), ios::app);
        //cout<<"cons "<<c->getChar()<<endl;
        *outFile << c->getChar();
        outFile->close();

        pthread_mutex_unlock(&wmtx);
    }
    return NULL;
}
void*FileGenerator::nThread(void*input) {
    ofstream *outFile= (ofstream*)input;
    Creator *create = new CharacterCreator();
    for (int i = 0; i < 100; ++i) {
        Character *n = create->generateNumberCharacter();
        //write to file
        pthread_mutex_lock(&wmtx);
        //writing to file while this thread has the mutex locked.
        outFile->open(Singleton::getInstance()->getFile(), ios::app);

        //cout<<"number "<<n->getChar()<<endl;
        *outFile << n->getChar();
        outFile->close();

        pthread_mutex_unlock(&wmtx);
    }

    return NULL;
}


//
//    Character* v1 = create->generateVowelCharacter();
//    cout<<endl<<endl<<v1->getChar()<<endl<<endl;
//    Character* c1 = create->generateConsonantCharacter();
//    cout<<endl<<endl<<c1->getChar()<<endl<<endl;
//    Character* n1 = create->generateNumberCharacter();
//    cout<<endl<<endl<<n1->getChar()<<endl<<endl;
