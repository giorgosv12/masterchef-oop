


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED

#include "Player.h"

using namespace std;

/* ������� ������ ��� ������ ��� ������ ����� ��� ��� ���������� ��� ��� ������� ��� ��������. ���� ����� ����
   4 ���������� (����� 4 setters ��� 4 getters), 2 constructors, �� ��� ����� ��������, ���� destructor ��� 1 �������� ������*/

class Team{
    int wins;
    string colour;
    int portions;
    Player players[11];
public:
    Team();
    Team( string xroma, int nikes=0, int sistatika=0);                          //�� ������� ���������� ��� Team.cpp ������
    ~Team();
    void setWins(int a);
    void setColour(int b);
    void setPortions(int c);
    void setPlayers(int position, Player p);
    int getWins();
    string getColour();
    int getPortions();
    Player getPlayers(int position);
    void showTeam(int num=0);
    };

#endif // TEAM_H_INCLUDED
