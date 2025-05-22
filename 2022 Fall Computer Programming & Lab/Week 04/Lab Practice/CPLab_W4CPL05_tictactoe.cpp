// 2022 Fall Computer Programming & Lab
// Week 4 - Computer Programming Homework
// Problem 5 - Print a tic-tac-toe scenario

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void)
{
    int expo, scenario, a[9] = {0}, row, column;

    cin >> scenario;

    for(expo = 9 ; expo >= 1; expo--)
    {
        a[expo - 1] = scenario / (int)pow(4,expo - 1);
        scenario = scenario % (int)pow(4,expo - 1); 
    }

    for(expo = 0 ; expo < 9 ; expo++)
    {
        if(a[expo] == 0)
            cout << "*";
        if(a[expo] == 1)
            cout << "X";
        if(a[expo] == 2)
            cout << "O";

        if((expo + 1) % 3 == 0)
            cout << endl;
    }

    return 0;
}