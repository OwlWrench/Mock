#pragma once
#include <conio.h>


void LogIn(int);
void keypadprint(int);
const char keypadbase[9]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
char keypad[9];
const char ast = '*';
int astpos = 1;

int rightcode[4]{ 4,5,2,3 };

void LogIn(int)
{

    int tries = 3;

    do
    {
        int code[4]{ 0,0,0,0 };
        int codelength = 0;

        astpos = 1;

        do
        {
            bool ok = false;

            do
            {

                for (int i = 0; i < std::size(keypad) + 1; i++)
                {
                    keypad[i] = '0' + keypadbase[i];
                }

                keypad[astpos - 1] = ast;

                keypadprint(0);

             

                    char padmove = _getch();

                    switch (padmove)
                    {
                    case 'a':
                        if (astpos - 1 > 0 && astpos - 1 != 3 && astpos - 1 != 6)
                        {
                            astpos = astpos - 1;

                            ok = true;
                        }

                        break;

                    case 'd':
                        if (astpos + 1 < 10 && astpos + 1 != 4 && astpos + 1 != 7)
                        {
                            astpos = astpos + 1;

                            ok = true;
                        }
                        break;

                    case 'w':
                        if (astpos - 3 > 0)
                        {
                            astpos = astpos - 3;

                            ok = true;
                        }

                        break;

                    case 's':
                        if (astpos + 3 < 10)
                        {
                            astpos = astpos + 3;

                            ok = true;
                        }

                        break;
                    }

                
                

            } while (ok == false);

            code[codelength] = keypadbase[astpos] - 1;

            codelength++;

        } while (codelength <= 3);



        int correct = 0;

        for (int i = 0; i < std::size(rightcode); i++)
        {
            if (rightcode[i] == code[i])
            {
                correct++;
            }
        }

        if (correct == 4)
        {
            return;
        }
        else
        {
            std::cout << "\nIncorrect\n";
            system("PAUSE");
        }

        tries--;

    } while (tries > 0);

    exit(0);

}

void keypadprint(int)
{
    system("CLS");

    for (int i = 0; i < std::size(keypad); i++)
    {

        if (i % 3 == 0 && i != 0)
        {
            std::cout << "\n";
        }

        std::cout << keypad[i];

    }



}