#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{
    double income = 123.45, expense = 987.65;
    int week = 7, year = 2005;

    ofstream outfile("prog.txt");
    if(!outfile)
    {
        cerr << "File could not be open" << endl;
        exit(1);
    }
    outfile << "Week=" << week << endl;
    outfile << "Year=" << year << endl;
    outfile << "Income=" << income << endl;
    outfile << "Expenses=" << expense << endl;

    outfile.close();

    return 0;
}