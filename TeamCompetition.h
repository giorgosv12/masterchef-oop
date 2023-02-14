


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#ifndef TEAMCOMPETITION_H_INCLUDED
#define TEAMCOMPETITION_H_INCLUDED


#include <iostream>
#include <string>
#include "Round.h"
#include "Team.h"
#include "FoodAward.h"
#include "Competition.h"
using namespace std;

/*Γίνεται δήλωση της παράγωγης κλάσης του ομαδικού διαγωνισμού(TeamCompetition) που κληρονομεί τα γνωρίσματα της βασικής κλασης Competition καθώς και των  επιπλέον μεταβλητών(FoodAward foodAward και
  Round rounds[3]) και των μεθόδων που περιέχει.
Το TeamCompetition έχει 1 setter για τον πίνακα TeamRounds καθώς οι υπόλοιποι setters υπάρχουν στην κλάση  Competition.Έχει επίσης 2 constructors,
  με και χωρις ορίσματα, εναν destructor και 2 επιπλέον μεθόδους (status,compete) */


class TeamCompetition: public Competition{

    FoodAward foodAward;
    Round rounds[3];
public:
    TeamCompetition();
    TeamCompetition(int arithmos,string onoma, FoodAward food);
    ~TeamCompetition();
    void setTeamRounds(int position, Round round);
    Round* getTeamRounds();
    void status();
    int compete(Team &team1,Team &team2);
};


#endif // TEAMCOMPETITION_H_INCLUDED
