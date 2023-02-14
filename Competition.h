


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED


#include <iostream>
#include <string>
#include <ctime>
#include "FoodAward.h"
using namespace std;

/*������� ������ ��� ������� ������ ��� �����������(competition) ��� ���������� �� ���������� ��� ���� ����������� ������� TeamCompetition,CreativityCompetition,ImmunityCompetition ,
����� ��� ��� ���������� ��� ��� ������� ��� �������� � ����� .���� ����������� ���� 3 ���������� (����� 3 setters ��� 3 getters), 2 constructors ,
�� ��� ����� ��������, ���� destructor ��� 1 �������� ������ ��� �������� ��� ������ */

class Competition{

protected:
    int id;
    string name;
    string winner;

public:
    Competition();
    Competition(int arithmos,string onoma,string nikitis="");
    ~Competition();
    void setId(int a);
    void setName(string b);
    void setWinner(string c);
    int getId();
    string getName();
    string getWinner();
    void status();
};


#endif // COMPETITION_H_INCLUDED
