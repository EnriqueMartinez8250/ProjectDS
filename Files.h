//
// Created by Karla Vela on 12/1/22.
//


#include <string>
#include <iostream>
#include <fstream>
#include "actor_actress.h" //this is what is messing with the struct error//comment and uncomment
#include "Picture.h"
#include "BST_actors.h"
#include <vector>
#include <sstream>
//
using namespace std;

//added tokenize function to split the data at every comma. Tclhe data
//is seperated by commas so this will help split them so you can create
//objects of each type of data to match your class members. KVL
void tokenize (std::string const &str, const char delim, std::vector <std::string> &out) {
    std::stringstream Data(str);
    std::string s;
    while (std::getline(Data, s, delim)) {
        out.push_back(s);
    }
}

//First function that will read the actor_actress.csv file. KVL
void ReadActorsCsv(string & FilePath, BinarySearchTree<actors> &bst){

    std::ifstream File(FilePath);
//added an exception function that will tell the user if the file couldn't be
//opened which will mean it did not find the file. Therefore, must imput correct file
//name or path. KVL
    if(!File.is_open()){
        std::cerr<<"Input file not found. Filepath: " <<FilePath<<std::endl;
        exit(EXIT_FAILURE);
    }

    string Line;

    //This section will get and output the each line of text for each file. KVL
    while (getline(File, Line)){

        //added this so the header is not printed. If line finds the follwing text (header)
        //then it will be skipped and will continue printing whatever is after the header.KVL
         if(Line== "Year,Award,Winner,Name,Film")
             continue;

         vector<string> Tokenize_Lines;
         tokenize(Line, ',', Tokenize_Lines);

         //Actors is the name of the BST in main.
         //actors is the name of vector template in actor_actress.h.  KVL
         actors Actors(Tokenize_Lines);

         bst.Insert(Actors);
         bst.PrintTree();

         /*This section is to check output of codes and modification
          cout<<Actors<<"\n";
         cout<< "--------------------\n";*/

    }

}

//This is to read the pictures file, formats it, and prints. KVL
void ReadPicturesCsv(std::string& PicturesFilePath, BinarySearchTree<Picture> &pictures){
    std::ifstream File(PicturesFilePath);

    if(!File.is_open()){
        std::cerr<<"Input file not found. Filepath: " <<PicturesFilePath<<std::endl;
        exit(EXIT_FAILURE);
    }

    string Line;


    while (getline(File, Line)){


        if(Line.find("Nominations, Rating, Duration, Genre1")==13)
            continue;

        vector<string> Tokenize_Lines;
        tokenize(Line, ',', Tokenize_Lines);


        Picture picture(Tokenize_Lines);

        pictures.Insert(picture);

        //cout<<picture<<endl;
        //cout<<"------------------\n";
        

    }
}


//his ActressActor is my actor
//his actress_actor  is my Actors



#ifndef DATASTRUCPROJECT_FILES_H
#define DATASTRUCPROJECT_FILES_H

#endif //DATASTRUCPROJECT_FILES_H
