#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{
    fstream file("example.bin", ios::out|ios::binary);

    if(!file.is_open())
    {
        cout << "Unable to open file";
        exit(1);
    }

    int num = 100;
    file.write(reinterpret_cast<char *>(&num), sizeof(num));
    file.close();

    file.open("example.bin", ios::in|ios::binary);

    if(!file.is_open())
    {
        cout << "Unable to open file";
        exit(1);
    }

    int data;
    file.read(reinterpret_cast<char *>(&data), sizeof(data));
    file.close();

    cout << "Data is " << data << endl;

    return 0;
}