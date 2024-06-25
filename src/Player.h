#include <iostream>
#include <string>
#include <vector>
#include "snake.h"

using std::string;

class Player
{

public:
    Player() { std::cout << "--- New Player --- " << std::endl; };
    Player(string, int, string);
    ~Player(){};
    Snake newsnake();

    string GetPlayerName();
    int GetPlayerScore();
    string GetPlayerGameTime();

    void SetPlayerName();
    void SetPlayerScore();
    void SetPlayerGameTime();
    float GetHeadDistance();

private:
    string player_name;
    int player_score;
    string player_game_time;
    float player_snake_head_travel_distance;
    //vector<Player*> v_player;
};
