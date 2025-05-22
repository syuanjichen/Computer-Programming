// 2022 Fall Computer Programming & Lab
// Online Judge Session Practice Problems Q2
// Show flaot number in different format

#include <iostream>
using namespace std;

int main(void)
{
    cout << scientific << 3.14159265 << endl;
    cout.unsetf(ios_base::scientific);
    cout << fixed << 3.14159265 << endl;
    cout.unsetf(ios_base::fixed);
    cout << 3.14159265f << endl;

    return 0;
}