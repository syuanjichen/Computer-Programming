#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    ofstream outfile("in.txt");
    if(!outfile)
    {
        cerr << "File could not be open" << endl;
        exit(1);
    }
    outfile << "This is a test file" << endl;
    outfile << "Testing for the NTU C++ class" << endl;
    outfile << "Replace all NTU words by the full NTU name" << endl;
    outfile << "Output file does not have any NTU word" << endl;

    outfile.close();

    return 0;

}