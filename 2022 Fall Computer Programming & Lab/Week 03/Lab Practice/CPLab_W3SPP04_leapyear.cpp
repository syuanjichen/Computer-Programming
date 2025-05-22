// 2022 Computer Programming & Lab
// Week 3 Online Judge Session Practice Problems
// Problem 4 : Print the days in a month / determine leap year

#include <iostream>
using namespace std;

int main(void)
{
    int year, month;
    bool leap;
    cin >> year;
    cin >> month;

    if (year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                leap = true;
            else
                leap = false;
        }
        else
        leap = true;
    }
    else
        leap = false;

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30" << endl;
            break;
    }

    if (month == 2)
    {
        if(leap == true)
            cout << "29" << endl;
        else
            cout << "28" << endl;
    }

    return 0;
}