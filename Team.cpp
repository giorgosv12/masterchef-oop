


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#include "Team.h"

using namespace std;

/*Constructor ��� ������ Team ����� ��������. �� int (wins, portions) �������� ��� ���� 0 ��� �� string colour �������� ����. ������ �� ��� ���������� ��� ������ ��������������
  ��� 11 ������� Playewr �� default �������� ����� ��� ���������� �� �������������� �������� (� ��������� ��� ��������� ���� ������� ���� ��������� addPlayer(string) ��� main)*/
Team::Team(){
   // cout<<"Dimiourgia default omadas"<<endl;
    wins=0;
    colour="";
    portions=0;
}

/*Constructor ��� ������ Team �� ��������. � ��������� ������� �� �������� �� string xroma, int nikes, int sistatika �� �� ����� ���������� ����� ����
  ���������� colour, wins, portions ��� ������ Team ����������. ���� ������ ��� constructor ��� .h ������ ���� �������� ���� default � ���� 0 ���� nikes
  ��� ��� sistatka. �����, �� ��� ����� ������ ����, �������� ��� ���� 0. ������ �� ��� ���������� ��� ������ ����������������� 11 ������� Playewr
  (���� ��� ���� ����� �������� Constructor) �� default �������� ����� ��� ���������� �� �������������� ��������.
  (� ��������� ��� ��������� ���� ������� ���� ��������� addPlayer(string) ��� main)*/
Team::Team(string xroma, int nikes, int sistatika){
    colour=xroma;
    //cout<<"dimiourgia tis "<<colour<<" omadas"<<endl;
    wins=nikes;
    portions=sistatika;
}
//Destr
Team::~Team(){
   //cout<<"H "<<colour<<" omada katastrafike"<<endl;
}

//Setter ��� ���������� wins �� ������ ����� int
void Team::setWins(int a){
    wins=a;
}

//Setter ��� ���������� colour �� ������ ����� string
void Team::setColour(int b){
    colour=b;
}

//Setter ��� ���������� portions �� ������ ����� int
void Team::setPortions(int c){
    portions=c;
}
/*Setter ��� ������ ��� Player. ������� ��� ������ ��� ����������� p ����� Player ��� ���� ������� position. � �������� ������� ��� ���� ����
  ������ ���� �� ����������� � ������� p. �����, �� ���� ����� ��� �������, ������� set �� ��� ���� ��� ������ players[11].*/
void Team::setPlayers(int position, Player p){
    players[position]=p;
}

//Getter ��� ���������� wins
int Team::getWins(){
    return wins;
}

//Getter ��� ���������� colour
string Team::getColour(){
    return colour;
}

//Getter ��� ���������� position
int Team::getPortions(){
    return portions;
}

/*Getter ��� ������ ��� Player. ������� ��� ������ ���� ������� position. � �������� ������� ��� ���� ���� ������ players ��� ������ ��� �� ���������� */
Player Team::getPlayers(int position){
    return players[position];
}

/* � ��������� showTeam ����� �������� ��� ��������� ��� ������. (�� �������� ���� �� ������ ��� ������� ��� ���� 0 ����� ��� ����������� ������ �����.)
   ������������ ����������� �� �����, �� �����, �� ������� ��� �� ������� ��� ����� ��� ������.
   ������� ��� ������ ���� ������� num ��� ������� ���� ���� ���� � ����� (����� �� ���������� ���� ������������� ����������� ���� �� ������� ��� ������� ��� ��������
   ��� ��� ��� �� ������� ���, �� ��� ���� ����� �������� �����, �� ����� ����). ���� ���� ��������� ������� ����� ��� getter getName() ��� ������ Player ����� � ����� Team
   ��� ���� �������� ���� ���������� ��� ������ Player */
void Team::showTeam(int num){
    cout<<"Team colour: "<<colour<<endl;
    cout<<"Wins: "<<wins<<endl;
    cout<<"Portions: "<<portions<<endl;
    cout<<"Player Names: "<<endl;
    for(int i=0; i<num; i++)
        cout<<getPlayers(i).getName()<<endl;
    cout<<endl<<endl;
}
