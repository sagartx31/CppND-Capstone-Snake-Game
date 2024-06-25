#include "Player.h"
#include <iostream>
#include <string>
#include<ctime>
#include<vector>

using std::string;
using std::vector;


Player::Player(string player_name, int player_score, string player_game_time){

    std::cout<<"--- New Player --- "<< std::endl;

    this->player_name = player_name;
    this->player_score = player_score;
    this->player_game_time = player_game_time;
}

string Player::GetPlayerName(){

    return player_name;
}

int Player::GetPlayerScore(){

    
    return player_score;
}

string Player::GetPlayerGameTime(){
    return player_game_time;
}

void Player::SetPlayerGameTime(){
    //current date/time on local machine
    time_t now = time(0);
    //convert to char
    char* dt = ctime(&now);
    player_game_time = dt;
    std::cout << "game time ::: "<< player_game_time;
    
}    

void Player::SetPlayerName(){
    
    string player_name;
    std::cout<<"Player NAME :::  ";
    std::cin >> player_name;
    this->player_name = player_name;
}

void Player::SetPlayerScore(){
    int player_score;
    std::cout<< "Player game score :::  ";
    std::cin >> player_score;
    this->player_score = player_score;

}

float Player::GetHeadDistance(){

    
}




