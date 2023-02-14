


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#include "Team.h"

using namespace std;

/*Constructor της κλάσης Team χωρίς ορίσματα. Τα int (wins, portions) παίρνουν την τιμή 0 ενώ το string colour αφήνεται κενό. Επίσης με την δημιουργία της κλάσης δημιουργούνται
  και 11 κλάσεις Playewr με default ορίσματα οπότε δεν χρειάζεται να αρχικοποιηθούν επιπλέον (Η τοποθέτση των στοιχείων τους γίνεται στην συνάρτηση addPlayer(string) της main)*/
Team::Team(){
   // cout<<"Dimiourgia default omadas"<<endl;
    wins=0;
    colour="";
    portions=0;
}

/*Constructor της κλάσης Team με ορίσματα. Η συνάρτηση δέχεται ως ορίσματα τα string xroma, int nikes, int sistatika με τα οποία αποδίδνται τιμές στις
  μεταβλητές colour, wins, portions της κλάσης Team αντίστοιχα. Στην δήλωση του constructor στο .h αρχειο εχει αποδοθεί κατά default η τιμή 0 στις nikes
  και στα sistatka. Οπότε, αν δεν γίνει δήλωση τους, παίρνουν την τιμή 0. Επίσης με την δημιουργία της κλάσης δημιουργούνταικαι 11 κλάσεις Playewr
  (όπως και στον χωρίς ορίσματα Constructor) με default ορίσματα οπότε δεν χρειάζεται να αρχικοποιηθούν επιπλέον.
  (Η τοποθέτση των στοιχείων τους γίνεται στην συνάρτηση addPlayer(string) της main)*/
Team::Team(string xroma, int nikes, int sistatika){
    colour=xroma;
    //cout<<"dimiourgia tis "<<colour<<" omadas"<<endl;
    wins=nikes;
    portions=sistatika;
}
//Destr
Team::~Team(){
   //cout<<"H "<<colour<<" omada katastrafike"<<endl;
}

//Setter της μεταβλητης wins με όρισμα τυπου int
void Team::setWins(int a){
    wins=a;
}

//Setter της μεταβλητης colour με όρισμα τύπου string
void Team::setColour(int b){
    colour=b;
}

//Setter της μεταβλητης portions με όρισμα τύπου int
void Team::setPortions(int c){
    portions=c;
}
/*Setter του πίνακα των Player. Δέχεται σαν όρισμα ένα αντικείμενο p τύπου Player και έναν ακέραιο position. Ο ακέραιος δείχνει την θέση στον
  πίνακα όπου θα τοποθετηθεί ο παίκτης p. Οπότε, σε κάθε κλήση της μεθόδου, γίνεται set σε μία θεση του πίνακα players[11].*/
void Team::setPlayers(int position, Player p){
    players[position]=p;
}

//Getter της μεταβλητης wins
int Team::getWins(){
    return wins;
}

//Getter της μεταβλητης colour
string Team::getColour(){
    return colour;
}

//Getter της μεταβλητης position
int Team::getPortions(){
    return portions;
}

/*Getter του πίνακα των Player. Δέχεται σαν όρισμα έναν ακέραιο position. Ο ακέραιος δείχνει την θέση στον πίνακα players του παίκτη που θα επιστραφεί */
Player Team::getPlayers(int position){
    return players[position];
}

/* Η συναρτηση showTeam κάνει εκτύπωση των στοιχείων της ομάδας. (Αν αφήσουμε κενό το όρισμα της παίρνει την τιμή 0 οπότε δεν εκτυπώνεται κανένα όνομα.)
   Συγκεκριμένα εκτυπώνεται το χρώμα, οι νίκες, οι μερίδες και τα ονόματα των μελών της ομάδας.
   Δέχεται σαν όρισμα έναν ακέραιο num που δείχνει πόσα μέλη έχει η ομάδα (οπότε θα εκτυπωθούν μέσω επαναληπτικής διαδικασίας μόνο τα ονόματα των παικτων που υπάρχουν
   και όχι όλα τα ονόματα που, αν δεν τους έχουν αποδοθεί τιμες, θα είναι κενά). Μέσα στην συνάρτηση γίνεται χρήση του getter getName() της κλάσης Player καθώς η κλάση Team
   δεν έχει πρόσβαση στις μεταβλητές της κλάσης Player */
void Team::showTeam(int num){
    cout<<"Team colour: "<<colour<<endl;
    cout<<"Wins: "<<wins<<endl;
    cout<<"Portions: "<<portions<<endl;
    cout<<"Player Names: "<<endl;
    for(int i=0; i<num; i++)
        cout<<getPlayers(i).getName()<<endl;
    cout<<endl<<endl;
}
