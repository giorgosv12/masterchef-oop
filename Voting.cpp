


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */



#include "Voting.h"
#include <cstdlib>
using namespace std;

/*Γίνεται αρχικοποίηση του static διανύσματος vector votes */
vector<Vote> Voting::votes;
/*Γίνεται αρχικοποίηση της static δυναμικής δομής map results */
map<string, int> Voting::results;

/*Ο τρόπος λειτουργίας της συνάρτησης votingProcess() θα παρουσιαστεί στην αναφορά */
 void Voting::votingProcess(Team &team){
    int random;
    int ptexniki, pdimofilia, pkourasi, psyndyasmos;

if(team.getNumberOfPlayers() != 2){
    for(int i=0; i<11; i++){
        if(team.getPlayers()[i].getAge() != 0){
           for(int j=1; j<=team.getPlayers()[i].getVotes(); j++){
                ptexniki=pdimofilia=pkourasi=psyndyasmos=-1;
                float maxTexniki, maxDimofilia, minKourasi, maxSyndyasmos;
                maxTexniki=maxDimofilia=maxSyndyasmos=-1.0;
                minKourasi=1000.0;
                for(int k=0; k<11; k++){
                    float syndyasmos=0.0;

                    if(k!=i && team.getPlayers()[k].getAge()!=0 && team.getPlayers()[k].getImmunity()==false){
                       if(team.getPlayers()[k].getTechnique()> maxTexniki){
                            //cout<<"maxTexn "<<maxTexniki<<" tech play "<<team.getPlayers()[k].getTechnique()<<" k "<<k<<endl;
                            maxTexniki=team.getPlayers()[k].getTechnique();
                            ptexniki=k;
                           // cout<<"texniki"<<k;
                       }
                       if(team.getPlayers()[k].getPopularity()> maxDimofilia){
                            maxDimofilia=team.getPlayers()[k].getPopularity();
                            pdimofilia=k;
                            //cout<<"dimofilia"<<k;
                       }
                       if(team.getPlayers()[k].getFatigue() < minKourasi){
                            minKourasi=team.getPlayers()[k].getFatigue();
                            pkourasi=k;
                            //cout<<"kourasi"<<k;
                       }
                       syndyasmos+=team.getPlayers()[k].getTechnique();
                       syndyasmos+=team.getPlayers()[k].getPopularity();
                       syndyasmos+=(100.0-team.getPlayers()[k].getFatigue());
                       if(syndyasmos>maxSyndyasmos){
                            maxSyndyasmos=syndyasmos;
                            psyndyasmos=k;
                            //cout<<"syndyasmos"<<k;
                       }

                    }//endif υπολογισμός των στατιστικών των παικτών που υπάρχουν με περιορισούς

                   // cout<<k<<endl;
                }//endfor εύρεση ποσοστών για ψήφο
                random=rand()%4;
                Vote vote;
                switch(random){
            case 0:
                vote.setVoted(team.getPlayers()[ptexniki].getName());
                vote.setReason("Megaliteri Texniki Katartisi");
                break;
            case 1:
                vote.setVoted(team.getPlayers()[pdimofilia].getName());
                vote.setReason("Megaliteri Dimofilia");
                break;
            case 2:
                vote.setVoted(team.getPlayers()[pkourasi].getName());
                vote.setReason("Ligoteri kourasi");
                break;
            case 3:
                vote.setVoted(team.getPlayers()[psyndyasmos].getName());
                vote.setReason("Megalitero Pososto katartisis, dimofilias kai mi kourasis");
                break;
            default:
                break;
                }//end switch με ποιο κριτήριο θα αποφασίσει ο παίκτης
                Voting::votes.push_back(vote);

           } //endfor για το πόσες φορές θα ψηφίσει ο κάθε παίκτης

        }// endif για το αν υπάρχει ο παίκτης

      }// endfor για το αν ψήφισαν όλοι οι παίκτες

    }//end if της ακραιας συνθήκης που έχουμε 2 παίκτες
    else{
        for(int a=0; a<11; a++){
            if(team.getPlayers()[a].getAge() != 0 && team.getPlayers()[a].getImmunity()==false){
                Vote vote(team.getPlayers()[a], "Akraia periptwsi. feygei opoios den exei Immunity");
                Voting::votes.push_back(vote);
            }
        }
    }
    vector <Vote>::iterator pv=votes.begin();
    while(pv != votes.end()){
      pv->status();
      pv++;
    }

    pv= votes.begin();
    map<string, int>::iterator pm;
    while(pv != votes.end()){
        pm= results.find(pv->getVoted());
        if(pm != results.end()){
        pm->second+=1;
        }
        else{
            results.insert(pair<string, int>(pv->getVoted(), 0));
            pm= results.find(pv->getVoted());
            pm->second+=1;
        }

        pv++;
    }//end while, μετρηθηκαν ολοι οι ψήφοι

    pm=results.begin();
    cout<<"\t\tResults:\n";
    while(pm != results.end()){
        cout<<"Name: "<<pm->first<<endl;
        cout<<"Votes: "<<pm->second<<endl<<endl;
        pm++;
    }

    int max1, max2;

    string nameMax1, nameMax2;

    max1=max2=-1;
    pm= results.begin();
    while(pm != results.end()){
        if(pm->second > max1){
            max1= pm->second;
            nameMax1=pm->first;
        }

        pm++;
    }
    pm=results.begin();

    while(pm != results.end()){
        if(pm->second > max2 && pm->first != nameMax1){
            max2= pm->second;
            nameMax2=pm->first;
        }

        pm++;
    }
    float technique1, technique2;
    int pos1, pos2;
    technique1=technique2=-1.0;
    pos1=pos2=-1;
    for (int i=0; i<11; i++){
        if(team.getPlayers()[i].getName() == nameMax1 ){
            team.getPlayers()[i].setCandidate(true);
            technique1=team.getPlayers()[i].getTechnique();
            pos1=i;
        }
         if(team.getPlayers()[i].getName() == nameMax2 ){
            team.getPlayers()[i].setCandidate(true);
            technique2=team.getPlayers()[i].getTechnique();
            pos2=i;
        }
    }
    cout<<"Candidates for leaving:\n";
    cout<<team.getPlayers()[pos1].getName()<<endl;
    cout<<team.getPlayers()[pos2].getName()<<endl<<endl;
    if(team.getPlayers()[pos2].getAge()== 0){
       cout<<team.getPlayers()[pos1].getName()<<" is leaving."<<endl<<endl;
        team.removePlayer(team.getPlayers()[pos1].getName());
    }
    else if(technique1 > technique2){
        cout<<team.getPlayers()[pos2].getName()<<" is leaving."<<endl<<endl;
        team.removePlayer(team.getPlayers()[pos2].getName());
    }
    else if(technique1 < technique2){
        cout<<team.getPlayers()[pos1].getName()<<" is leaving."<<endl<<endl;
        team.removePlayer(team.getPlayers()[pos1].getName());
    }
    else{
        int rand1= rand()%2;
        switch(rand1){
        case 0:
          cout<<team.getPlayers()[pos1].getName()<<" is leaving."<<endl<<endl;
            team.removePlayer(team.getPlayers()[pos1].getName());
            break;
        case 1:
            cout<<team.getPlayers()[pos2].getName()<<" is leaving."<<endl<<endl;
            team.removePlayer(team.getPlayers()[pos2].getName());
            break;
        default:
            break;
        }
    }
    Voting::votes.clear();  //καθαρίζεται το διάνυσμα votes
    Voting::results.clear(); // καθαρίζεται η δυναμική δομή results
    for( int i=0; i<11; i++){
        if( team.getPlayers()[i].getAge() !=0 && team.getPlayers()[i].getImmunity()==true)
            team.getPlayers()[i].setImmunity(false);
    }

}//end συνάρτηση
