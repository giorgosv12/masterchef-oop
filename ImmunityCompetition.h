


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#ifndef IMMUNITYCOMPETITION_H_INCLUDED
#define IMMUNITYCOMPETITION_H_INCLUDED

#include "Team.h"
#include "ImmunityAward.h"
#include "Competition.h"

using namespace std;

/*Γίνεται δήλωση της παράγωγης κλάσης του διαγωνισμού ασυλίας (ImmunityCompetition) που κληρονομεί τα γνωρίσματα της βασικής κλασης Competition
καθώς και της επιπλέον μεταβλητής(ImmunityAward immunityAward) και των μεθόδων που περιέχει.
Το ImmunityCompetition δεν έχει καθόλου setters,καθώς οι υπόλοιποι setters υπάρχουν στην κλάση  Competition.Έχει επίσης 2 constructors,
  με και χωρις ορίσματα, εναν destructor και 2 επιπλέον μεθόδους (status,compete) */


class ImmunityCompetition: public Competition{
    ImmunityAward immunityAward;

public:
    ImmunityCompetition();
    ImmunityCompetition(int arithmos, string onoma, ImmunityAward immunityAward );
    ~ImmunityCompetition();
    void status();
    void compete(Team &team);

};

#endif // IMMUNITYCOMPETITION_H_INCLUDED
