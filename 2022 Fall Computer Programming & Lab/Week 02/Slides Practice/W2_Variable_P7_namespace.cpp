// Computer Programming Week 2 Example 7
// Using different namespace in C++

#include <iostream>
using namespace std;

namespace first
{
    int x = 1, y = 2, z = 3;
}

namespace second
{
    int x = 4, y = 5, z = 6;
}

int main(void)
{
    cout << "The x in the first namespace = " << first::x << endl;
    cout << "The x in the second namespace = " << second::x << endl;

    return 0;
}