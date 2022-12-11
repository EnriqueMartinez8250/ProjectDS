//
// Created by Karla Vela on 12/1/22.
//

#include <string>
#include <iostream>
#include <vector>
#include <utility>
//#include "Files.h"


using namespace std;

struct actors {
    int year;
    string awards, name, film;
    bool win;

    //Once we've used the tokenize fx to split our data into its
    //appropriate sections (Year,Award,Winner,Name,Film) then we can
    //insert the strings into a vector. For some of the data, casting has
    //to be done. For instance, year is an integer, NOT a string.
    //Therefore we have do cast the year string into an int.
    //We also identify what each index will be. KVL

    actors(std::vector<std::string> Data) {
        //henoks is ActressActor
        year = stoi(Data[0]);
        awards= Data[1];
        win= stoi(Data[2]);
        name= Data[3];
        film= Data[4];
    }

    //constructor. KVL
    actors (int year, string awards, string name, string film, bool win){

    }
    //This function was created to output each section with the appropriate
    //data type.  KVL
    friend std::ostream& operator << (std::ostream& out, actors& act){
        out<< "Name: " << act.name<<"\n";
        out<<"Film: "<< act.film<<"\n";
        out<<"Award: " <<act.awards<<"\n";
        out<<"Win: " <<act.win<<"\n";
        out<<"Year: "<< act.year<< "\n";

        return out;
    }

    //This function is used to sort the data by the Name
    // property. KVL
    bool operator < (const actors &actor) const{
        return (this-> name <actor.name);
    }


};
#ifndef DATASTRUCPROJECT_ACTOR_ACTRESS_H
#define DATASTRUCPROJECT_ACTOR_ACTRESS_H

#endif //DATASTRUCPROJECT_ACTOR_ACTRESS_H

