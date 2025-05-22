#include <iostream>

using namespace std;

int main(void)
{
    enum color {red = 1, green, blue = 4};

    color a = red;
    if(a == red)
        a = blue;

    cout << "a = " << a << endl;
    cout << "red | green = " << (red|green) << endl;
    return 0;
}