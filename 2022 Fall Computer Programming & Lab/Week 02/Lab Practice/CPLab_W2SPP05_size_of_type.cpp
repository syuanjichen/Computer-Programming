// 2022 Fall Computer Programming & Lab
// Online Judge Session Practice Problems Q5
// Print the size of each variable type

#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    long long int max_long = 9223372036854775807LL;
    long double pi = 3.1415926535897932384626433832795L;

    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    cout << "sizeof(long long) = " << sizeof(long long) << endl;
    cout << "sizeof(long double) = " << sizeof(long double) << endl;
    cout << "sizeof(uint8_t) = " << sizeof(uint8_t) << endl;
    cout << "sizeof(int64_t) = " << sizeof(int64_t) << endl;
    cout << "sizeof(9223372036854775807) = " << sizeof(max_long) << endl;
    cout << "sizeof(3.1415926535897932384626433832795) = " << sizeof(pi) << endl;
    cout << "max unsigned long long int = " << ULONG_LONG_MAX << endl;
    cout << "min signed short int = " << SHRT_MIN << endl;
    cout << "32760 + 10 = " << (short)(32760 + 10) << endl;

    return 0;
}