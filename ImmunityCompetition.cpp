


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#include "ImmunityCompetition.h"

using namespace std;


/* Constructor της κλάσης ΙmmunityCompetition.Δεν έχει κάποια εντολή,διότι πραγματοποιούνται οι εντολες του constructor χωρίς ορίσματα της κλάσης Competition
 και του constructor χωρίς ορίσματα της κλάσης ImmunityAward που αρχεικοποιεί την μεταβλητή immunityAward με default ορίσματα*/
ImmunityCompetition::ImmunityCompetition() {
       ;
}

/* Constructor της κλάσης ImmunityCompetition με ορίσματα int arithmos, string onoma, ImmunityAward immunityAward.Τα δυο πρώτα ορίσματα χρησιμοποιούνται
 και ως ορίσματα του constructor της κλάσης Competition που καλείται απο τον παρόντα constructor.Η τιμή του τρίτου ορίσματος αποδίδεται στη
 μεταβλητή immunityAward.(γίνεται χρήση του this->immunityAward που λεει οτι τοποθετούμε το τρίτο ορισμα στη μεταβλητη immunityAward της κλάσης)*/
ImmunityCompetition::ImmunityCompetition(int arithmos, string onoma, ImmunityAward immunityAward ): Competition(arithmos, onoma){
this->immunityAward = immunityAward;
}

/* Destructor της κλάσης ImmunityCompetition*/
ImmunityCompetition::~ImmunityCompetition(){
    ;
}

/*Εκτυπώνει τις μεταβλητές της κλάσης.Για να γίνει αυτό,καλούνται οι συναρτήσεις status() των κλάσεων Competition και immunityAward. */
void ImmunityCompetition::status(){
    Competition::status();
    immunityAward.status();
}

/*Ο τρόπος λειτουργίας της συνάρτησης compete() θα παρουσιαστεί στην αναφορά */
void ImmunityCompetition::compete(Team &team){

    float temp1, temp2;
    float combination, winning= -1;
    int numWinner=0;
    for(int i=0;  i<11; i++){

        temp1 = team.getPlayers()[i].getTechnique();
        temp2 = 100.0 - team.getPlayers()[i].getFatigue();
        combination= (0.75*temp1) + (0.25*temp2);
         // cout<<"Player "<<i+1<<" combination "<<combination<<"\t\t"<<team.getPlayers()[i].getName()<<endl;

        if(combination > winning){
            winning = combination;
            numWinner= i;
        }
    }//end for
    cout<<"Winner of Immunity Competition is:\n";
    team.getPlayers()[numWinner].status();
        //cout<<"Before win :"<<team.getPlayers()[numWinner].getName()<<"\t\t"<<team.getPlayers()[numWinner].getWins()<<endl;
    team.getPlayers()[numWinner].setWins(team.getPlayers()[numWinner].getWins()+1);
        //cout<<"After win :"<<team.getPlayers()[numWinner].getName()<<"\t\t"<<team.getPlayers()[numWinner].getWins()<<endl;
    ImmunityCompetition::setWinner(team.getPlayers()[numWinner].getName());

}
