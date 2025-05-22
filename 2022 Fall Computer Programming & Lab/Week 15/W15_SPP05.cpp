//PREPEND BEGIN
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    istringstream sin(s);
//PREPEND END

//TEMPLATE BEGIN
    string time, week, day, year;

    getline(sin, time, ',');
    getline(sin, week, ',');
    getline(sin, day, ',');
    sin >> year;
    // todo: 使用 istringstream 與 getline 處理字串 s

    week.erase(0, 1);
    day.erase(0, 1);

    ostringstream sout;
    sout << year << "/" << day << "(" << week << ")/" << time;
    // todo: 使用 ostringstream 輸出，這裡 sout 不需要換行
//TEMPLATE END

//APPEND BEGIN
    cout << sout.str() << endl;

    return 0;
}
//APPEND END