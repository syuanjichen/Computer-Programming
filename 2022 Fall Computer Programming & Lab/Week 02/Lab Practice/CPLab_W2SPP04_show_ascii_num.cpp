// 2022 Fall Computer Programming
// Online Judge Session Practice Problems Q5
// Find the ASCII of a character and show that in different number systems

#include <iostream>
using namespace std;

int main(void)
{
    char sample;
    int sample_ascii;

    cin >> sample;
    sample_ascii = sample;

    cout << "CHAR " << "\'" << sample << "\'" << endl;
    cout << "hex = " << "\'\\x" << hex << sample_ascii << "\'" << endl;
    cout << "oct = " << "\'\\" << oct << sample_ascii << "\'" << endl;

    return 0;
}