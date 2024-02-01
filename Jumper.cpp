#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    void set_height(int h)
    {
        height = h;
    }
    void jump()
    {
        cout << " O " << endl;
        cout << " +  " << endl;
        cout << " ^  " << endl;
        for (int i = 0; i < height / 30; ++i)
        {
            cout << "|" << endl
                 << " |" << endl
                 << "   |" << endl
                 << "    |" << endl;
        }
    }
    Human(int h = 0)
    {
        height = h;
    }
    ~Human()
    {
    }
};

int main()
{
    Human studentA;
    int height;
    cout << "How tall are you?" << endl;
    while (cin >> height)
    {
        studentA.set_height(height);
        studentA.jump();
        cout << "How tall are you?" << endl;
    }
}