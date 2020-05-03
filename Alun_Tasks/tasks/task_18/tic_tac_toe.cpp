#include <iostream>
#include <cstdlib>
using namespace std;

char player_1 {'X'};
char player_2 {'O'};

//turn variable for the while loop. Each full "turn" of both players will increment this by 1
int turn {0};

//player ones choices
int choice_1 {9};

//player twos choices
int choice_2 {10};

//small multidimensional array so that the players can fill up the board with their choices
char position [3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

//This code is for the "board" so that the players can have a visual representation of the tic tac toe game.
void board(){

    cout << "\n\n   |   |   " << endl;
    cout << " " << position[0][0] <<" | "<< position[0][1] <<" | " << position[0][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << position[1][0] <<" | "<< position[1][1] <<" | " << position[1][2] << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << position[2][0] <<" | "<< position[2][1] <<" | " << position[2][2] << endl;
    cout << "   |   |   " << endl;

}

void win_con() {

    //Long condition to determine that player 1 is the winner
    if ( position[0][0] == player_1 && position[0][1] == player_1 && position[0][2] == player_1 ||
         position[1][0] == player_1 && position[1][1] == player_1 && position[1][2] == player_1 ||
         position[2][0] == player_1 && position[2][1] == player_1 && position[2][2] == player_1 ||
         position[0][0] == player_1 && position[1][0] == player_1 && position[2][0] == player_1 ||
         position[0][1] == player_1 && position[1][1] == player_1 && position[2][1] == player_1 ||
         position[0][2] == player_1 && position[1][2] == player_1 && position[2][2] == player_1 ||
         position[0][1] == player_1 && position[1][1] == player_1 && position[2][1] == player_1 ||
         position[2][0] == player_1 && position[1][1] == player_1 && position[0][2] == player_1 ||
         position[0][0] == player_1 && position[1][1] == player_1 && position[2][2] == player_1) {

        cout << "\n\nPlayer 1 is victorious!!";

        cin.get();
        cin.ignore();
        exit(EXIT_SUCCESS);

        }

    //Long condition to determine that player 2 is the winner
    else if (position[0][0] == player_2 && position[0][1] == player_2 && position[0][2] == player_2 ||
            position[1][0] == player_2 && position[1][1] == player_2 && position[1][2] == player_2 ||
            position[2][0] == player_2 && position[2][1] == player_2 && position[2][2] == player_2 ||
            position[0][0] == player_2 && position[1][0] == player_2 && position[2][0] == player_2 ||
            position[0][1] == player_2 && position[1][1] == player_2 && position[2][1] == player_2 ||
            position[0][2] == player_2 && position[1][2] == player_2 && position[2][2] == player_2 ||
            position[0][1] == player_2 && position[1][1] == player_2 && position[2][1] == player_2 ||
            position[2][0] == player_2 && position[1][1] == player_2 && position[0][2] == player_2 ||
            position[0][0] == player_2 && position[1][1] == player_2 && position[2][2] == player_2) {

        cout << "\n\nPlayer 2 is victorious!!";
        cin.get();
        cin.ignore();
        exit(EXIT_SUCCESS);

        }

    //long probably inefficient else if to decide if the game is a draw
    else if ((position[0][0] == player_1 || position[0][0] == player_2) &&
            (position[0][1] == player_1 || position[0][1] == player_2) &&
            (position[0][2] == player_1 || position[0][2] == player_2) &&
            (position[1][0] == player_1 || position[1][0] == player_2) &&
            (position[1][1] == player_1 || position[1][1] == player_2) &&
            (position[1][2] == player_1 || position[1][2] == player_2) &&
            (position[2][0] == player_1 || position[2][0] == player_2) &&
            (position[2][1] == player_1 || position[2][1] == player_2) &&
            (position[2][2] == player_1 || position[2][2] == player_2) ) {

        cout << "\n\nIt is a draw!!";
        cin.get();
        cin.ignore();
        exit(EXIT_SUCCESS);

        }
}


int main() {

    /*while loop to keep the game running till the game as been finished. As of now it
    will run till all the possible turns have been taken */
    while (turn < 9) {

        board();

        cout << "It is player 1's turn please enter a square: ";
        cin >> choice_1;

        //as a number is the only accepted input a switch allows me to save time and not do an if or else for every possible variation.
        switch (choice_1) {

                case 1: position[0][0] = player_1;
                        break;
                case 2: position[0][1] = player_1;
                        break;
                case 3: position[0][2] = player_1;
                        break;
                case 4: position[1][0] = player_1;
                        break;
                case 5: position[1][1] = player_1;
                        break;
                case 6: position[1][2] = player_1;
                        break;
                case 7: position[2][0] = player_1;
                        break;
                case 8: position[2][1] = player_1;
                        break;
                case 9: position[2][2] = player_1;
                        break;
            }

        win_con();
        board();

        cout << "It is player 2's turn, please enter a square: ";
        cin >> choice_2;

        if (choice_2 == choice_1) {

            cout << "Sorry, you can not choose the same square as player one, please try again: ";
            cin >> choice_2;
        }

        switch (choice_2) {

                 case 1: position[0][0] = player_2;
                        break;
                case 2: position[0][1] = player_2;
                        break;
                case 3: position[0][2] = player_2;
                        break;
                case 4: position[1][0] = player_2;
                        break;
                case 5: position[1][1] = player_2;
                        break;
                case 6: position[1][2] = player_2;
                        break;
                case 7: position[2][0] = player_2;
                        break;
                case 8: position[2][1] = player_2;
                        break;
                case 9: position[2][2] = player_2;
                        break;
                  }

        win_con();
        ++turn;

    }

}
