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
        cout << "(4.) Return to main menu" << endl;

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
                    ShellExecute(NULL, "open",
                                 "https://store.steampowered.com/app/6020/STAR_WARS_Jedi_Knight__Jedi_Academy/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);
                } else if (lukeChoice == "n") {
                    cout << " Star Wars Knights of the Old Republic for you!" << endl;
                    ShellExecute(NULL, "open",
                                 "https://store.steampowered.com/app/32370/STAR_WARS__Knights_of_the_Old_Republic/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);
                } else {
                    cout << "Do you like Luke Skywalker [y/n] ?" << endl;
                    cin >> lukeChoice;

                }


                break;

            case 3:
                cout
                        << "Great choice, go play Star Wars Battlefront 2, the classic one from 2005 not the modern EA version!"
                        << endl;
                ShellExecute(NULL, "open",
                             "https://store.steampowered.com/app/6060/Star_Wars_Battlefront_2_Classic_2005/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);

        }


    }

    return 0;
}

int pastGames() {

    int userTimeChoice = 0;
    int altHistoryChoice = 0;
    int distantPastChoice = 0;

    while (userTimeChoice != 3) {

        cout << "How long ago are we talking?" << endl;
        cout << "(1.) The recent past ?" << endl;
        cout << "(2.) The distant past ?" << endl;
        cout << "(3.) Exit Game Selector" << endl;

        cin >> userTimeChoice;
        string coldWarChoice;
        string wildWestChoice;
        int fantasyChoice = 0;

        switch (userTimeChoice) {

            case 1:
                cout << "Do you like the Cold War [y/n] ?";
                cin >> coldWarChoice;

                std::for_each(coldWarChoice.begin(), coldWarChoice.end(), [](char &c) {
                    c = ::tolower(c);
                });

                if (coldWarChoice == "y") {
                    cout << "Go play Papers Please (2013)!" << endl;
                    ShellExecute(NULL, "open", "https://store.steampowered.com/app/239030/Papers_Please/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);
                } else if (coldWarChoice == "n") {
                    cout << "What about the wild west ?" << endl;
                    cin >> wildWestChoice;

                    std::for_each(wildWestChoice.begin(), wildWestChoice.end(), [](char &c) {
                        c = ::tolower(c);
                    });


                    if (wildWestChoice == "y") {
                        cout << "Go play Call of Juarez Bound in Blood!" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/21980/Call_of_Juarez_Bound_in_Blood/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                    } else if (wildWestChoice == "n") {
                        cout << "Let me give you some alternative history options" << endl;

                        while (altHistoryChoice != 4) {
                            cout << " (1.) Give me something during World War II" << endl;
                            cout << " (2.) An underwater civilization in the 1960's" << endl;
                            cout << " (3.) Something with a plague" << endl;
                            cout << " (4.) Exit Game Selector" << endl;

                            cin >> altHistoryChoice;

                            switch (altHistoryChoice) {

                                case 1:
                                    cout << " Go play Red Orchestra 2: Heroes of Stalingrad with Rising Storm" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/35450/Red_Orchestra_2_Heroes_of_Stalingrad_with_Rising_Storm/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);

                                case 2:
                                    cout << " Check out the Bioshock collection!" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/409710/BioShock_Remastered/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);

                                case 3:
                                    cout << "Go check out Miasmata" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/223510/Miasmata/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                            }

                        }


                    }


                } else {
                    cout << "Do you like the Cold War [y/n]  ?" << endl;
                    cin >> coldWarChoice;

                }


                break;


            case 2:

                cout << "Cool, are you interested in fantasy, historical accuracy, or science fiction ?" << endl;

                while (distantPastChoice != 4) {


                    cout << "(1.) Give me historical fantasy " << endl;
                    cout << "(2.) Give me historical accuracy" << endl;
                    cout << "(3.) Actually I want historical science fiction " << endl;
                    cout << "(4.) Exit Game Selector" << endl;

                    cin >> distantPastChoice;

                    switch (distantPastChoice) {

                        case 1:
                            cout << "How serious of a fantasy game ?" << endl;

                            while (fantasyChoice != 3) {
                                cout << "(1.) Give me something silly!" << endl;
                                cout << "(2.) Something very serious" << endl;
                                cout << "(3.) Exit Game Selector" << endl;

                                cin >> fantasyChoice;

                                switch (fantasyChoice) {

                                    case 1:

                                        cout << "Tricky Towers sounds like it would be perfect! " << endl;
                                        ShellExecute(NULL, "open",
                                                     "https://store.steampowered.com/app/437920/Tricky_Towers/",
                                                     NULL, NULL, SW_SHOWNORMAL);
                                        std::exit(0);


                                    case 2:
                                        cout << "Because you are a ?" << endl;


                                }


                            }

                        case 2:
                            cout << "Who do you want to be ?" << endl;

                        case 3:
                            cout << "Interesting, go check out any of the Assassin's Creed games! " << endl;
                            ShellExecute(NULL, "open",
                                         "https://www.ubisoft.com/en-us/game/assassins-creed/valhalla",
                                         NULL, NULL, SW_SHOWNORMAL);
                            std::exit(0);


                    }

                }


        }

    }

    return 0;
}


