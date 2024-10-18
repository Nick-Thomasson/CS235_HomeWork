#include "CharacterFamily.h"
#include "Utilities.h"

#include <iostream>
using namespace std;

// Base class -----------------------------------------------------
ICharacter::ICharacter() {}

ICharacter::ICharacter(string new_name, int new_armor, int new_hp)
{
	Setup(new_name, new_armor, new_hp);
}

ICharacter::~ICharacter() {}

void ICharacter::Setup(string new_name, int new_armor, int new_hp)
{
	this->name = new_name;
	this->armor = new_armor;
	this->hp = new_hp;
	this->hp_max = new_hp;
}

void ICharacter::TakeDamage(int attack_roll, int damage_roll)
{
	if (attack_roll < this->armor)
	{
		cout << "The attack does not pierce " << this->name << "'s armor!" << endl;
		return;
	}

	else
	{
		cout << "Hit! " << this->name << " takes " << damage_roll << " points of damage!" << endl;
		this->hp -= damage_roll;
	}
}

string ICharacter::GetName() const
{
	return this->name;
}

int ICharacter::GetHp() const
{
	return this->hp;
}

void ICharacter::Display() const
{
	cout << this->name << " (" << this->hp << "/" << this->hp_max << "), AC: " << armor << endl;
}

void ICharacter::SetOpponentIndex(int index)
{
	this->opponent_index = index;
}

int ICharacter::GetOpponentIndex() const
{
	return this->opponent_index;
}
// Base class -----------------------------------------------------


// NPC  class -----------------------------------------------------
NonPlayerCharacter::NonPlayerCharacter() {}

NonPlayerCharacter::NonPlayerCharacter(string new_name, int new_armor, int new_hp)
	: ICharacter(new_name, new_armor, new_hp)
{
}

NonPlayerCharacter::~NonPlayerCharacter() {}

void NonPlayerCharacter::DecideAction(int& attack_roll, int& damage_roll)
{
	int choice = RollDie(2);

	switch (choice)
	{
	case 1: return Action1(attack_roll, damage_roll); break;
	case 2: return Action2(attack_roll, damage_roll); break;
	}
}

void NonPlayerCharacter::Action1(int& attack_roll, int& damage_roll)
{
	cout << this->name << " attacks with a Mace!" << endl;
	attack_roll = RollDie(20) + 4;
	damage_roll = RollDie(6) + 2;
}

void NonPlayerCharacter::Action2(int& attack_roll, int& damage_roll)
{
	cout << this->name << " attacks with a Crossbow!" << endl;
	attack_roll = RollDie(20) + 3;
	damage_roll = RollDie(8) + 1;
}
// NPC  class -----------------------------------------------------


// Player  class -----------------------------------------------------
PlayerCharacter::PlayerCharacter() {}

PlayerCharacter::PlayerCharacter(string new_name, int new_armor, int new_hp)
	: ICharacter(new_name, new_armor, new_hp)
{
}

PlayerCharacter::~PlayerCharacter() {}

void PlayerCharacter::DecideAction(int& attack_roll, int& damage_roll)
{
	
	cout << "--------------------------------------------------" << endl;
	cout << "1. Attack with Rapier \t" << "2. Attack with Shortbow" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Which option do you choose? (1, or 2)" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1: return Action1(attack_roll, damage_roll);
	case 2: return Action2(attack_roll, damage_roll);
	default:
		cout << "Please choose 1 or 2." << endl;
		return DecideAction(attack_roll, damage_roll);
	}
}

void PlayerCharacter::Action1(int& attack_roll, int& damage_roll)
{
	cout << this->name << " attacks with a Rapier!" << endl;
	attack_roll = RollDie(20) + 4;
	damage_roll = RollDie(6) + 2;
}

void PlayerCharacter::Action2(int& attack_roll, int& damage_roll)
{
	cout << this->name << " attacks with a Crossbow!" << endl;
	attack_roll = RollDie(20) + 3;
	damage_roll = RollDie(8) + 1;
}
// Player  class -----------------------------------------------------

