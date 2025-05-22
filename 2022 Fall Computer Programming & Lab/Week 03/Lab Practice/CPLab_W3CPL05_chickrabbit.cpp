// 2022 Fall Computer Programming
// Week 3 Homework Problems
// Problem 5 : Chicken and Rabbit in a cage

#include <iostream>
using namespace std;

int main(void)
{
    int animals, legs, chickens, rabbits;
    cin >> animals >> legs;

    // chickens + rabbits = animals
    // 2*chickens + 4*rabbits = legs 

    chickens = (4 * animals - legs) / 2;
    rabbits = (legs - 2 * animals) / 2;

    if((chickens < 0 || rabbits < 0))
        cout << "There is no solution" << endl;
    else if((2 * chickens + 4 * rabbits != legs) || (chickens + rabbits != animals))
        cout << "There is no solution" << endl;
    else
        cout << chickens << " " << rabbits << endl;

    return 0;
}