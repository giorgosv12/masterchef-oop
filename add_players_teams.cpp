


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr
     Ο τρόπος λειτουργίας της main περιγράφεται στην αναφορά */

#include "Player.h"
#include"Team.h"
using namespace std;

int pBlue=0, pRed=0, portionsBlue=14, portionsRed=14;
Team blueTeam("Blue"), redTeam("Red");

Player  addPlayer(string);
void ektiposiOmadas();
void ektiposiPaikti();

int main(){

    Player player;
    int choice1;
    string s;
    srand(time(NULL));
    do{
        cout<<endl<<"1.Pros8iki paixti se omada"<<endl;
        cout<<"2.Provoli stoixeiwn omadas"<<endl;
        cout<<"3.Provoli stoixeiwn paikti"<<endl;
        cout<<"4.Exodos"<<endl<<endl;
        cout<<"Epilogi: ";
        cin>> choice1;
        switch (choice1){
        case 1:
            cout<<"Se poia omada na einai o paiktis?. Gra3te Blue    i    Red:   "<<endl;
            cin>>s;
            player = addPlayer(s);
            if(s=="Blue" && pBlue <= 10){
                blueTeam.setPlayers(pBlue, player);
                blueTeam.setPortions(portionsBlue);
                pBlue++;
                portionsBlue+=14;
               }
            else if(s=="Red" && pRed <= 10){
                redTeam.setPlayers(pRed, player);
                redTeam.setPortions(portionsRed);
                pRed++;
                portionsRed+=14;
               }
            else
                ;
        break; //της case 1 της κθριας switch

        case 2:
            ektiposiOmadas();
        break; //της case 2 της κυρισς switch

        case 3:
            ektiposiPaikti();
        break;   // της case 3 της κύριας switch

        case 4:
            cout<<"Antio"<<endl<<endl;
        break;  // της case 4 της κύριας switch
        default:
            cout<<"La8os Epilogi"<<endl<<endl;
        break;

        }


      }while(choice1!=4); //τελειώνει η do while



     /*   Player player1("Giannis", "Male", 19, "Odontiatros", 2);
        cout<<"Player 1"<<endl;
        player1.showPlayer();
        Player player2("Dimitris", "male", 30, "Hlektrologos");
        cout<<"Player 2"<<endl;
        player2.showPlayer();
        Player player3;
        cout<<"Player 3"<<endl;
        player3.showPlayer();
        Team team1("Kokkino");
        cout<<"Team Kokkino"<<endl;
        team1.showTeam();               //δεν εμφανιζει παικτες γιατι ειναι κενοι
        Team team2("Portokali", 3);
        cout<<"Team Portokali"<<endl;
        team2.showTeam();
        Team team3("Kafe", 53, 234);
        cout<<"Team Kafe"<<endl;
        team3.showTeam();
        Team team4;
        cout<<"Team Default"<<endl;
        team4.showTeam();
        cout<<"Player 1"<<endl;
        player1.showPlayer();
        cout<<"Player 1 after work()"<<endl;
        player1.work();
        player1.showPlayer();
        cout<<"Player 1 after communicate()"<<endl;
        player1.communicate();
        player1.showPlayer();
        cout<<"Player 1 after chooseSleepOrWork()"<<endl;
        player1.chooseSleepOrWork();
        player1.showPlayer();
        cout<<"Player 1 after participateInContest"<<endl;
        player1.participateInContest();
        player1.showPlayer();                                           */

return 0;
}


