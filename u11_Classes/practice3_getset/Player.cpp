#include "Player.h"

#include <iostream>
using namespace std;

void Player::SetName(string new_name)
{
    name = new_name;
}

void Player::SetLevel(int new_level)
{
    level = new_level;
}

string Player::GetName() const
{
    return name;
}

int Player::GetLevel() const
{
    return level;
}

void Player::LevelUp()
{
    level++;
}

void Player::Display() const
{
    cout << "Name:  " << name << endl;
    cout << "Level: " << level << endl;
}