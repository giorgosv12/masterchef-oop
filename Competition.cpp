


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#include "Competition.h"

using namespace std;

/* Constructor της κλάσης Competition χωρίς ορίσματα. Δίνονται οι default τιμές 0 στη μεταβλητή id και κενό σύνολο στις μεταβλητές name και winner */
Competition::Competition(){
    id=0;
    name="";
    winner="";
}


/* Constructor της κλάσης Competition με ορίσματα. Έχει ορίσματα τα int arithmos,string onoma,string nikitis τα οποια αποδίδονται
   στις μεταβλητές id, name,winner της κλάσης αντίστοιχα. Στην δήλωση του constructor στο .h αρχειο εχει αποδοθεί κατά default το κενό σύνολο στον winnner.  */
Competition::Competition(int arithmos,string onoma,string nikitis){
    id=arithmos;
    name=onoma;
    winner=nikitis;

}

/* Destructor της κλάσης Competition*/
Competition::~Competition(){
//cout<<"Competition with id: "<<id<<" was destroyed"<<endl;
}

/*Setter της μεταβλητής id με όρισμα int.*/
void Competition::setId(int a){
    id=a;
}

/*Setter της μεταβλητής name με όρισμα string.*/
 void Competition::setName(string b){
    name=b;
}

/*Setter της μεταβλητής winner με όρισμα string.*/
 void Competition::setWinner(string c){
    winner=c;
}

/*Getter της μεταβλητής id.*/
int Competition::getId(){
return id;
}

/*Getter της μεταβλητής name.*/
string Competition::getName(){
return name;
}


/*Getter της μεταβλητής winner.*/
string Competition::getWinner(){
return winner;
}

/*Εκτυπώνει τις μεταβλητές της κλάσης.*/
void Competition::status(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Winner: "<<winner<<endl<<endl;
}
