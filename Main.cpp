// Project being made by Enrique Martinez-Acevedo, Karla Vela Lopez, Nicole Montenegro


//#include "Files.h"
#include <iostream>
#include "functions.h"



int main() //Driver code for the program
{
// Create the BST object and place the input file name to access data
// of first file actor_actress. csv. KVL
    BinarySearchTree<actors> Actors;
    BinarySearchTree<Picture>movies;
//Linux filepaths
    string Actors_filepath= "input/actor_actress.csv";
    string picture_filepath = "input/pictures.csv";
//MacOS filepaths
    //string Actors_filepath= "../input/actor_actress.csv";
    //string picture_filepath = "../input/pictures.csv";

    //Call the Read csv function so the data can be obtained
    // and functions for reading and modifying the document
    //can be executed. KVL
    //ReadActorsCsv(Actors_filepath, Actors);
    //ReadPicturesCsv(picture_filepath, movies);


    //Requirement 3 and 4 below
    int user_db_selection = -1;
    cout<<"Choose movie or actor database: \n1. Movie \n2: Actor \n";
    cout<<"Select: ";
    cin>> user_db_selection;
    

    if (user_db_selection ==1){ //This is for the Movie
        char user_moviedb_selection;
        string movie_name; 
        cout <<"\nA. Add movie\n";
        cout <<"\nB. Search and or Modify Movie\n";
        cout <<"Select an option: ";
        cin>>user_moviedb_selection;

        switch(user_moviedb_selection){
            case 'A':
                add_movie(movies);
                break;
            case 'B':
            cin.ignore();
                cout<<"Enter movie name: ";
                getline(cin,movie_name);
                search_modify_picture_db(movies, movie_name);
                break;
            case 'C':
            case 'c':
            search_delete_movie_db(movies, movie_name);
                //search /delete
                
                
            default:
                break;

        }
        


         //See Functions.h for the function &line 15
    }
    else if (user_db_selection == 2){ //This is for the Actor
        char user_actressdb_selection;
        string movie_name,name; 
        cout <<"\nA. Add Actress/actor\n";
        cout <<"\nB. Search and or Modify Actress/actor\n";
        cout <<"Select an option: ";
        cin>>user_actressdb_selection;


        switch (user_actressdb_selection){
        case 'A':
        case 'a':   
            add_acctress(Actors); //See Functions.h for the function &line 14 on main.cpp
        case 'B':
        case 'b':
            cin.ignore();
            cout<<"Enter actress/actor name: ";
            getline(cin,name);
            search_modify_actress_db(Actors,name);
        case 'C':
        case 'c':
            //search /delete
            
            cin.ignore();
            cout<<"Enter person you want to delete: ";
            getline(cin,name);
            search_delete_actress_db(Actors, name);
            break;
        default:
        break;
        }
        
    }
    else {
        cerr<<"Wrong input. Please choose either 1 or 2.\n";
    }



    //R5/R6

    

    return 0;
    //PrintMenu();

 
} 