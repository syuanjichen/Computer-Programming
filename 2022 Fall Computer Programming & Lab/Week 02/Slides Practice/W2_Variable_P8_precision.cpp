// Computer Programming Week 2 Example 8
// The setprecision function

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    cout << setprecision(15) << 2.718 << endl;
    cout << fixed << setprecision(15) << 2.718 << endl;
    cout << fixed << setprecision(15) << 2.718f << endl;
    cout << fixed << setprecision(15) << 2.718l << endl;

    return 0;
}