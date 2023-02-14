

/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */



#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED

#include<iostream>
#include<string>
#include"Player.h"
using namespace std;


    /*������� ������ ��� ������ ��� ����� (vote),����� ��� ��� ���������� ��� ��� ������� ��� �������� � ����� .���� ����� ���� 2 ���������� (����� 2 setters ��� 2 getters),
 2 constructors ,�� ��� ����� ��������, ���� destructor ��� 1 �������� ������ ��� �������� ��� ������ */

class Vote{
    string voted;
    string reason;
public:

    /* Constructor ��� ������ Vote ����� ��������. �������� �� ���� ������ ���� ���������� voted ��� reason */
    Vote(){
        voted="";
        reason="";
    }

    /* Constructor ��� ������ Vote �� ��������. ���� �������� Player p,string reason.��� ��������� voted ���������� �� ����� ��� player p ���
    ��� ��������� reason ��� ������ �� ������ reason ��� ����������*/
    Vote(Player p, string reason){
        voted=p.getName();
        this->reason=reason;
    }
    /* Destructor ��� ������ Vote*/
    ~Vote(){
       ;
    }
    /*Setter ��� ���������� voted �� ������ string.*/
    void setVoted(string voted){
        this->voted=voted;
    }
    /*Setter ��� ���������� reason �� ������ string.*/
    void setReason(string reason){
        this->reason=reason;
    }
    /*Getter ��� ���������� voted.*/
    string getVoted(){
        return voted;
    }
    /*Getter ��� ���������� reason.*/
    string getReason(){
        return reason;
    }
    /*��������� ��� ���������� ��� ������.*/
    void status(){
        cout<<"Voted: "<<getVoted()<<endl;
        cout<<"Reason: "<<getReason()<<endl<<endl;
    }

};


#endif // VOTE_H_INCLUDED
