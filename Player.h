


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

/*Γίνεται δήλωση της κλάσης του παίκτη καθώς και των μεταβλητών και των μεθόδων που περιέχει η κλάση του παίκτη θα χρησιμοποιηθεί και ως συστατικό της κλάσης της ομάδας.
  Καθε παίκτης έχει 8 μεταβλητές (οπότε 8 setters και 8 getters), 2 constructors , με και χωρις ορίσματα, εναν destructor και 8 επιπλέον μεθόδους */
class Player{
    string name;
    string gender;
    int age;
    string job;                                       //Οι μέθοδοι αναλύονται στο Player.cpp αρχείο
    float technicalTraining;
    float exhaustion;
    float popularity;
    int wins;
public:
    Player();
    Player(string onoma, string filo, int ilikia, string epaggelma, int nikes=0);
    ~Player();
    void work();
    void eat();  // υπάρχει αλλά ουσιαστικά δεν αλλάζει κάποιο ποσοστό του παίκτη
    void sleep();
    void vote();  // υπάρχει αλλά ουσιαστικά δεν αλλάζει κάποιο ποσοστό του παίκτη
    void communicate();
    void chooseSleepOrWork();
    void participateInContest();
    void setName(string a);
    void setGender(string b);
    void setAge(int c);
    void setJob(string d);
    void setTechnicalTraining(float e);
    void setExhaustion(float f);
    void setPopularity(float g);
    void setWins(int h);
    string getName();
    string getGender();
    int getAge();
    string getJob();
    float getTechnicalTraining();
    float getExhaustion();
    float getPopularity();
    int getWins();
    void showPlayer();

};


#endif // PLAYER_H_INCLUDED
