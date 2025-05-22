#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{
    double income = 123.45, expense = 987.65;
    int week = 7, year = 2005;

    ofstream outfile("test.txt");
    if(!outfile)
    {
        cerr << "File could not be open" << endl;
        exit(1);
    }    

    outfile << "\n";

    outfile.close();

    return 0;
}