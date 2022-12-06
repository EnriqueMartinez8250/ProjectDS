#include <iostream>
#include <string>

//Updatin this
#ifndef Menus_H
#define Menus_H

void PrintMenu();
void Main_Menu();
void Sub_Menu1();
void Sub_Menu2();
void Sub_Menu3();

void PrintMenu()
{
    
    Main_Menu();

}


void Main_Menu()
{

    

    int choice;
    bool quit = false;

    do
    {

        std::cout<<std::endl;
        std::cout<<"== Main Menu =="<<std::endl;
        std::cout<<"1. SubMenu"<<std::endl;
        std::cout<<"2. SubMenu2"<<std::endl;
        std::cout<<"3. SubMenu3"<<std::endl;
        std::cout<<"4. Exit"<<std::endl;

        std::cout<<"Enter a choice: ";

        std::cin>>choice;

        switch (choice)
        {
        case 1:
            Sub_Menu1();
            break;
        case 2:
            Sub_Menu2();
            break;
        case 3:
            Sub_Menu3();  
            break;
        case 4:
            std::cout << "Goodbye! ";
            quit = true;
            break;
        default:
        std::cout<< "Invalid option entered!";
            break;
        }

    } while (!quit);
    


   


}

void Sub_Menu1()
{
    std::cout<<"Testing testing 1 2 3"<<std::endl;
}

void Sub_Menu2()
{
    std::cout<<"Testing testing 1 2 3 4 5 6"<<std::endl;
}

void Sub_Menu3()
{
    std::cout<<"Testing testing 1 2 3 5 6 7 8"<<std::endl;
}


#endif