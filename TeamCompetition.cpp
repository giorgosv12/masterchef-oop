


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#include "TeamCompetition.h"


using namespace std;

/* Constructor ��� ������ �eamCompetition.��� ���� ������ ������,����� ����������������� �� ������� ��� constructor ����� �������� ��� ������ Competition
 ��� ��� constructor ����� �������� ��� ������ FoodAward ��� ������������ ��� ��������� foodAward �� default ��������*/
TeamCompetition::TeamCompetition(){
  ;
}

/* Constructor ��� ������ �eamCompetition �� �������� int arithmos,string onoma, FoodAward food.�� ��� ����� �������� ����������������
 ��� �� �������� ��� constructor ��� ������ Competition ��� �������� ��� ��� ������� constructor.� ���� ��� ������ ��������� ���������� ���
 ��������� foodAward.*/

TeamCompetition::TeamCompetition(int arithmos,string onoma, FoodAward food): Competition(arithmos, onoma){
foodAward=food;

}

/* Destructor ��� ������ �eamCompetition*/
TeamCompetition::~TeamCompetition(){
  ;
}

/*Setter ��� ���������� rounds[3].������� ��� ��������, 1 int position,�� ����� ����� � ���� ��� ������ ���� ������������ �� �������
������ round.������ ������� ������� �� � ���� position ����� ��������(0-2).    */
void TeamCompetition::setTeamRounds(int position, Round round){
      if(position<0 || position>2){
        cout<<"Mh apodekti timi"<<endl;
      }
      else{
        rounds[position]= round;
      }
}

/*Getter ��� ���������� rounds[3]. ���������� ������ ��� ����� �������� ��� ������ rounds.  */
Round* TeamCompetition:: getTeamRounds(){
    return rounds;
}

/*��������� ��� ���������� ��� ������.��� �� ����� ����,��������� �� ����������� status() ��� ������� Competition ��� foodAward.
������ ������������ �� �������� ��� ����� rounds �� ��� ������ rounds[i].status().  */
void TeamCompetition::status(){
    Competition::status();
    foodAward.status();
    for(int i=0; i<3; i++)
        rounds[i].status();
}

/*� ������ ����������� ��� ���������� compete() �� ������������ ���� ������� */
int TeamCompetition:: compete(Team &team1,Team &team2){
    int wins1=0, wins2=0;
    int numOfRound;



    for( numOfRound=0 ;numOfRound< 3.0; numOfRound++){
            int mix1[11]={0,1,2,3,4,5,6,7,8,9,10};
            int swap;
        for (int i = 0; i <11; i++) {
            int j = rand() % 11;
            swap = mix1[j];
            mix1[j] = mix1[i];
            mix1[i] = swap;

        }
   // for(int k=0; k<11;k++){
           // cout<<mix1[k]<<endl;
     // }

           int mix2[11]={0,1,2,3,4,5,6,7,8,9,10};
         for (int i = 0; i <11; i++) {
            int j = rand() % 11;
            swap = mix2[j];
            mix2[j] = mix2[i];
            mix2[i] = swap;
        }
      //  for(int i=0; i<11;i++){
          //  cout<<mix2[i]<<endl;
       //}
        float technique1=0.0, technique2=0.0, exhaustion1=0.0, exhaustion2= 0.0;

        for(int numOfPlayers=0; numOfPlayers<5; numOfPlayers++){
             //  team1.getPlayers()[mix1[numOfPlayers]].status();
            team1.getPlayers()[mix1[numOfPlayers]].compete();
              // team1.getPlayers()[mix1[numOfPlayers]].status();
            technique1 += team1.getPlayers()[mix1[numOfPlayers]].getTechnique();
            exhaustion1 += team1.getPlayers()[mix1[numOfPlayers]].getFatigue();

             //  team2.getPlayers()[mix2[numOfPlayers]].status();
            team2.getPlayers()[mix2[numOfPlayers]].compete();
              // team2.getPlayers()[mix2[numOfPlayers]].status();
            technique2 += team2.getPlayers()[mix2[numOfPlayers]].getTechnique();
            exhaustion2 += team2.getPlayers()[mix2[numOfPlayers]].getFatigue();
        }//end for
        technique1= technique1 / 5;
        technique2= technique2 / 5;
        exhaustion1= exhaustion1/ 5;
        exhaustion2= exhaustion2 / 5;
        rounds[numOfRound].setId(numOfRound+1);
        rounds[numOfRound].setDuration(10800);
      /*  cout<<"Technique1 : "<<technique1<<endl;
        cout<<"Technique2 : "<<technique2<<endl;
         cout<<"Wins1 before : "<<wins1<<endl;
           cout<<"Wins2 before : "<<wins2<<endl;*/
        if(technique1 > technique2){

                rounds[numOfRound].setWinner(team1.getColor());
                wins1++;
        }
        else if(technique1 < technique2){

            rounds[numOfRound].setWinner(team2.getColor());
            wins2++;
        }
        else if(technique1 == technique2){
            if(exhaustion1 < exhaustion2){

                rounds[numOfRound].setWinner(team1.getColor());
                wins1++;
            }
            else{

                rounds[numOfRound].setWinner(team2.getColor());
                wins2++;
            }
        }
        else{
            cout<<"Something went really wrong...\n";
            }
           // cout<<"Wins1 after round : "<<numOfRound<<" team1: "<<wins1<<endl;
            //cout<<"Wins2 after round : "<<numOfRound<<" team2: "<<wins2<<endl;
         cout<<"Results of Team Competition:\n";
         rounds[numOfRound].status();
        }// end for

    if(wins1 >= wins2){
    int temp;
    team1.setWins(team1.getWins()+1);
    temp= team1.getSupplies();
    temp+= foodAward.getBonusSupplies();
    team1.setSupplies(temp);
    cout<<"Team "<<team1.getColor()<<" won."<<endl;
    TeamCompetition::setWinner(team1.getColor());
    return 1;
    }
    else{
    int temp;
    team2.setWins(team1.getWins()+1);
    temp= team2.getSupplies();
    temp+= foodAward.getBonusSupplies();
    team2.setSupplies(temp);
    cout<<"Team "<<team2.getColor()<<" won."<<endl;
    TeamCompetition::setWinner(team2.getColor());
    return 0;
    }



}

