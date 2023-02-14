


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#include "Player.h"

using namespace std;
/*Constructor της κλάσης Player χωρίς ορίσματα. Τα string (name, gender, job) αφήνονται κενά, τα int( age, wins) παίρνουν τις τιμές 18 και 0 αντίστιχα
  , το technicalTraining παίρνει ένα τυχαίο ποσοστό float πο 0 έως 80 (με χρήση του τύπου (max - min)*rand()/RAND_MAX + min που δίνει ενα τυχαίο αριθμό μεταξύ του min και του max )
  ο οποίος θα χρησιμοποιηθεί πολλές φορές σε επόμενες συναρτήσεις (και για αυτό δεν θα του γίνει παλι αναφρά ), η κούραση γίνεται 0 και η δημοφιλία 50   */
Player::Player(){
     //cout<<"Dimiourgia default Paikti"<<endl;
     name="";
     gender="";
     age=18;
     job="";
     technicalTraining=80.0*(double)rand()/RAND_MAX;
     exhaustion=0.0;
     popularity=50.0;
     wins=0;
}

/* Constructor της κλάσης Player με ορίσματα. Έχει ορίσματα τα string onoma, string filo, int ilikia, string epaggelma, int nikes οι οποιες αποδίδονται
   στις μεταβλητές name, gender, age, job, wins της κλάσης αντίστοιχα. Στην δήλωση του constructor στο .h αρχειο εχει αποδοθεί κατά default η τιμή 0 στις νίκες  */
Player::Player(string onoma, string filo, int ilikia, string epaggelma, int nikes){
     name=onoma;
    // cout<<"Dimiourgia tou Paikti "<<onoma<<endl;
     gender=filo;
     age=ilikia;
     job=epaggelma;
     technicalTraining=80.0*(double)rand()/RAND_MAX;
     exhaustion=0.0;
     popularity=50.0;
     wins=nikes;
}

/* Destructor της κλάσης Player */
Player::~Player(){
    //cout<<"O paiktis "<<name<<" katastrafike "<< endl;
}

 /*  Όταν καλείται η συνάρτηση work() σημαίνει ότι ο παίκτης εξασκείται. Η συνάρτηση αυξάνει απόλυτα την κούραση (exhaustion) του παίκτη κατά ένα τυχαίο ποσοστό 20 με 40 % */
void Player::work(){
    exhaustion+= ((40.0 - 20.0 )*(double)rand()/RAND_MAX + 20.0);
}

 /*  Όταν καλείται η συνάρτηση σημαίνει ότι ο παίκτης κοιμάται. Η συνάρτηση μηδενίζει την κούραση (exhaustion) του παίκτη  */
void Player::sleep(){
     exhaustion=0.0;
}

 /*  Όταν καλείται η συνάρτηση communicate() σημαίνει πως ο παίκτης ήρθε σε επαφή με άλλον παίκτη και η δημοφιλία του (popularity) μεταβλήθηκε κατά -10% έως +10% ποσοστιαία */
void Player::communicate(){
    float num = ((0.1 + 0.1 )*(double)rand()/RAND_MAX - 0.1);
    popularity = (1.0 + num) * popularity;
}

 /*  Όταν καλείται η συνάρτηση chooseSleepOrWork() σημαίνει πως ο παίκτης έκανε μία τυχάια επιλογή είτε να κοιμηθεί είτε να εξασκηθεί. Αν κοιμήθηκε τότε καλειται η συνάρτηση sleep()
     και μηδενιζει την κούραση του παίκτη ενώ αν εξασκείθηκε αυξάνεται η τεχνική του κατάρτηση κατά 5 μονάδες απόλυτα*/
void Player::chooseSleepOrWork(){
    int choice=rand()%2;
    if(choice==0){
     cout<<"O paiktis koimatai"<<endl;
        sleep();
    }
    else {
      cout<<"O paiktis exaskitai"<<endl;
       technicalTraining+=5.0;
    }
}

/* Όταν καλείται η συνάρτηση participateInContest() σημαίνει πως ο παίκτης συμμετείχε σε διαγωνισμό. Η συνάρτηση αυξάνει την κούραση του παίκτη κατα ένα τυχαίο
   ποσοστό μεταξύ του 10 και 20% ποσοστιαία */
void Player::participateInContest(){
    cout<<"O paiktis simmetixe se diagonismo kai kourastike"<<endl;
     float num=((0.2 - 0.1 )*(double)rand()/RAND_MAX + 0.1);
     exhaustion= (1.0+num)*exhaustion;
}

// Setter της μεταβλητής name με όρισμα τύπου string
void Player::setName(string a){
     name=a;
}

// Setter της μεταβλητής gender με όρισμα τύπου string
void Player::setGender(string b){
     gender=b;
}

// Setter της μεταβλητής age με όρισμα τύπου ακέραιο
void Player::setAge(int c){
     age=c;
}

// Setter της μεταβλητής job με όρισμα τύπου string
void Player::setJob(string d){
     job=d;
}
// Setter της μεταβλητής technicalTraining με όρισμα τύπου float
void Player::setTechnicalTraining(float e){
     technicalTraining=e;
}

// Setter της μεταβλητής exhaustion με όρισμα τύπου float
void Player::setExhaustion(float f){
     exhaustion=f;
}

// Setter της μεταβλητής popularity με όρισμα τύπου float
void Player::setPopularity(float g){
     popularity=g;
}

// Setter της μεταβλητής wins με όρισμα τύπου ακέραιο
void Player::setWins(int h){
     wins=h;
}

// Getter της μεταβλητής name
string Player::getName(){
     return name;
}

// Getter της μεταβλητής gender
string Player::getGender(){
      return gender;
}

// Getter της μεταβλητής age
int Player::getAge(){
    return age;
}

// Getter της μεταβλητής job
string Player::getJob(){
    return job;
}

// Getter της μεταβλητής technicalTraining
float Player::getTechnicalTraining(){
     return technicalTraining;
}

// Getter της μεταβλητής exhaustion
float Player::getExhaustion(){
     return exhaustion;
}

// Getter της μεταβλητής popularity
float Player::getPopularity(){
     return popularity;
}

// Getter της μεταβλητής wins
int Player::getWins(){
     return wins;
}

/* Η συνάρτηση showPlayer() εκτυπώνει τα στοιχεία της κλάσης του παίκτη. */
void Player::showPlayer(){
    cout<<"Player:"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Job: "<<job<<endl;
    cout<<"Wins: "<<wins<<endl;
    cout<<"Technical Training: "<<technicalTraining<<"%"<<endl;
    cout<<"Exhaustion: "<<exhaustion<<"%"<<endl;
    cout<<"Popularity: "<<popularity<<"%"<<endl<<endl<<endl;
}
