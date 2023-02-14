


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

/*������� ������ ��� ������ ��� ������ ����� ��� ��� ���������� ��� ��� ������� ��� �������� � ����� ��� ������ �� �������������� ��� �� ��������� ��� ������ ��� ������.
  ���� ������� ���� 8 ���������� (����� 8 setters ��� 8 getters), 2 constructors , �� ��� ����� ��������, ���� destructor ��� 8 �������� �������� */
class Player{
    string name;
    string gender;
    int age;
    string job;                                       //�� ������� ���������� ��� Player.cpp ������
    float technicalTraining;
    float exhaustion;
    float popularity;
    int wins;
public:
    Player();
    Player(string onoma, string filo, int ilikia, string epaggelma, int nikes=0);
    ~Player();
    void work();
    void eat();  // ������� ���� ���������� ��� ������� ������ ������� ��� ������
    void sleep();
    void vote();  // ������� ���� ���������� ��� ������� ������ ������� ��� ������
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
