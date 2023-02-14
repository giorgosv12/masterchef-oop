


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED


#include <iostream>
#include <string>
#include <ctime>
#include "FoodAward.h"
using namespace std;

/*Γίνεται δήλωση της βασικής κλάσης του διαγωνισμού(competition) που κληρονομεί τα γνωρισματά της στις παραγώμενες κλάσεις TeamCompetition,CreativityCompetition,ImmunityCompetition ,
καθώς και των μεταβλητών και των μεθόδων που περιέχει η κλάση .Καθε διαγωνισμός έχει 3 μεταβλητές (οπότε 3 setters και 3 getters), 2 constructors ,
με και χωρις ορίσματα, εναν destructor και 1 επιπλέον μεθόδο για εκτύπωση της κλάσης */

class Competition{

protected:
    int id;
    string name;
    string winner;

public:
    Competition();
    Competition(int arithmos,string onoma,string nikitis="");
    ~Competition();
    void setId(int a);
    void setName(string b);
    void setWinner(string c);
    int getId();
    string getName();
    string getWinner();
    void status();
};


#endif // COMPETITION_H_INCLUDED
