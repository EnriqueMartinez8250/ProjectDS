#include <string>
#include <vector>
#include <iostream>
#include "Picture.h"
#include "BST_actors.h"
#include "actor_actress.h"



using namespace std;


//R3- Choose either movie or acttress/actor
void add_movie(BinarySearchTree<Picture> & movies){
    cout<<"Entering - Add Movie"<<endl;
     string name, genre1, genre2, release, synop, Year, nominations, rating , metacritic, duration;
        vector<std::string> newPictureVec;
        cout<<"\tEnter name: ";
        cin >> name;
        cout << "\tEnter year: ";
        cin >> Year;

        newPictureVec.push_back(name);
        Picture picture_to_add(newPictureVec);
        movies.Insert(picture_to_add);
}

// R4- choose either movie or acctress
void add_acctress(BinarySearchTree<actors>& Actors){
        cout<<"Entering - Add Actress"<<endl;
        string year, awards, winner, name, film;
        vector<std::string>newActressData;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter year: ";
        cin>>year;

        newActressData.push_back(year);
        newActressData.push_back(awards);
        newActressData.push_back(winner);
        newActressData.push_back(name);
        newActressData.push_back(film);

        actors actress_to_add(newActressData);
        Actors.Insert(actress_to_add);
}

//R5 -- search picturedb, modify picture


void search_modify_picture_db(BinarySearchTree<Picture> & movies, const std::string & picture_name){
    cout<<"Enter search_modify_picture_db, movie: "<<picture_name<<endl;

    //Find function -BST

    //auto movie_to_search = movies

    //if picture is found
    //modify the rating
    // else return -movie not found message to user

}

void search_modify_actress_db(BinarySearchTree<actors> & actressdb, const std::string & name){
    cout<<"Enter search_modify_actress_db, name: "<<name<<endl;

    //Find function -BST

    //auto actress_to_search = movies

    //if actress is found
    //modify the winner field
    // else return -actor/actress not found message to user

}


//R7//R8
void search_delete_actress_db(BinarySearchTree<actors> & actressdb, const std::string & name)
{

}


//R7//R8
void search_delete_movie_db(BinarySearchTree<Picture> & movies, const std::string & picture_name)
{

}