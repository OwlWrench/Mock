#include <iostream>
#include <conio.h>
#include "Login.h"
#include "Menu.h"
#include "Task1.h"
#include "Task3.h"
#include "Task4.h"

int getRandomNumber(int max);

int main()
{
    srand(time(nullptr));


    LogIn(0);

    int choice = menu(0);

    switch (choice)
    {
    case 1:
        Task1(0);
        break;
    case 2:
        std::cout << "Place holder for Task " << choice << std::endl;
        system("PAUSE");
        break;
    case 3:
        Task3(0);
        break;
    case 4:
        Task4(0);
        break;
        
    }
    
    system("CLS");
    std::cout << "Thats all folks";

}

int getRandomNumber(int max)
{
    int randomNumber = rand() % max + 1;
    return randomNumber;
}