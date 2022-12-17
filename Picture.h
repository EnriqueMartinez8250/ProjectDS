#ifndef ProjectDS_Picture_H
#define ProjectDS_Picture_H

#include <string>
#include <vector>
#include <iostream>
#include <ostream>


struct Picture{
    std::string name;
    int Year{};
    int Nominations = 0;
    int Rating = 0;
    int Metacritic = 0;
    float Duration;
    std::string Genre1, Genre2, Release, Synopsis;


    explicit Picture(std::vector<std::string>data){
        try{
                name = data[0];
                Year = stoi(data[1]);
                Nominations = stoi(data[2]) ? data[2] != "-" : 0;
                Rating = stoi (data[3]);
                Duration = stof(data[4]);
                Genre1 = data[5];
                Genre2 = data[6];
                Release = data[7];
                Metacritic = stoi(data[8]);
                Synopsis = data[9];
        }
        catch (...){
            std::cerr<<"Something went wrong. keep moving...\n";
            std::cerr<<name<<std::endl;
        }
    } 
    bool operator < (const Picture&actor) const{
        return (this->name < actor.name);
    }

        friend std::ostream& operator << (std::ostream& out, Picture& picture){
        out<<"Name    : " << picture.name<<"\n";
        out<<"Year    : "<< picture.Year<<"\n";
        out<<"Synopsis: " <<picture.Synopsis<<"\n";
  

        return out;
    }

};


#endif