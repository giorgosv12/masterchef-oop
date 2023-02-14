

/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */



#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED

#include<iostream>
#include<string>
#include"Player.h"
using namespace std;


    /*Γίνεται δήλωση της κλάσης της ψήφου (vote),καθώς και των μεταβλητών και των μεθόδων που περιέχει η κλάση .Καθε ψήφος έχει 2 μεταβλητές (οπότε 2 setters και 2 getters),
 2 constructors ,με και χωρις ορίσματα, εναν destructor και 1 επιπλέον μεθόδο για εκτύπωση της κλάσης */

class Vote{
    string voted;
    string reason;
public:

    /* Constructor της κλάσης Vote χωρίς ορίσματα. Δίνονται τα κενά σύνολά στις μεταβλητές voted και reason */
    Vote(){
        voted="";
        reason="";
    }

    /* Constructor της κλάσης Vote με ορίσματα. Έχει ορίσματα Player p,string reason.Στη μεταβλητή voted αποδίδεται το όνομα του player p και
    στη μεταβλητή reason της κλάσης το όρισμα reason της συνάρτησης*/
    Vote(Player p, string reason){
        voted=p.getName();
        this->reason=reason;
    }
    /* Destructor της κλάσης Vote*/
    ~Vote(){
       ;
    }
    /*Setter της μεταβλητής voted με όρισμα string.*/
    void setVoted(string voted){
        this->voted=voted;
    }
    /*Setter της μεταβλητής reason με όρισμα string.*/
    void setReason(string reason){
        this->reason=reason;
    }
    /*Getter της μεταβλητής voted.*/
    string getVoted(){
        return voted;
    }
    /*Getter της μεταβλητής reason.*/
    string getReason(){
        return reason;
    }
    /*Εκτυπώνει τις μεταβλητές της κλάσης.*/
    void status(){
        cout<<"Voted: "<<getVoted()<<endl;
        cout<<"Reason: "<<getReason()<<endl<<endl;
    }

};


#endif // VOTE_H_INCLUDED
