#ifndef _CHARACTER_FAMILY
#define _CHARACTER_FAMILY

#include <string>
using namespace std;

// Base class -----------------------------------------------------
class ICharacter
{
public:
    ICharacter();
    ICharacter( string new_name, int new_armor, int new_hp );
    virtual ~ICharacter();

    void Setup( string new_name, int new_armor, int new_hp );
    void TakeDamage( int attack_roll, int damage_roll );
    string GetName() const;
    int GetHp() const;
    void Display() const;
    void SetOpponentIndex( int index );
    int GetOpponentIndex() const;

    virtual void DecideAction( int& attack_roll, int& damage_roll ) = 0;
    virtual void Action1( int& attack_roll, int& damage_roll ) = 0;
    virtual void Action2( int& attack_roll, int& damage_roll ) = 0;

protected:
    string name;
    int hp, hp_max;
    int armor;
    int opponent_index;
};


// NPC  class -----------------------------------------------------
class NonPlayerCharacter : public ICharacter
{
public:
    NonPlayerCharacter();
    NonPlayerCharacter( string new_name, int new_armor, int new_hp );
    virtual ~NonPlayerCharacter();

    virtual void DecideAction( int& attack_roll, int& damage_roll );
    virtual void Action1( int& attack_roll, int& damage_roll );
    virtual void Action2( int& attack_roll, int& damage_roll );
};



// Player  class -----------------------------------------------------

class PlayerCharacter : public ICharacter {
public: 
    PlayerCharacter();
    PlayerCharacter(string new_name, int new_armour, int new_hp);
    virtual ~PlayerCharacter();

protected:
    virtual void DecideAction(int& attack_roll, int& damage_roll);
    virtual void Action1(int& attack_roll, int& damage_roll);
    virtual void Action2(int& attack_roll, int& damage_roll);


};

// -------------------------------------------------------------------------


#endif
