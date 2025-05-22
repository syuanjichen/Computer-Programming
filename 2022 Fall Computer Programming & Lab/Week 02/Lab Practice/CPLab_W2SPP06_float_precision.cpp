// 2022 Fall Computer Programming & Lab
// Online Judge Session Practice Problem Q6
/* Find the minimun precision value required
   by the setprecision() to represent the value
   of float numbers
*/ 

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(void)
{
    cout << scientific << setprecision(8) << 3.14159265 << " ";
    cout.unsetf(ios_base::scientific);
    cout << fixed << setprecision(8) << 3.14159265 << " ";
    cout.unsetf(ios_base::fixed);
    cout << setprecision(9) << 3.14159265f << endl;

    cout << "8 8 9" << endl;
    return 0;
}