int presentGames() {

    string realisticGame;
    string violentChoice;
    int violentWeaponChoice;
    int userSneakChoice;
    int userGunChoice;
    string boatChoice;
    int nonViolentChoice;
    int philosophyChoice;
    string scaryGames;
    int scaryLocation;
    int zombiePeople;
    int userFightChoice;
    int userAlienChoice;

    cout << "Do you want a realistic game [y/n] ?" << endl;

    cin >> realisticGame;

    std::for_each(realisticGame.begin(), realisticGame.end(), [](char &c) {
        c = ::tolower(c);
    });


    if (realisticGame == "y") {
        cout << "Do you want to hurt people [y/n] ?" << endl;

        cin >> violentChoice;
        std::for_each(violentChoice.begin(), violentChoice.end(), [](char &c) {
            c = ::tolower(c);
        });

        if (violentChoice == "y") {
            cout << "How would you want to achieve that ?" << endl;

            while (violentWeaponChoice != 4) {

                cout << "(1.) With stealth" << endl;
                cout << "(2.) With guns a blazing of course" << endl;
                cout << "(3.) With nukes! " << endl;
                cout << "(4.) Exit Game Selector" << endl;

                cin >> violentWeaponChoice;

                switch (violentWeaponChoice) {

                    case 1:
                        cout << "What are you working with? ?";

                        while (userSneakChoice != 4) {
                            cout << "(1.) With a contract killer" << endl;
                            cout << "(2.) With a technology company " << endl;
                            cout << "(3.) With a government agency " << endl;
                            cout << "(4.) Exit Game Selector" << endl;

                            cin >> userSneakChoice;

                            switch (userSneakChoice) {

                                case 1:
                                    cout << "Go check out any of the Hitman games!" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/863550/HITMAN_2/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                                case 2:

                                    cout << "Go play Watch Dogs Legion!" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://www.ubisoft.com/en-us/game/watch-dogs/legion",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);

                                case 3:
                                    cout << "Go play Tom Clancy Ghost Recon Breakpoint" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://www.ubisoft.com/en-us/game/ghost-recon/breakpoint",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                            }

                        }

                    case 2:

                        cout << "Why are you using guns ?" << endl;

                        while (userGunChoice != 4) {

                            cout << "(1.) To fight terrorists" << endl;
                            cout << "(2.) The animals told me " << endl;
                            cout << "(3.) Cause I want to " << endl;
                            cout << "(4.) Exit Game Selector" << endl;

                            cin >> userGunChoice;

                            switch (userGunChoice) {

                                case 1:
                                    cout << "Go play Medal of Honor !" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/47790/Medal_of_Honor/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                                case 2:
                                    cout << "Play Hotline Miami right away!" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/274170/Hotline_Miami_2_Wrong_Number/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                                case 3:
                                    cout << "Any of the Just Cause games would work!" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/517630/Just_Cause_4_Reloaded/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                            }

                        }


                    case 3:

                        cout << "You need to play DEFCON then!" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/1520/DEFCON/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                }


            }

        } else if (violentChoice == "n") {
            cout << "Cool, what about destroying boats [y/n] ?" << endl;

            cin >> boatChoice;
            std::for_each(boatChoice.begin(), boatChoice.end(), [](char &c) {
                c = ::tolower(c);
            });

            if (boatChoice == "y") {

                cout << "Go play Levithan Warships!" << endl;
                ShellExecute(NULL, "open",
                             "https://www.pcgamer.com/leviathan-warships-review/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);


            } else if (boatChoice == "n") {
                cout << "What do you want to do then ?" << endl;

                while (nonViolentChoice != 5) {

                    cout << "(1.) Fast cars" << endl;
                    cout << "(2.) Hacking computers " << endl;
                    cout << "(3.) Something philosophical " << endl;
                    cout << "(4.) Manage a Prison" << endl;
                    cout << "(5.) Exit Game Selector" << endl;

                    cin >> nonViolentChoice;

                    switch (nonViolentChoice) {

                        case 1:

                            cout << "Play Burnout Paradise Remastered now!" << endl;
                            ShellExecute(NULL, "open",
                                         "https://store.steampowered.com/app/1238080/Burnout_Paradise_Remastered/",
                                         NULL, NULL, SW_SHOWNORMAL);
                            std::exit(0);


                        case 2:
                            cout << "ShenZhen I/O is a masterpiece!" << endl;
                            ShellExecute(NULL, "open",
                                         "https://store.steampowered.com/app/504210/SHENZHEN_IO/",
                                         NULL, NULL, SW_SHOWNORMAL);
                            std::exit(0);


                        case 3:
                            cout << "Philosophy about ?" << endl;

                            while (philosophyChoice != 4) {
                                cout << "(1.) Life in general" << endl;
                                cout << "(2.) About excessive consumerism " << endl;
                                cout << "(3.) About free will " << endl;
                                cout << "(4.) Exit Game Selector" << endl;

                                cin >> philosophyChoice;

                                switch (philosophyChoice) {

                                    case 1:
                                        cout << "Check out What Remains of Edith Finch!" << endl;
                                        ShellExecute(NULL, "open",
                                                     "https://store.steampowered.com/app/501300/What_Remains_of_Edith_Finch/",
                                                     NULL, NULL, SW_SHOWNORMAL);
                                        std::exit(0);

                                    case 2:
                                        cout << "Play Human Resource Machine!" << endl;
                                        ShellExecute(NULL, "open",
                                                     "https://store.steampowered.com/app/375820/Human_Resource_Machine/",
                                                     NULL, NULL, SW_SHOWNORMAL);
                                        std::exit(0);

                                    case 3:
                                        cout << "Play the Stanley Parable (2013)" << endl;
                                        ShellExecute(NULL, "open",
                                                     "https://store.steampowered.com/app/221910/The_Stanley_Parable/",
                                                     NULL, NULL, SW_SHOWNORMAL);
                                        std::exit(0);


                                }

                            }


                        case 4:
                            cout << "Prison Architect is a must!" << endl;
                            ShellExecute(NULL, "open",
                                         "https://store.steampowered.com/app/233450/Prison_Architect/",
                                         NULL, NULL, SW_SHOWNORMAL);
                            std::exit(0);


                    }

                }


            }


        }


    } else if (realisticGame == "n") {

        cout << "Do you like being scared [y/n] ?" << endl;

        cin >> scaryGames;
        std::for_each(scaryGames.begin(), scaryGames.end(), [](char &c) {
            c = ::tolower(c);
        });


        if (scaryGames == "y") {
            cout << "Where are you ?" << endl;

            while (scaryLocation != 6) {
                cout << "(1.) A world full of zombies" << endl;
                cout << "(2.) A house " << endl;
                cout << "(3.) An abandoned mine " << endl;
                cout << "(4.) The forest" << endl;
                cout << "(5.) The city" << endl;
                cout << "(6.) Exit Game Selector" << endl;

                cin >> scaryLocation;

                switch (scaryLocation) {
                    case 1:
                        cout << "Who is with you in the world ?" << endl;

                        while (zombiePeople != 4) {
                            cout << "(1.) Other Zombie survivors" << endl;
                            cout << "(2.) Some Friends " << endl;
                            cout << "(3.) Going solo " << endl;
                            cout << "(4.) Exit Game Selector" << endl;

                            cin >> zombiePeople;

                            switch (zombiePeople) {

                                case 1:
                                    cout << "Go play the Walking Dead" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/207610/The_Walking_Dead/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);

                                case 2:
                                    cout << "Go play Left 4 Dead 2" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/550/Left_4_Dead_2/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);

                                case 3:
                                    cout << "Go play Lone Survivor" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/209830/Lone_Survivor_The_Directors_Cut/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                            }

                        }

                    case 2:
                        cout << "Go play Dead by Daylight!" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/381210/Dead_by_Daylight/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                    case 3:
                        cout << "Go play Penumbra Overture" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/22180/Penumbra_Overture/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                    case 4:
                        cout << "Go play The Forest (of course)" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/242760/The_Forest/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                    case 5:
                        cout << "Go check out F.E.A.R." << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/21090/FEAR/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);


                }

            }

        } else if (scaryGames == "n") {
            cout << "Nice, who are we fighting ?" << endl;

            while (userFightChoice != 6) {
                cout << "(1.) The good guys" << endl;
                cout << "(2.) Aliens " << endl;
                cout << "(3.) I just want to have fun " << endl;
                cout << "(4.) Crime" << endl;
                cout << "(5.) Mutants" << endl;
                cout << "(6.) Exit Game Selector" << endl;

                cin >> scaryLocation;

                switch (scaryLocation) {

                    case 1:
                        cout << "Go play Evil Genius 2" << endl;
                        ShellExecute(NULL, "open",
                                     "https://evilgeniusgame.com/en",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);
                    case 2:
                        cout << "Aliens from where ?" << endl;

                        while (userAlienChoice != 4) {
                            cout << ("(1.) Space") << endl;
                            cout << ("(2.) Another dimension") << endl;
                            cout << ("(3.) The future") << endl;
                            cout << ("(4.) Exit Game Selector") << endl;

                            cin >> userAlienChoice;

                            switch (userAlienChoice) {
                                case 1:
                                    cout << "Go play Crysis remastered!" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://www.epicgames.com/store/en-US/product/crysis-remastered/home",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);
                                case 2:
                                    cout << "Go play Half-Life 2" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/220/HalfLife_2/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);

                                case 3:
                                    cout << "Go play Alien: Isolation" << endl;
                                    ShellExecute(NULL, "open",
                                                 "https://store.steampowered.com/app/214490/Alien_Isolation/",
                                                 NULL, NULL, SW_SHOWNORMAL);
                                    std::exit(0);


                            }

                        }


                    case 3:
                        cout << "Go ahead and play Saints Row IV" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/206420/Saints_Row_IV/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                    case 4:
                        cout << "Go play Batman Arkham Knight " << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/208650/Batman_Arkham_Knight/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);

                    case 5:
                        cout << "Go play Dark Sector !" << endl;
                        ShellExecute(NULL, "open",
                                     "https://store.steampowered.com/app/29900/Dark_Sector/",
                                     NULL, NULL, SW_SHOWNORMAL);
                        std::exit(0);


                }

            }


        }


    } /*else {
        cout << "Do you want a realistic game [y/n] ?" << endl;
        cin >> realisticGame;
        std::for_each(realisticGame.begin(), realisticGame.end(), [](char &c) {
            c = ::tolower(c);
        });

    } */

    return 0;

}


