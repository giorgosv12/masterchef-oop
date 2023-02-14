


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#ifndef CREATIVITYCOMPETITION_H_INCLUDED
#define CREATIVITYCOMPETITION_H_INCLUDED

#include "Team.h"
#include "Competition.h"
#include "ExcursionAward.h"

using namespace std;

/*Γίνεται δήλωση της παράγωγης κλάσης του διαγωνισμού δημιουργικότητας (CreativityCompetition) που κληρονομεί τα γνωρίσματα της βασικής κλασης Competition
καθώς και των επιπλέον μεταβλητών(ExcursionAward excursionAward και string ingredients[10]) και των μεθόδων που περιέχει.
Το CreativityCompetition έχει 1 setter για τον πίνακα ingredients[10]  ,καθώς οι υπόλοιποι setters υπάρχουν στην κλάση  Competition.Έχει επίσης 2 constructors,
  με και χωρις ορίσματα, έναν destructor και 2 επιπλέον μεθόδους (status,compete) */


class CreativityCompetition: public Competition{
    ExcursionAward excursionAward;
    static string ingredients[10];

public:
    CreativityCompetition();
    CreativityCompetition(int arithmos, string onoma, ExcursionAward excursionAward);
    ~CreativityCompetition();
    void setIngredients(int position,string s);
    string* getIngredients();
    void status();
    void compete(Team &team1, Team &team2);
};


#endif // CREATIVITYCOMPETITION_H_INCLUDED
