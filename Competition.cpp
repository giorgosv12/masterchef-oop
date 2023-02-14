


/*   ������� ��������-�������� ���: 9471 velliosg@ece.auth.gr  -- �������� �������� ���: 9554 dmanouso@ece.auth.gr  */

#include "Competition.h"

using namespace std;

/* Constructor ��� ������ Competition ����� ��������. �������� �� default ����� 0 ��� ��������� id ��� ���� ������ ���� ���������� name ��� winner */
Competition::Competition(){
    id=0;
    name="";
    winner="";
}


/* Constructor ��� ������ Competition �� ��������. ���� �������� �� int arithmos,string onoma,string nikitis �� ����� �����������
   ���� ���������� id, name,winner ��� ������ ����������. ���� ������ ��� constructor ��� .h ������ ���� �������� ���� default �� ���� ������ ���� winnner.  */
Competition::Competition(int arithmos,string onoma,string nikitis){
    id=arithmos;
    name=onoma;
    winner=nikitis;

}

/* Destructor ��� ������ Competition*/
Competition::~Competition(){
//cout<<"Competition with id: "<<id<<" was destroyed"<<endl;
}

/*Setter ��� ���������� id �� ������ int.*/
void Competition::setId(int a){
    id=a;
}

/*Setter ��� ���������� name �� ������ string.*/
 void Competition::setName(string b){
    name=b;
}

/*Setter ��� ���������� winner �� ������ string.*/
 void Competition::setWinner(string c){
    winner=c;
}

/*Getter ��� ���������� id.*/
int Competition::getId(){
return id;
}

/*Getter ��� ���������� name.*/
string Competition::getName(){
return name;
}


/*Getter ��� ���������� winner.*/
string Competition::getWinner(){
return winner;
}

/*��������� ��� ���������� ��� ������.*/
void Competition::status(){
    cout<<"Id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Winner: "<<winner<<endl<<endl;
}
