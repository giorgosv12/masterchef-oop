


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#include "CreativityCompetition.h"

using namespace std;

/* Γίνεται αρχικοποίηση των τιμών του στατικού πίνακα ingredients που είναι κοινός για όλα τα αντικείμενα της κλάσης. */
string CreativityCompetition:: ingredients[10]={"patates", "ntomata", "mosxari", "kri8araki", "kimino", "piperia", "solomos", "fakes", "sokolata", "kerasi"};


/* Constructor της κλάσης CreativityCompetition.Δεν έχει κάποια εντολή,διότι πραγματοποιούνται οι εντολες του constructor χωρίς ορίσματα της κλάσης Competition
 και του constructor χωρίς ορίσματα της κλάσης ExcursionAward που αρχεικοποιεί την μεταβλητή excursionAward με default ορίσματα*/
CreativityCompetition::CreativityCompetition(){
    ;
}


/* Constructor της κλάσης CreativityCompetition με ορίσματα int arithmos, string onoma, ExcursionAward excursionAward.Τα δυο πρώτα ορίσματα χρησιμοποιούνται
 και ως ορίσματα του constructor της κλάσης Competition που καλείται απο τον παρόντα constructor.Η τιμή του τρίτου ορίσματος αποδίδεται στη
 μεταβλητή excursionAward.(γίνεται χρήση του this->excursionAward που λεει οτι τοποθετούμε το τρίτο ορισμα στη μεταβλητη excursionAward της κλάσης)*/
CreativityCompetition::CreativityCompetition(int arithmos, string onoma, ExcursionAward excursionAward): Competition(arithmos, onoma){
    this->excursionAward = excursionAward;
}


/* Destructor της κλάσης CreativityCompetition*/
CreativityCompetition::~CreativityCompetition(){
    ;
}

/*Setter της μεταβλητής ingredients[10].Δέχεται δυο ορίσματα, 1 int position,το οποίο είναι η θέση του πίνακα, όπου τοποθετείται το δεύτερο
όρισμα string s.*/
void CreativityCompetition::setIngredients(int position,string s){
    ingredients[position]=s;

}

/*Getter της μεταβλητής ingredients[10]. Επιστρέφει δείκτη στο πρώτο στοιχείο του πίνακα ingredients.*/
string* CreativityCompetition::getIngredients(){
    return ingredients;
}

/*Εκτυπώνει τις μεταβλητές της κλάσης.Για να γίνει αυτό,καλούνται οι συναρτήσεις status() των κλάσεων Competition και excursionAward.  */
void CreativityCompetition::status(){
        Competition::status();
        excursionAward.status();
}

/*Ο τρόπος λειτουργίας της συνάρτησης compete() θα παρουσιαστεί στην αναφορά */
void CreativityCompetition::compete(Team &team1, Team &team2){
    float maxTechnique= -1, technique, temp;
    int maxIndex= -1;
    int playerIndex=0;
    Player* players;
    players= new Player[22];
    for(int i=0; i<11; i++){
        players[i]=team1.getPlayers()[i];
    }
    for(int j=11; j<22; j++){
        players[j]= team2.getPlayers()[j-11];
    }
    while(playerIndex < 22){
        technique=players[playerIndex].getTechnique();
            //cout<<players[playerIndex].getName()<<"\t Technique \t"<<players[playerIndex].getTechnique()<<endl;
        if(technique > maxTechnique){
            maxTechnique= technique;
            maxIndex= playerIndex;
        }
        playerIndex++;
    }
    cout<<"Nikitis: \n";
    players[maxIndex].status();
        //cout<<players[maxIndex].getName()<<"\t Technique before: \t"<<players[maxIndex].getTechnique()<<endl;
    temp= players[maxIndex].getTechnique();
    temp += excursionAward.getTechniqueBonus();
    players[maxIndex].setTechnique(temp);
        //cout<<players[maxIndex].getName()<<"\t Technique after: \t"<<players[maxIndex].getTechnique()<<endl;
        //cout<<players[maxIndex].getName()<<"\t Popularity before: \t"<<players[maxIndex].getPopularity()<<endl;
    temp= players[maxIndex].getPopularity();
    temp += excursionAward.getPopularityPenalty();
    players[maxIndex].setPopularity(temp);
        // cout<<players[maxIndex].getName()<<"\t Popularity after: \t"<<players[maxIndex].getPopularity()<<endl;
    players[maxIndex].setWins(players[maxIndex].getWins()+1);
    CreativityCompetition::setWinner(players[maxIndex].getName());
    delete []players;
}
