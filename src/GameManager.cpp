#include "GameManager.h"
#include "DataManager.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <dirent.h>
#include <unistd.h>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#include <set>

bool GameManager::quit_game_flag = false;

bool GameManager::InitManager()
{

    std::cout << " ### WELCOME TO SNAKE GAME ###" << std::endl;
    std::cout << "   " << std::endl;
    std::cout << " 1. Start New Game" << std::endl;
    std::cout << " 2. Top 10 scores" << std::endl;
    std::cout << " 3. QUIT" << std::endl;
    std::cout << "your choice --> ";

    int key_pressed;

    while (!(std::cin >> key_pressed))
    {

        std::cin.clear();

        while (std::cin.get() != '\n')
            continue;

        // Ask user to try again:
        std::cout << "FAILED. Only number is allowed. Please enter correct number -->  ";
    }
    if ((key_pressed < 1) || (key_pressed > 3))
    {
        std::cout << "you pressed : " << key_pressed << std::endl;
        std::cout << "FAILED. Please enter correct number!"
                  << "\n\n";
        return false;
    }

    switch (key_pressed)
    {

    case 1:
    {
        return true;
    };
    break;

    case 2:
    {
        DataManager dm;
        std::map<string, int> recorded_players;
        recorded_players = dm.ReadGameHistoryMap();
        if (recorded_players.size() > 0)
        {
            dm.DisplaySortedPlayers(recorded_players);
        }
        else
        {
            std::cout << "The history for this game does nor exist ...!" << std::endl;
        }
        return false;
    };
    break;
    case 3:
    {
        std::cout << "quiting the game ... Thanks" << std::endl;
        quit_game_flag = true;
    };

        return false;
    }
}

void GameManager::ManageNewPlayer(Player *p)
{

    p->SetPlayerName();
}

void GameManager::DumpDataToFile(Player *p)
{

    std::cout << "call the function " << __FUNCTION__ << std::endl;

    std::cout << "player ::  " << p->GetPlayerName() << " :: " << p->GetPlayerScore() << " :: " << p->GetPlayerGameTime() << std::endl;
}

void GameManager::temp_print_vector_of_object_pointers(vector<Player *> v_player)
{

    int v_player_size = v_player.size();

    for (int i = 0; i < v_player_size; i++)
    {
        std::cout << "----------------------------------------------------------------" << std::endl;
        std::cout << "player vector::  " << v_player[i]->GetPlayerName() << std::endl;
    }
}
