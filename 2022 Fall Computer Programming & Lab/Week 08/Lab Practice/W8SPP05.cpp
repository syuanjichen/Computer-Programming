//PREPEND BEGIN
#include <iostream>
#include <string>
using namespace std;


int main(void)
{
    char c;

    cin >> c;

    string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
//PREPEND END

//TEMPLATE BEGIN
    enum Monkey {M, Tu, W, Th, F, Sa, Su};
    Monkey day;

    if(c == 'c')
        day = M;
    else if(c == 'h')
        day = Tu;
    else if(c == 'm')
        day = W;
    else if(c == 't')
        day = Th;
    else if(c == 'd')
        day = F;
    else if(c == 's')
        day = Sa;
    else
        day = Su;
    // todo

//TEMPLATE END

//APPEND BEGIN
    cout << week[day] << endl;

    return 0;
}
//APPEND END