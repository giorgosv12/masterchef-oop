


/*   Βέλλιος Γεώργιος-Σεραφείμ ΑΕΜ: 9471 velliosg@ece.auth.gr  -- Μανούσος Διαγόρας ΑΕΜ: 9554 dmanouso@ece.auth.gr  */

#include "Team.h"
#include "ImmunityAward.h"
#include "ExcursionAward.h"
#include "FoodAward.h"
#include "TeamCompetition.h"
#include "ImmunityCompetition.h"
#include "CreativityCompetition.h"
#include <ctime>
#include <cstdlib>

using namespace std;

// Index 0 = Red Team, Index 1 = Blue Team
Team teams[2] = { Team("Red"), Team("Blue")};
int competitionId = 0;
int xamenos=0;
void menu();
void normalDay();
void teamCompetitionDay();
void immunityCompetitionDay();
void creativityCompetitionDay();

int main()
{
    srand(time(NULL));
    menu();

    return 0;
}

void menu()
{
    int choice = -1;

    while(choice != 0)
    {
        cout << endl << "1.Normal Day." << endl;
        cout << "2.Team Competition Day." << endl;
        cout << "3.Immunity Competition Day." << endl;
        cout << "4.Creativity Competition Day." << endl;
        cout << "0.Quit" << endl;

        cin >> choice;

        switch(choice)
        {

        case 1:
            normalDay();
            break;
        case 2:
            teamCompetitionDay();
            break;
        case 3:
            immunityCompetitionDay();
            break;
        case 4:
            creativityCompetitionDay();
            break;
        case 0:
            break;
        default:
            cout << "Incorrect Input. Choose between 1 and 3. Press 0 to quit." << endl;

        }
    }
}

void normalDay()
{

    cout << endl << "This is a normal day in the Master Chef Game." << endl << endl;
    cout<<"Morning\n";
    teams[0].teamWorks();
    teams[1].teamWorks();
    teams[0].teamEats();
    teams[1].teamEats();
    cout<<"Night\n";
    teams[0].teamEats();
    teams[1].teamEats();
    teams[0].teamSocializes();
    teams[1].teamSocializes();
    teams[0].teamSleeps();
    teams[1].teamSleeps();

}

void teamCompetitionDay()
{   cout << endl << "This is a Team Competition day in the Master Chef Game." << endl << endl;

    cout<<"Morning\n";
    teams[0].teamWorks();
    teams[1].teamWorks();
    teams[0].teamEats();
    teams[1].teamEats();

    cout<<"Noon\n";
    FoodAward *vraveio;
    vraveio= new FoodAward("FagitoVra", false);

    TeamCompetition *diagonismos;
    diagonismos= new TeamCompetition(competitionId, "TeamComp" , *vraveio);

    xamenos = diagonismos->compete(teams[0], teams[1]);
    //cout<<"TeamCompetition status():\n";
   // diagonismos->status();

    cout<<"Night\n";
    teams[0].teamEats();
    teams[1].teamEats();
    teams[0].teamSocializes();
    teams[1].teamSocializes();
    teams[0].teamSleeps();
    teams[1].teamSleeps();

    delete vraveio;
    delete diagonismos;
    competitionId++;

}

void immunityCompetitionDay()
{

    cout << endl << "This is a Immunity Competition day in the Master Chef Game." << endl << endl;

    cout<<"Morning\n";
    teams[0].teamWorks();
    teams[1].teamWorks();
    teams[0].teamEats();
    teams[1].teamEats();

    cout<<"Noun\n";
    ImmunityAward *vraveio;
    vraveio = new ImmunityAward("Asilias", true);

    ImmunityCompetition *diagonismos;
    diagonismos = new ImmunityCompetition(competitionId, "AsiliasDia", *vraveio);

    diagonismos->compete(teams[xamenos]);
    //cout<<"ImmunityCompetition status():\n";
    //diagonismos->status();

    cout<<"Night\n";
    teams[0].teamEats();
    teams[1].teamEats();
    teams[0].teamSocializes();
    teams[1].teamSocializes();
    teams[0].teamSleeps();
    teams[1].teamSleeps();

    delete vraveio;
    delete diagonismos;
    competitionId++;

}

void creativityCompetitionDay()
{

    cout << endl << "This is a Creativity Competition day in the Master Chef Game." << endl << endl;

    cout<<"Morning\n";
    teams[0].teamWorks();
    teams[1].teamWorks();
    teams[0].teamEats();
    teams[1].teamEats();

    cout<<"Noun\n";
    ExcursionAward *vraveio;
    vraveio = new ExcursionAward("EkdromiVrav", false);

    CreativityCompetition *diagonismos;
    diagonismos = new CreativityCompetition(competitionId, "EkdromiDia", *vraveio);

    diagonismos->compete(teams[0], teams[1]);
//    cout<<"CreativityCompetition status():\n";
//    diagonismos->status();


    cout<<"Night\n";
    teams[0].teamEats();
    teams[1].teamEats();
    teams[0].teamSocializes();
    teams[1].teamSocializes();
    teams[0].teamSleeps();
    teams[1].teamSleeps();

    delete vraveio;
    delete diagonismos;
    competitionId++;

}
