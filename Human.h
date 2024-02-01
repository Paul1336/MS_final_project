#ifndef _HUMAN_H_
#define _HUMAN_H_
#include <iostream>

class Human
{
private:
    int age;
    int san;
    int food;
    void print_cause_of_death();

public:
    Human(int);
    ~Human();
    void print_state();
    void eat(int);
    void sleep(int);
    void work(int);
};

#endif