//
// Created by Noah Pohl
//

#include <iostream>
#include <string>
#include "algorithm"
#include "cctype"
#include <windows.h>
#include <vector>
#include <limits>
#include "shellapi.h"

using namespace std;


#include "GameContent.h"


int gunsOrLightsabers() {

    int userWeaponChoice = 0;

    while (userWeaponChoice != 4) {

        cout << "Awesome, do you want a world with Lightsabers or Guns?" << endl;
        cout << "(1.) Lightsabers of course" << endl;
        cout << "(2.) Guns" << endl;
        cout << "(3.) Why not both ?" << endl;
        cout << "(4.) Exit game selector" << endl;

        cin >> userWeaponChoice;
        string lukeChoice;

        switch (userWeaponChoice) {

            case 1:
                cout << " I recommend Star Wars Republic Command! " << endl;
                ShellExecute(NULL, "open", "https://store.steampowered.com/app/6000/STAR_WARS_Republic_Commando/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);
            case 2:
                cout << "Do you like Luke Skywalker [y/n] ?" << endl;
                cin >> lukeChoice;

                // convert to lowercase
                std::for_each(lukeChoice.begin(), lukeChoice.end(), [](char &c) {
                    c = ::tolower(c);
                });

                if (lukeChoice == "y") {
                    cout << "Go play Jedi Knights Academy!" << endl;
                    ShellExecute(NULL, "open", "https://store.steampowered.com/app/6020/STAR_WARS_Jedi_Knight__Jedi_Academy/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);
                } else if (lukeChoice == "n") {
                    cout << " Star Wars Knights of the Old Republic for you!" << endl;
                    ShellExecute(NULL, "open", "https://store.steampowered.com/app/32370/STAR_WARS__Knights_of_the_Old_Republic/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);
                } else {
                    cout << "Do you like Luke Skywalker [y/n] ?" << endl;
                    cin >> lukeChoice;

                }


                break;

            case 3:
                cout << "Great choice, go play Star Wars Battlefront 2, the classic one from 2005 not the modern EA version!" << endl;
                ShellExecute(NULL, "open", "https://store.steampowered.com/app/6060/Star_Wars_Battlefront_2_Classic_2005/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);

        }


    }

    return 0;
}