#ifndef ProjectDS_Picture_H
#define ProjectDS_Picture_H

#include <string>
#include <vector>
#include <iostream>
#include <ostream>


struct Picture{
    std::string name;
    int year{};
    int nominations {};
    int rating{}, metacritic{};
    float duration;
    std::string genre1, genre2, release, synopsis;


    explicit Picture (std::vector<std::string>data){
        try{
                name = data[0];
                year = stoi(data[1]);
                nominations = stoi(data[2]) ? data[2] != "-" : 0;
                rating = stoi (data[3]);
                duration = stof(data[4]);
                genre1 = data[5];
                genre2 = data[6];
                release = data[7];
                metacritic = stoi(data[8]);
                synopsis = data[9];
        }
        catch (...){
            std::cerr<<"Something went wrong. keep moving...\n";
            std::cerr<<name<<std::endl;
        }
    } 
    bool operator < (const Picture&actor) const{
        return (this->name < actor.name);
    }

};


#endif