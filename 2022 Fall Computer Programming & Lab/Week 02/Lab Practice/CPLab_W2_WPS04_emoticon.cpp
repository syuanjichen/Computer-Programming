// 2022 Fall Computer Programming & Lab
// Online Judge Week 2 Q5
// Print emoticon

#include <iostream>
using namespace std;

int main(void)
{
    char M,E,C;
    cin >> M >> E >> C;

    char eyes = E + 32;
    char left_cheek = C - 1;
    char right_cheek = C + 1;

    cout << left_cheek << eyes << M << eyes << right_cheek << endl;

    return 0; 
}