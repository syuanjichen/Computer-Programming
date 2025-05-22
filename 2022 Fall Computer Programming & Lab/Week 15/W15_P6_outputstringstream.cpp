#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
    string s1("The first number is "), s2("The second number is ");
    int n1 = 39, n2 = 18;

    ostringstream sout;

    sout << s1 << n1 << ". " << s2 << hex << n2 << ".";

    cout << "Output string: " << sout.str() << endl;
    sout << " (The second number is in hex!)";
    cout << "Output string: " << sout.str() << endl;

    cout << sout.str().length() << endl;
    
    return 0;
}