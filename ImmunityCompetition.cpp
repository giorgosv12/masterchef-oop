


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#include "ImmunityCompetition.h"

using namespace std;


/* Constructor ��� ������ �mmunityCompetition.��� ���� ������ ������,����� ����������������� �� ������� ��� constructor ����� �������� ��� ������ Competition
 ��� ��� constructor ����� �������� ��� ������ ImmunityAward ��� ������������ ��� ��������� immunityAward �� default ��������*/
ImmunityCompetition::ImmunityCompetition() {
       ;
}

/* Constructor ��� ������ ImmunityCompetition �� �������� int arithmos, string onoma, ImmunityAward immunityAward.�� ��� ����� �������� ����������������
 ��� �� �������� ��� constructor ��� ������ Competition ��� �������� ��� ��� ������� constructor.� ���� ��� ������ ��������� ���������� ���
 ��������� immunityAward.(������� ����� ��� this->immunityAward ��� ���� ��� ����������� �� ����� ������ ��� ��������� immunityAward ��� ������)*/
ImmunityCompetition::ImmunityCompetition(int arithmos, string onoma, ImmunityAward immunityAward ): Competition(arithmos, onoma){
this->immunityAward = immunityAward;
}

/* Destructor ��� ������ ImmunityCompetition*/
ImmunityCompetition::~ImmunityCompetition(){
    ;
}

/*��������� ��� ���������� ��� ������.��� �� ����� ����,��������� �� ����������� status() ��� ������� Competition ��� immunityAward. */
void ImmunityCompetition::status(){
    Competition::status();
    immunityAward.status();
}

/*� ������ ����������� ��� ���������� compete() �� ������������ ���� ������� */
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
