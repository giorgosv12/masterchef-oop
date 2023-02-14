


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#ifndef IMMUNITYCOMPETITION_H_INCLUDED
#define IMMUNITYCOMPETITION_H_INCLUDED

#include "Team.h"
#include "ImmunityAward.h"
#include "Competition.h"

using namespace std;

/*������� ������ ��� ��������� ������ ��� ����������� ������� (ImmunityCompetition) ��� ���������� �� ���������� ��� ������� ������ Competition
����� ��� ��� �������� ����������(ImmunityAward immunityAward) ��� ��� ������� ��� ��������.
�� ImmunityCompetition ��� ���� ������� setters,����� �� ��������� setters �������� ���� �����  Competition.���� ������ 2 constructors,
  �� ��� ����� ��������, ���� destructor ��� 2 �������� �������� (status,compete) */


class ImmunityCompetition: public Competition{
    ImmunityAward immunityAward;

public:
    ImmunityCompetition();
    ImmunityCompetition(int arithmos, string onoma, ImmunityAward immunityAward );
    ~ImmunityCompetition();
    void status();
    void compete(Team &team);

};

#endif // IMMUNITYCOMPETITION_H_INCLUDED
