// Computer Programming Week 2 Example 6
// The reference of a number

#include <iostream>
using namespace std;

int main(void)
{
    int count = 1;
    int & cref = count;

    cref = 15;

    cout << "count = " << count << endl;

    return 0;
}