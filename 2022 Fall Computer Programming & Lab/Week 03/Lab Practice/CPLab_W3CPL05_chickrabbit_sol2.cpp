// 2022 Fall Computer Programming
// Week 3 Homework Problems
// Problem 5 : Chicken and Rabbit in a cage

#include <iostream>
using namespace std;

int main(void)
{
    int animals, legs, chickens, rabbits;

    cin >> animals >> legs;

    for(chickens = 0 ; chickens <= animals ; chickens++)
    {
        rabbits = animals - chickens;
        if(2 * chickens + 4 * rabbits == legs)
        {
            cout << chickens << " " << rabbits;
            break;
        }
        else
            rabbits = -1;
    }

    if(rabbits == -1)
        cout << "There is no solution" << endl;

    return 0;
}