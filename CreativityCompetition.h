


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#ifndef CREATIVITYCOMPETITION_H_INCLUDED
#define CREATIVITYCOMPETITION_H_INCLUDED

#include "Team.h"
#include "Competition.h"
#include "ExcursionAward.h"

using namespace std;

/*������� ������ ��� ��������� ������ ��� ����������� ���������������� (CreativityCompetition) ��� ���������� �� ���������� ��� ������� ������ Competition
����� ��� ��� �������� ����������(ExcursionAward excursionAward ��� string ingredients[10]) ��� ��� ������� ��� ��������.
�� CreativityCompetition ���� 1 setter ��� ��� ������ ingredients[10]  ,����� �� ��������� setters �������� ���� �����  Competition.���� ������ 2 constructors,
  �� ��� ����� ��������, ���� destructor ��� 2 �������� �������� (status,compete) */


class CreativityCompetition: public Competition{
    ExcursionAward excursionAward;
    static string ingredients[10];

public:
    CreativityCompetition();
    CreativityCompetition(int arithmos, string onoma, ExcursionAward excursionAward);
    ~CreativityCompetition();
    void setIngredients(int position,string s);
    string* getIngredients();
    void status();
    void compete(Team &team1, Team &team2);
};


#endif // CREATIVITYCOMPETITION_H_INCLUDED
