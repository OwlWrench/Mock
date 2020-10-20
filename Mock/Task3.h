#pragma once


void Task3(int);
int printBoard(int);



char board[225]
{'+','#','#','#','#',   '#','#','#','#','#',   '#','#','#','#','#',  '#','#','#','#','+',
'#',' ',' ','#','#',   '#',' ',' ',' ',' ',   ' ',' ',' ',' ','#',   ' ',' ',' ',' ','#',
'#',' ',' ',' ','#',   '#',' ',' ',' ',' ',   ' ',' ',' ',' ','#',   ' ','#','#',' ','#',
'#',' ',' ',' ',' ',   '#',' ',' ',' ','#',   '#','#','#','#','#',   ' ','#',' ',' ','#',
'#',' ','#','#','#',   '#',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ','#',' ','#','#',
'#',' ',' ',' ',' ',   '#',' ',' ',' ','#',   '#','#','#','#','#',   ' ','#',' ',' ','#',
'#',' ',' ','#','#',   '#',' ',' ',' ',' ',   ' ',' ',' ',' ','#',   ' ','#','#',' ','#',
'#',' ',' ',' ',' ',   '#',' ',' ',' ',' ',   ' ',' ',' ',' ','#',   ' ','#',' ',' ','#',
'#',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ',' ',' ',' ',' ',   ' ',' ',' ',' ','#',
'+','#','#','#','#',   '#','#','#','#','#',   '#','#','#','#','#',  '#','#','#','#','+'};


const char player = 'E';
const char wall = '#';



void Task3(int)
{
    


    int place = 90;
    bool over = 0;

    do
    {
        
        board[place] = player;

        printBoard(0);

        char move = _getch();

     
        switch (move)
        {
        case 'a':
            if (board[place - 1] != wall)
            {
                board[place] = ' ';
                place -= 1;
            }
            break;

        case 'd':
            if (board[place + 1] != wall)
            {
                board[place] = ' ';
                place += 1;
            }           
            break;

        case 'w':
            if (board[place - 20] != wall)
            {
                board[place] = ' ';
                place -= 20;
            }
            break;

        case 's':
            if (board[place + 20] != wall)
            {
                board[place] = ' ';
                place += 20;
            }
            break;
        }
        

    } while (over == 0);



}

int printBoard(int)
{
    system("CLS");

    for (int i = 0; i < std::size(board); i++)
    {

        if (i % 20 == 0 && i != 0)
        {
            std::cout << "\n";
        }

        std::cout << board[i];

    }
    return 0;


}