Player addPlayer(string str){
    Player p;
    int inte;
    string s1;
    if(str=="Blue"){
        if(pBlue > 10){
            cout<<"H blue omada einai gemati!!"<<endl<<endl;
            return p;
        }
        cout<<"Enter Following:"<<endl;
        cout<<"Name: ";
        cin.ignore();
        getline(cin, s1);
        p.setName(s1);
        cout<<"Gender: ";
        cin>>s1;
        p.setGender(s1);
        do{
        cout<<"Age: ";
        cin>>inte;
        if(inte < 18 || inte > 60)
            cout<<"Mh apodekti ilikia!"<<endl;
        }while(inte < 18 || inte > 60);
        p.setAge(inte);
        cout<<"Job: ";
        cin.ignore();
        getline(cin, s1);
        p.setJob(s1);
        cout<<"Nikes: ";
        cin>>inte;
        p.setWins(inte);
        cout<<"Done"<<endl<<endl;
        } // tis  if
    else if(str=="Red"){
        if(pRed > 10){
            cout<<"H red omada einai gemati!!"<<endl<<endl;
            return p;
        }
        cout<<"Enter Following:"<<endl;
        cout<<"Name: ";
        cin.ignore();
        getline(cin, s1);
        p.setName(s1);
        cout<<"Gender: ";
        cin>>s1;
        p.setGender(s1);
        do{
        cout<<"Age: ";
        cin>>inte;
        if(inte < 18 || inte > 60){
            cout<<"Mh apodekti ilikia!"<<endl; }
        }while(inte < 18 || inte > 60);
        p.setAge(inte);
        cout<<"Job: ";
        cin.ignore();
        getline(cin, s1);
        p.setJob(s1);
        cout<<"Nikes: ";
        cin>>inte;
        p.setWins(inte);
        cout<<"Done"<<endl<<endl;
        } //tis else if
    else{
        cout<<"La8os epilogi"<<endl;  }
        return p;
}




void ektiposiOmadas(){
    string str;
    cout<<"Poias omadas ta stoixeia 8elete na ektiposete?"<<endl;
    cout<<"Pliktrologiste Blue    i    Red   :   ";
    cin>> str;
    if(str=="Blue"){
        blueTeam.showTeam(pBlue);  }
    else if(str=="Red"){
        redTeam.showTeam(pRed);  }
    else{
        cout<<"La8os epilogi"<<endl<<endl;  }
}



void ektiposiPaikti(){
    int choice2, pos;
    string str, onoma;
    cout<<"Se poia omada anikei o paiktis? Gra3te    Blue      i     Red   : ";
    cin>>str;
    if(str=="Blue"){
        cout<<"Euresi paikti kata:"<<endl;
        cout<<"Onoma: Patiste 1"<<endl;
        cout<<"8esi ston pinaka: Patiste 2"<<endl<<"Epilogi: ";
        cin>>choice2;
        switch(choice2){
        case 1:
            cout<<"gra3te epakribws to onoma: ";
            cin.ignore();
            getline(cin, onoma);
            for(int i=0; i< pBlue; i++){
                if(onoma == blueTeam.getPlayers(i).getName())
                    blueTeam.getPlayers(i).showPlayer();
                else
                    cout<<"Den bre8ike o paiktis "<<onoma<<endl<<endl;
            } //end for
        break;
        case 2:
            cout<<"Gra3te tin 8esi tou paikti stin omada (1-11): ";
            cin>>pos;
            if(pos < 1 || pos > 11 || pos > pBlue){
                cout<<"La8os epiologi"<<endl<<endl; }
            else{
                blueTeam.getPlayers(pos - 1).showPlayer();  }
            break;
        default:
            cout<<"La8os epilogi"<<endl<<endl;
        break;


        }//end switch

    }  //end if
    else if (str=="Red"){
        cout<<"Euresi paikti kata:"<<endl;
        cout<<"Onoma: Patiste 1"<<endl;
        cout<<"8esi ston pinaka: Patiste 2"<<endl<<"Epilogi: ";
        cin>>choice2;
        switch(choice2){
        case 1:
            cout<<"gra3te epakribws to onoma: ";
            cin.ignore();
            getline(cin, onoma);
            for(int i=0; i< pRed; i++){
                if(onoma == redTeam.getPlayers(i).getName())
                    redTeam.getPlayers(i).showPlayer();
                else
                    cout<<"Den bre8ike o paiktis "<<onoma<<endl<<endl;
            } //end for
        break;
        case 2:
            cout<<"Gra3te tin 8esi tou paikti stin omada (1-11): ";
            cin>>pos;
            if(pos < 1 || pos > 11 || pos > pRed)
                cout<<"La8os epiologi"<<endl<<endl;
            else
                redTeam.getPlayers(pos - 1).showPlayer();
            break;
        default:
            cout<<"La8os epilogi"<<endl<<endl;
        break;


        }//end switch

    } //end else if

    else{
    cout<<"Den yparxei tetoia omada"<<endl<<endl;  }

}



