#include <iostream>
#include "Human.h"
using namespace std;
int main()
{
    cout << "How old are you?" << endl;
    int ins;
    int n;
    int age;
    cin >> age;
    Human myMan(age);
    cout << "input an instruction(1 = sleep, 2 = eat, 3 = work)" << endl;
    while (cin >> ins)
    {
        switch (ins)
        {
        case 1:
            cout << "sleeping for ? hours (input a number)";
            cin >> n;
            myMan.sleep(n);
            break;
        case 2:
            cout << "eating for ? hours (input a number)";
            cin >> n;
            myMan.eat(n);
            break;
        case 3:
            cout << "working for ? hours (input a number)";
            cin >> n;
            myMan.work(n);
            break;
        }
        myMan.print_state();
        cout << "input an instruction(1 = sleep, 2 = eat, 3 = work)" << endl;
    }
}