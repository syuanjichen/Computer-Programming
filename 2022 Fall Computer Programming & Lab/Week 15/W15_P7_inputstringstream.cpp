#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    string s1("Input test 123 5.7 A"), s2, s3;
    int i;
    int x;
    char c;

    istringstream sin(s1);

    sin >> s2 >> s3 >> i >> x >> c;
    cout << "The following items are extracted:";
    cout << "\nstring: " << s2 << ", " << s3;
    cout << "\ninteger: " << i;
    cout << "\ndouble: " << x;
    cout << "\ncharacter: " << (int)c << endl;

    return 0;
}