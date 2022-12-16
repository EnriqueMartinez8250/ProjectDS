#ifndef ProjectDS_Picture_H
#define ProjectDS_Picture_H

#include <string>
#include <vector>
#include <iostream>
#include <ostream>


struct Picture{
    std::string Name;
    int Year{};
    int Nominations {};
    int Rating{}, Metacritic{};
    float Duration;
    std::string Genre1, Genre2, Release, Synopsis;


    explicit Picture (std::vector<std::string>data){
        try{
                Name = data[0];
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
            std::cerr<<Name<<std::endl;
        }
    } 
    bool operator < (const Picture&actor) const{
        return (this->Name < actor.Name);
    }

};


#endif