int timelessGames() {

    string nintendoChoice;
    int nintendoFranchiseList;
    int multiplayerGames;
    int battleRoyale;
    int multiplayerGenre;
    int partyChoice;
    int teamChoice;

    cout << "Do you like games made by Nintendo [y/n] ?" << endl;

    cin >> nintendoChoice;

    std::for_each(nintendoChoice.begin(), nintendoChoice.end(), [](char &c) {
        c = ::tolower(c);
    });

    if (nintendoChoice == "y") {
        cout << "Great, which of these interests you the most ?" << endl;

        while (nintendoFranchiseList != 5) {
            cout << "(1.) Adventure and exploration" << endl;
            cout << "(2.) Platforming and character movement options" << endl;
            cout << "(3.) Replayability and multiplayer" << endl;
            cout << "(4.) Relaxing and creating" << endl;
            cout << "(5.) Return to main menu " << endl;

            cin >> nintendoFranchiseList;

            switch (nintendoFranchiseList) {

                case 1:
                    cout << "You must play Legend of Zelda: Breath of the Wild!" << endl;

                    ShellExecute(NULL, "open",
                                 "https://www.zelda.com/breath-of-the-wild/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 2:
                    cout << "You need to play Super Mario Odyssey or Mario 64 if you have not already" << endl;

                    ShellExecute(NULL, "open",
                                 "https://www.nintendo.com/games/detail/super-mario-odyssey-switch/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 3:
                    cout << "The legendary Super Smash Bros Melee or Ultimate if you prefer" << endl;

                    ShellExecute(NULL, "open",
                                 "https://www.ssbwiki.com/Super_Smash_Bros._Melee",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 4:
                    cout << "Find your new Island life in Animal Crossing New Horizons!" << endl;
                    ShellExecute(NULL, "open",
                                 "https://www.animal-crossing.com/new-horizons/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);


                    /*
                     * switch (nintendoFranchiseList) {

                case 1:
                    cout << "You must play Legend of Zelda: Breath of the Wild!" << endl;

                    ShellExecute(NULL, "open",
                                 "https://www.zelda.com/breath-of-the-wild/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 2:
                    cout << "You need to play Super Mario Odyssey or Mario 64 if you have not already" << endl;
                     *
                     *
                     */


            }
        }


    } else if (nintendoChoice == "n") {
        cout << "What about some multiplayer games ?" << endl;

        while (multiplayerGames != 5) {
            cout << "(1.) A battle royale game?" << endl;
            cout << "(2.) A first person shooter?" << endl;
            cout << "(3.) A party game?" << endl;
            cout << "(4.) A team based game?" << endl;
            cout << "(5.) Return to main menu " << endl;

            cin >> multiplayerGames;

            switch (multiplayerGames) {

                case 1:
                    cout << "What is most important to you in a battle royale?" << endl;

                    while (battleRoyale != 4) {
                        cout << "(1.) A colorful artstyle and customization" << endl;
                        cout << "(2.) Fast paced action" << endl;
                        cout << "(3.) Fluid movement and abilities" << endl;
                        cout << "(4.) Survival and realism" << endl;
                        cout << "(5.) Exit Game Selector " << endl;

                        cin >> battleRoyale;

                        switch (battleRoyale) {
                            case 1:
                                cout << "Fortnite is the way to go!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.epicgames.com/fortnite/en-US/home",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 2:
                                cout << "Call of Duty Warzone is perfect!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.callofduty.com/warzone",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);


                            case 3:
                                cout << "You wont be disappointed with Apex Legends" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.ea.com/games/apex-legends",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);


                            case 4:
                                cout << "PUBG, the original battle royale game" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.pubg.com/en-us/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);


                        }

                    }


                case 2:
                    cout << "What style of FPS games sounds the most appealing ?" << endl;

                    while (multiplayerGenre != 5) {
                        cout << "(1.) Teamwork and hero abilities?" << endl;
                        cout << "(2.) Tight gunplay and competition?" << endl;
                        cout << "(3.) Large scale battles?" << endl;
                        cout << "(4.) Co-Op and collecting loot ?" << endl;
                        cout << "(5.) Exit Game Selector " << endl;

                        cin >> multiplayerGenre;

                        switch (multiplayerGenre) {
                            case 1:
                                cout << "Go download Overwatch from Battle.net" << endl;
                                ShellExecute(NULL, "open",
                                             "https://playoverwatch.com/en-us/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 2:
                                cout << "Play Counter Strike Global Offensive (or CS source)" << endl;
                                ShellExecute(NULL, "open",
                                             "https://store.steampowered.com/app/730/CounterStrike_Global_Offensive/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 3:
                                cout << "Go play Battlefield V or (Battlefield 1)" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.origin.com/usa/en-us/store/battlefield/battlefield-v",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 4:
                                cout << "Go play Borderlands 3!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://borderlands.com/en-US/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);


                        }

                    }


                case 3:
                    cout << "Which kind of party would you like ?" << endl;

                    while (partyChoice != 5) {
                        cout << "(1.) A board game party?" << endl;
                        cout << "(2.) A drawing party?" << endl;
                        cout << "(3.) A party with trivia?" << endl;
                        cout << "(4.) A dancing party?" << endl;
                        cout << "(5.) Exit Game Selector " << endl;

                        cin >> partyChoice;

                        switch (partyChoice) {

                            case 1:
                                cout << "Play the legendary Tabletop Simulator" << endl;
                                ShellExecute(NULL, "open",
                                             "https://store.steampowered.com/app/286160/Tabletop_Simulator/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 2:
                                cout << "Become an artist with Drawful 2" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.jackboxgames.com/drawful-two/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 3:
                                cout << "Get the Jackbox party pack and have fun!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.jackboxgames.com/party-pack/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 4:

                                cout << "Boogie down with Just Dance 2021 " << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.ubisoft.com/en-us/game/just-dance/2021",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);


                        }
                    }


                case 4:
                    cout << "What kind of team game is most interesting?" << endl;

                    while (teamChoice != 5) {
                        cout << "(1.) A game with strategy?" << endl;
                        cout << "(2.) A battle arena with five players?" << endl;
                        cout << "(3.) Teams of cars?" << endl;
                        cout << "(4.) A team of Greek gods?" << endl;
                        cout << "(5.) Return to main menu " << endl;

                        cin >> teamChoice;

                        switch (teamChoice) {

                            case 1:
                                cout << "Go play Civilization V all night!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://store.steampowered.com/app/8930/Sid_Meiers_Civilization_V/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 2:
                                cout << "The biggest eSport game in the world 'League of Legends'" << endl;
                                ShellExecute(NULL, "open",
                                             "https://na.leagueoflegends.com/en-us/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 3:
                                cout << "Cars and Soccer, yes check out Rocket League!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.rocketleague.com/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);

                            case 4:
                                cout << " Join the battleground of the gods in Smite!" << endl;
                                ShellExecute(NULL, "open",
                                             "https://www.smitegame.com/play-for-free/",
                                             NULL, NULL, SW_SHOWNORMAL);
                                std::exit(0);


                        }

                    }


            }

        }

    }

    return 0;

}

int nearFuture() {

    int nearChoice;

    cout << "Cool near future, what are we doing?" << endl;

    while (nearChoice != 4) {
        cout << "(1.) Playing with robots in a lab?" << endl;
        cout << "(2.) Surviving the apocalypse ?" << endl;
        cout << "(3.) Living in a post-apocalyptic Earth?" << endl;
        cout << "(4.) Discovering secret government projects?" << endl;
        cout << "(5.) Exit Game Selector " << endl;


        cin >> nearChoice;

        switch (nearChoice) {

            case 1:
                cout << "Go play Portal (or Portal 2)" << endl;
                ShellExecute(NULL, "open",
                             "https://store.steampowered.com/app/620/Portal_2/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);


            case 2:

                cout << "Welcome to Vegas! Fallout New Vegas!" << endl;
                ShellExecute(NULL, "open",
                             "https://store.steampowered.com/app/22380/Fallout_New_Vegas/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);

            case 3:
                cout << "Explore in Beyond Good and Evil" << endl;
                ShellExecute(NULL, "open",
                             "https://store.steampowered.com/app/15130/Beyond_Good_and_Evil/",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);


            case 4:
                cout << "Play as Snake in Metal Gear Solid 4: Guns of the Patriots!" << endl;
                ShellExecute(NULL, "open",
                             "https://metalgear.fandom.com/wiki/Metal_Gear_Solid_4:_Guns_of_the_Patriots",
                             NULL, NULL, SW_SHOWNORMAL);
                std::exit(0);

            case 5:
                std::exit(0);


        }
    }

    return 0;

}

int farFuture() {

    string farFutureChoice;
    int robotTakeover;

    cout << "Have robots taken over yet [y/n] ?" << endl;

    std::for_each(farFutureChoice.begin(), farFutureChoice.end(), [](char &c) {
        c = ::tolower(c);
    });

    cin >> farFutureChoice;

    if (farFutureChoice == "y") {
        cout << "Go check out Machinarium! " << endl;
        ShellExecute(NULL, "open",
                     "https://store.steampowered.com/app/40700/Machinarium/",
                     NULL, NULL, SW_SHOWNORMAL);
        std::exit(0);
    } else if (farFutureChoice == "n") {

        cout << "Why not?" << endl;

        while (robotTakeover != 4) {

            cout << "(1.) Galactic civil war?" << endl;
            cout << "(2.) The earth is dying?" << endl;
            cout << "(3.) We fight the robots actually?" << endl;
            cout << "(4.) Space Zombies happened?" << endl;
            cout << "(5.) Return to main menu " << endl;

            cin >> robotTakeover;

            switch (robotTakeover) {

                case 1:
                    cout << "Go check out FTL (Faster THan Light)" << endl;
                    ShellExecute(NULL, "open",
                                 "https://store.steampowered.com/app/212680/FTL_Faster_Than_Light/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 2:
                    cout << "Go play Final Fantasy VII Remake!" << endl;
                    ShellExecute(NULL, "open",
                                 "https://ffvii-remake.square-enix-games.com/en-us",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 3:
                    cout << "Duke it out in Unreal Tournament 2004" << endl;
                    ShellExecute(NULL, "open",
                                 "https://store.steampowered.com/app/13230/Unreal_Tournament_2004_Editors_Choice_Edition/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);

                case 4:
                    cout << "Time to go rip and tear on Mars in Doom: Eternal!" << endl;
                    ShellExecute(NULL, "open",
                                 "https://store.steampowered.com/app/782330/DOOM_Eternal/",
                                 NULL, NULL, SW_SHOWNORMAL);
                    std::exit(0);


            }

        }
    }

    return 0;

}

int transistor() {

    string transistorChoice;

    cout << "What about a retro inspired future [y/n] ?" << endl;

    cin >> transistorChoice;

    std::for_each(transistorChoice.begin(), transistorChoice.end(), [](char &c) {
        c = ::tolower(c);
    });

    if (transistorChoice == "y") {

        cout << "Go check out amazing Prey (2017)!" << endl;
        ShellExecute(NULL, "open",
                     "https://store.steampowered.com/app/480490/Prey/",
                     NULL, NULL, SW_SHOWNORMAL);
        std::exit(0);

    } else if (transistorChoice == "n") {

        cout << "Go explore the stars in Star Citizen!" << endl;
        ShellExecute(NULL, "open",
                     "https://robertsspaceindustries.com/star-citizen",
                     NULL, NULL, SW_SHOWNORMAL);
        std::exit(0);

    }


    return 0;
}