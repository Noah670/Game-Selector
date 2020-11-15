//============================================================================
// Name        : Game Selector                                               \\
// Author      : Noah Pohl                                                    \\
// Version     : 1.0                                                           \\
// Copyright   : Copyright Noah670                                              \\
// Description : Find the next game to play                                      \\
//=================================================================================


#include <iostream>
#include <vector>
#include <limits>
#include <windows.h>
#include "shellapi.h"
// local class files
#include "GameContent.h"

using namespace std;

//============================================================================\\
// Global variables and definitions                                           \\
//============================================================================\\

int userChoice;
bool validInput;


int displayFutureGames() {

    userChoice = 0;

    while (userChoice != 5) {
        cout << "Displaying future games!" << endl;
        cout << "Do you want something set in the near or far future ?" << endl;
        cout << " (1.) Near future" << endl;
        cout << " (2.) Very far into the future" << endl;
        cout << " (3.) A retro inspired future perhaps" << endl;
        cout << " (4.) A more fantasy inspired future " << endl;
        cout << " (5.) Exit Game Selector" << endl;

        cin >> userChoice;

        if (cin.good()) {
            validInput = true;
        } else {
            // invalid input found
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid option" << endl;

        }


        switch (userChoice) {

            case 1:
                nearFuture();
                break;
            case 2:
                farFuture();
                break;
            case 3:
                transistor();
                break;
            case 4:
                gunsOrLightsabers();
                break;

        }

    }

    return 0;
}


int main() {

    userChoice = 0;

    // validate user input
    validInput = false;


    cout << "//============================================================================//" << endl;
    cout << "                            Welcome to Game Selector" << endl;
    cout << "//============================================================================//" << endl;

    while (userChoice != 5) {
        cout << "Which game setting sounds the most interesting to you?" << endl;
        cout << " (1.) The past" << endl;
        cout << " (2.) The present" << endl;
        cout << " (3.) The future " << endl;
        cout << " (4.) A timeless game" << endl;
        cout << " (5.) Exit Game Selector" << endl;
        cin >> userChoice;


        if (cin.good()) {
            validInput = true;
        } else {
            // invalid input found
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid option" << endl;

        }


        switch (userChoice) {

            case 1:
                cout << "You want a game set in the past!" << endl;
                pastGames();
                break;

            case 2:
                cout << "You want a game set in the present!" << endl;
                presentGames();
                break;
            case 3:
                cout << "You want a game set in the future" << endl;
                displayFutureGames();
                break;
            case 4:
                cout << "You want a timeless game" << endl;
                timelessGames();
                break;

        }


    }


    cout << "Thank you for using Game Selector!" << endl;
    return 0;
}
