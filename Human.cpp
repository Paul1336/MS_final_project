#include "Human.h"
using namespace std;
void Human::print_cause_of_death()
{
    char cause = 'f';
    if (age < 20)
    {
        if (food < -10)
        {
            cout << "dies of hunger" << endl;
        }
        if (san < -20)
        {
            cout << "dies of madness" << endl;
        }
    }
    else if (age > 50)
    {
        if (food < -20)
        {
            cout << "dies of hunger" << endl;
        }
        if (san < -10)
        {
            cout << "dies of madness" << endl;
        }
    }
    else
    {
        if (food < -20)
        {
            cout << "dies of hunger" << endl;
        }
        if (san < -20)
        {
            cout << "dies of madness" << endl;
        }
    }
}
Human::Human(int myage)
{
    age = myage;
    food = 0;
    san = 10;
}
Human::~Human()
{
}
void Human::eat(int n)
{
    food += n;
}
void Human::sleep(int n)
{
    san += n;
}
void Human::work(int n)
{
    food -= n * 2;
    san -= n * 2;
}
void Human::print_state()
{
    cout << "age:" << age << " food:" << food << " san:" << san << endl;
    print_cause_of_death();
}
