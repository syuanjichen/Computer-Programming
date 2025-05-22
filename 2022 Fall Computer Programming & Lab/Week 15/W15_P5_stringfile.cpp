#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    string s1;
    int i, j, k = 0;

    ifstream infile("in.txt");
    ofstream outfile("out.txt");

    while(getline(infile, s1))
    {
        j = 0;
        while((i = s1.find("NTU", j)) >= 0)
        {
            s1.erase(i, 3);
            s1.insert(i, "National Taiwan University");
            k++;
            j = i;
        }

        outfile << s1 << endl;

        cout << "length of s1 = " << s1.length() << endl;
    }

    cout << "length of s1 = " << s1.length() << endl;
    cout << "Number of replacements: " << k << endl;

    infile.close();
    outfile.close();

    return 0;
}