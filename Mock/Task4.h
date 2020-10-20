#pragma once

void Task4(int);
int printBoard2(int);

int getRandomNumber(int max);

char board2[225]
{ '+','#','#','#','#',   '#','#','#','#','#',   '#','#','#','#','#',  '#','#','#','#','+',
'#',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ',' ',' ',' ','#',
'#',' ','#','#','#',   ' ','#','#','#','#',   ' ','#','#','#',' ',   '#','#','#',' ','#',
'#',' ',' ',' ',' ',   ' ',' ',' ','#',' ',   ' ','#',' ',' ',' ',   ' ',' ',' ',' ','#',
'#',' ','#','#','#',   '#','#',' ','#',' ',   ' ',' ',' ','#','#',   '#','#','#',' ','#',
'#',' ','#','#','#',   '#','#',' ',' ',' ',   ' ','#',' ','#','#',   '#','#','#',' ','#',
'#',' ',' ',' ',' ',   ' ',' ',' ','#',' ',   ' ','#',' ',' ',' ',   ' ',' ',' ',' ','#',
'#',' ','#','#','#',   ' ','#','#','#',' ',   '#','#','#','#',' ',   '#','#','#',' ','#',
'#',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ',' ',' ',' ','#',
'+','#','#','#','#',   '#','#','#','#','#',   '#','#','#','#','#',  '#','#','#','#','+' };


const char player2 = 'E';
const char stop = '#';
const char point = '-';

int score = 0;
const int pointworth = 5;

void Task4(int)
{



    int place = 91;
    bool over = 0;
    board2[place] = player2;

    for (int i = 0; i < 50; i++)
    {
        bool valid = 0;

        do
        {
            int here = getRandomNumber(std::size(board2));
            if (board2[here] == ' ')
            {
                board2[here] = point;
                valid = 1;
            }

        } while (valid == 0);
        
    }
    
    
    do
    {
        board2[place] = player2;

        printBoard2(0);

        char move = _getch();


        switch (move)
        {
        case 'a':
            if (board2[place - 1] != stop)
            {
                if (board2[place - 1] == point)
                {
                    score = score + pointworth;
                }
                board2[place] = ' ';
                place -= 1;
            }
            break;

        case 'd':
            if (board2[place + 1] != stop)
            {
                if (board2[place + 1] == point)
                {
                    score = score + pointworth;
                }
                board2[place] = ' ';
                place += 1;
            }
            break;

        case 'w':
            if (board2[place - 20] != stop)
            {
                if (board2[place - 20] == point)
                {
                    score = score + pointworth;
                }
                board2[place] = ' ';
                place -= 20;
            }
            break;

        case 's':
            if (board2[place + 20] != stop)
            {
                if (board2[place + 20] == point)
                {
                    score = score + pointworth;
                }
                board2[place] = ' ';
                place += 20;
            }
            break;
        }


    } while (over == 0);



}

int printBoard2(int)
{
    system("CLS");

    for (int i = 0; i < std::size(board2); i++)
    {

        if (i % 20 == 0 && i != 0)
        {
            std::cout << "\n";
        }

        std::cout << board2[i];

    }

    std::cout << "\n\nScore: " << score;

    return 0;


}