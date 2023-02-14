


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#include "CreativityCompetition.h"

using namespace std;

/* ������� ������������ ��� ����� ��� �������� ������ ingredients ��� ����� ������ ��� ��� �� ����������� ��� ������. */
string CreativityCompetition:: ingredients[10]={"patates", "ntomata", "mosxari", "kri8araki", "kimino", "piperia", "solomos", "fakes", "sokolata", "kerasi"};


/* Constructor ��� ������ CreativityCompetition.��� ���� ������ ������,����� ����������������� �� ������� ��� constructor ����� �������� ��� ������ Competition
 ��� ��� constructor ����� �������� ��� ������ ExcursionAward ��� ������������ ��� ��������� excursionAward �� default ��������*/
CreativityCompetition::CreativityCompetition(){
    ;
}


/* Constructor ��� ������ CreativityCompetition �� �������� int arithmos, string onoma, ExcursionAward excursionAward.�� ��� ����� �������� ����������������
 ��� �� �������� ��� constructor ��� ������ Competition ��� �������� ��� ��� ������� constructor.� ���� ��� ������ ��������� ���������� ���
 ��������� excursionAward.(������� ����� ��� this->excursionAward ��� ���� ��� ����������� �� ����� ������ ��� ��������� excursionAward ��� ������)*/
CreativityCompetition::CreativityCompetition(int arithmos, string onoma, ExcursionAward excursionAward): Competition(arithmos, onoma){
    this->excursionAward = excursionAward;
}


/* Destructor ��� ������ CreativityCompetition*/
CreativityCompetition::~CreativityCompetition(){
    ;
}

/*Setter ��� ���������� ingredients[10].������� ��� ��������, 1 int position,�� ����� ����� � ���� ��� ������, ���� ������������ �� �������
������ string s.*/
void CreativityCompetition::setIngredients(int position,string s){
    ingredients[position]=s;

}

/*Getter ��� ���������� ingredients[10]. ���������� ������ ��� ����� �������� ��� ������ ingredients.*/
string* CreativityCompetition::getIngredients(){
    return ingredients;
}

/*��������� ��� ���������� ��� ������.��� �� ����� ����,��������� �� ����������� status() ��� ������� Competition ��� excursionAward.  */
void CreativityCompetition::status(){
        Competition::status();
        excursionAward.status();
}

/*� ������ ����������� ��� ���������� compete() �� ������������ ���� ������� */
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
