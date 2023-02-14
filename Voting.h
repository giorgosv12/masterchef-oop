

/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */



#ifndef VOTING_H_INCLUDED
#define VOTING_H_INCLUDED

#include "Vote.h"
#include <vector>
#include <map>
#include "Team.h"

using namespace std;
/*Γίνεται δήλωση της κλάσης της ψηφοφορία (Voting),καθώς και των μεταβλητών και των μεθόδων που περιέχει η κλάση .Καθε ψηφοφορία έχει 2 static μεταβλητές(που είναι τύπου vector και map)
,οι οποίες αρχικοποιούνται στο Voting.cpp αρχείο και μια μέθοδο.*/

class Voting{
public:
    static vector <Vote> votes;
    static map <string, int> results;
    static void votingProcess(Team &team);
};


#endif // VOTING_H_INCLUDED
