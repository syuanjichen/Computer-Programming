#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
    cout << "Page 48: ";
    int i = 2, j, k;
    j = 3 * (i++) - 2;
    i += 3;
    k = 3 * (++i) - 2;
    cout << "k / j = " << k/j << endl;

    cout << "--------------------" << endl;

    cout << "Page 51: ";
    int c = 2, d = 3;
    cout << "c & d = " << (c & d) << endl;
    cout << "c | d = " << (c | d) << endl;
    cout << "c ^ d = " << (c ^ d) << endl;
    cout << "c >> d = " << (c << d) << endl;
    cout << "~c = " << (~c) << endl;
    cout << "c >> d = " << (~c >> d) << endl;

    cout << "-------------------" << endl;
    
    cout << "Page 56: ";
    long double z = 4.0 * sqrt(tanh(1.01));
    cout << fixed << setprecision(20) << "long double z = " ;
    cout << z << endl;

    cout << "--------------------" << endl;

    int start = 7;
    while(start >= 0 && start <= 10)
    {
        cout << "Loop Number " << start << " in the while loop." << endl;
        start -= 2;
    }
    
    return 0;
}