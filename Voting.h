

/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */



#ifndef VOTING_H_INCLUDED
#define VOTING_H_INCLUDED

#include "Vote.h"
#include <vector>
#include <map>
#include "Team.h"

using namespace std;
/*������� ������ ��� ������ ��� ��������� (Voting),����� ��� ��� ���������� ��� ��� ������� ��� �������� � ����� .���� ��������� ���� 2 static ����������(��� ����� ����� vector ��� map)
,�� ������ ��������������� ��� Voting.cpp ������ ��� ��� ������.*/

class Voting{
public:
    static vector <Vote> votes;
    static map <string, int> results;
    static void votingProcess(Team &team);
};


#endif // VOTING_H_INCLUDED
