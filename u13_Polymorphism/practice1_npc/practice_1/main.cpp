#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

#include "CharacterFamily.h"

int main()
{
    // Setup game
    srand( time( NULL ) );

    vector<ICharacter*> players;
    players.push_back( new NonPlayerCharacter( "Gorblin", 14, 11 ) );
    players.push_back( new NonPlayerCharacter( "Zeepboop", 13, 14 ) );

    // - STUDENT CODE ----------------------------------------------------------

    // -------------------------------------------------------------------------

    players[0]->SetOpponentIndex( 1 );
    players[1]->SetOpponentIndex( players.size()-1 );


    bool all_alive = true;
    int round = 1;
    int attack_roll, damage_roll;

    // Begin game loop
    while ( all_alive )
    {
        // Check if anyone is dead yet
        for ( auto& p : players )
        {
            if ( p->GetHp() <= 0 )
            {
                all_alive = false;
            }
        }

        cout << string( 80, '-' ) << endl << "ROUND " << round << endl;

        // Show player stats
        for ( auto& p : players )
        {
            p->Display();
        }

        // Take turns
        for ( size_t i = 0; i < players.size(); i++ )
        {
            cout << endl << "### " << players[i]->GetName() << "'s turn! ###" << endl;
            players[i]->DecideAction( attack_roll, damage_roll );
            int o = players[i]->GetOpponentIndex();
            players[o]->TakeDamage( attack_roll, damage_roll );
        }

        round++;
    }

    cout << endl << "THE BATTLE IS OVER!" << endl;
    cout << "RESULTS:" << endl;

    for ( auto& p : players )
    {
        p->Display();
    }

    for ( auto& p : players )
    {
        delete p;
    }

    return 0;
}
