


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#ifndef TEAMCOMPETITION_H_INCLUDED
#define TEAMCOMPETITION_H_INCLUDED


#include <iostream>
#include <string>
#include "Round.h"
#include "Team.h"
#include "FoodAward.h"
#include "Competition.h"
using namespace std;

/*������� ������ ��� ��������� ������ ��� �������� �����������(TeamCompetition) ��� ���������� �� ���������� ��� ������� ������ Competition ����� ��� ���  �������� ����������(FoodAward foodAward ���
  Round rounds[3]) ��� ��� ������� ��� ��������.
�� TeamCompetition ���� 1 setter ��� ��� ������ TeamRounds ����� �� ��������� setters �������� ���� �����  Competition.���� ������ 2 constructors,
  �� ��� ����� ��������, ���� destructor ��� 2 �������� �������� (status,compete) */


class TeamCompetition: public Competition{

    FoodAward foodAward;
    Round rounds[3];
public:
    TeamCompetition();
    TeamCompetition(int arithmos,string onoma, FoodAward food);
    ~TeamCompetition();
    void setTeamRounds(int position, Round round);
    Round* getTeamRounds();
    void status();
    int compete(Team &team1,Team &team2);
};


#endif // TEAMCOMPETITION_H_INCLUDED
