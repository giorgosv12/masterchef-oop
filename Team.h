


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include "Player.h"

using namespace std;

/* Γίνεται δήλωση της κλάσης της ομάδας καθώς και των μεταβλητών και των μεθόδων που περιέχει. Καθε ομάδα έχει
   4 μεταβλητές (οπότε 4 setters και 4 getters), 2 constructors, με και χωρις ορίσματα, εναν destructor και 1 επιπλέον μέθοδο*/

class Team{
    int wins;
    string colour;
    int portions;
    Player players[11];
public:
    Team();
    Team( string xroma, int nikes=0, int sistatika=0);                          //Οι μέθοδοι αναλύονται στο Team.cpp αρχείο
    ~Team();
    void setWins(int a);
    void setColour(int b);
    void setPortions(int c);
    void setPlayers(int position, Player p);
    int getWins();
    string getColour();
    int getPortions();
    Player getPlayers(int position);
    void showTeam(int num=0);
    };

#endif // TEAM_H_INCLUDED
