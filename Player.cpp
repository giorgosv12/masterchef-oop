


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#include "Player.h"

using namespace std;
/*Constructor ��� ������ Player ����� ��������. �� string (name, gender, job) ��������� ����, �� int( age, wins) �������� ��� ����� 18 ��� 0 ���������
  , �� technicalTraining ������� ��� ������ ������� float �� 0 ��� 80 (�� ����� ��� ����� (max - min)*rand()/RAND_MAX + min ��� ����� ��� ������ ������ ������ ��� min ��� ��� max )
  � ������ �� �������������� ������ ����� �� �������� ����������� (��� ��� ���� ��� �� ��� ����� ���� ������ ), � ������� ������� 0 ��� � ��������� 50   */
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

/* Constructor ��� ������ Player �� ��������. ���� �������� �� string onoma, string filo, int ilikia, string epaggelma, int nikes �� ������ �����������
   ���� ���������� name, gender, age, job, wins ��� ������ ����������. ���� ������ ��� constructor ��� .h ������ ���� �������� ���� default � ���� 0 ���� �����  */
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

/* Destructor ��� ������ Player */
Player::~Player(){
    //cout<<"O paiktis "<<name<<" katastrafike "<< endl;
}

 /*  ���� �������� � ��������� work() �������� ��� � ������� ����������. � ��������� ������� ������� ��� ������� (exhaustion) ��� ������ ���� ��� ������ ������� 20 �� 40 % */
void Player::work(){
    exhaustion+= ((40.0 - 20.0 )*(double)rand()/RAND_MAX + 20.0);
}

 /*  ���� �������� � ��������� �������� ��� � ������� ��������. � ��������� ��������� ��� ������� (exhaustion) ��� ������  */
void Player::sleep(){
     exhaustion=0.0;
}

 /*  ���� �������� � ��������� communicate() �������� ��� � ������� ���� �� ����� �� ����� ������ ��� � ��������� ��� (popularity) ����������� ���� -10% ��� +10% ���������� */
void Player::communicate(){
    float num = ((0.1 + 0.1 )*(double)rand()/RAND_MAX - 0.1);
    popularity = (1.0 + num) * popularity;
}

 /*  ���� �������� � ��������� chooseSleepOrWork() �������� ��� � ������� ����� ��� ������ ������� ���� �� �������� ���� �� ���������. �� ��������� ���� �������� � ��������� sleep()
     ��� ��������� ��� ������� ��� ������ ��� �� ����������� ��������� � ������� ��� ��������� ���� 5 ������� �������*/
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

/* ���� �������� � ��������� participateInContest() �������� ��� � ������� ���������� �� ����������. � ��������� ������� ��� ������� ��� ������ ���� ��� ������
   ������� ������ ��� 10 ��� 20% ���������� */
void Player::participateInContest(){
    cout<<"O paiktis simmetixe se diagonismo kai kourastike"<<endl;
     float num=((0.2 - 0.1 )*(double)rand()/RAND_MAX + 0.1);
     exhaustion= (1.0+num)*exhaustion;
}

// Setter ��� ���������� name �� ������ ����� string
void Player::setName(string a){
     name=a;
}

// Setter ��� ���������� gender �� ������ ����� string
void Player::setGender(string b){
     gender=b;
}

// Setter ��� ���������� age �� ������ ����� �������
void Player::setAge(int c){
     age=c;
}

// Setter ��� ���������� job �� ������ ����� string
void Player::setJob(string d){
     job=d;
}
// Setter ��� ���������� technicalTraining �� ������ ����� float
void Player::setTechnicalTraining(float e){
     technicalTraining=e;
}

// Setter ��� ���������� exhaustion �� ������ ����� float
void Player::setExhaustion(float f){
     exhaustion=f;
}

// Setter ��� ���������� popularity �� ������ ����� float
void Player::setPopularity(float g){
     popularity=g;
}

// Setter ��� ���������� wins �� ������ ����� �������
void Player::setWins(int h){
     wins=h;
}

// Getter ��� ���������� name
string Player::getName(){
     return name;
}

// Getter ��� ���������� gender
string Player::getGender(){
      return gender;
}

// Getter ��� ���������� age
int Player::getAge(){
    return age;
}

// Getter ��� ���������� job
string Player::getJob(){
    return job;
}

// Getter ��� ���������� technicalTraining
float Player::getTechnicalTraining(){
     return technicalTraining;
}

// Getter ��� ���������� exhaustion
float Player::getExhaustion(){
     return exhaustion;
}

// Getter ��� ���������� popularity
float Player::getPopularity(){
     return popularity;
}

// Getter ��� ���������� wins
int Player::getWins(){
     return wins;
}

/* � ��������� showPlayer() ��������� �� �������� ��� ������ ��� ������. */
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
