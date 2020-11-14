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
                cout << "Cool near future, what are we doing?" << endl;
                break;
            case 2:
                cout << "Has Artificial Intelligence reached or surpassed humans?";
                break;

            case 3:
                cout << "A timeline where the transistor was not invented?" << endl;
                break;

            case 4:
                gunsOrLightsabers();
                cout << "Awesome, you want lightsabers or guns?" << endl;
                //break;


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
        cout << " (4.) The games setting doesn't matter to me" << endl;
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
                cout << "You want the past setting!" << endl;
                break;

            case 2:
                cout << "You want the present setting!" << endl;
                break;
            case 3:
                cout << "You want a future setting" << endl;
                displayFutureGames();
                break;
            case 4:
                cout << "You want any setting" << endl;
                break;

        }


    }


    cout << "Thank you for using Game Selector!" << endl;
    return 0;
}
