#include <iostream>
using namespace std;

class Clerk
{
public:
    int apple_price = 10;
    int banana_price = 20;
    int watermelon_price = 30;
    int ask()
    {
        cout << "What do you want to buy: 1=apple / 2=banana / 3=watermelon" << endl;
        int res;
        cin >> res;
        if (res == 1)
        {
            return apple_price;
        }
        else if (res == 2)
        {
            return banana_price;
        }
        else
        {
            return watermelon_price;
        }
    }
};

class CardReader
{
public:
    bool ask()
    {
        cout << "Credit card? [Y/N]" << endl;
        char res;
        cin >> res;
        if (res == 'Y')
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

class Printer
{
public:
    void print(int price)
    {
        cout << "Your receipt" << endl;
        cout << "total amount: " << price << endl;
    }
};

int main()
{
    Clerk clerk;
    CardReader card_reader;
    Printer printer;
    int price = clerk.ask();
    if (card_reader.ask() == true)
        printer.print(price);
}