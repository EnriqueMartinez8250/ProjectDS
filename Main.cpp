// Project being made by Enrique Martinez-Acevedo, Karla Vela Lopez, Nicole Montenegro

#include "Menu.h"
#include "Files.h"
#include <iostream>
#include <string>


int main() //Driver code for the program
{
// Create the BST object and place the input file name to access data
// of first file actor_actress. csv. KVL
    BinarySearchTree<actors> Actors;
    //string Actors_filepath= "../input/actor_actress.csv";
    string Actors_filepath = "input/actor_actress.csv";

    //Call the Read csv function so the data can be obtained
    // and functions for reading and modifying the document
    //can be executed. KVL
    ReadActorsCsv(Actors_filepath, Actors);
    //PrintMenu();

 
} 