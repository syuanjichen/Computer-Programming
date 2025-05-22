#include <iostream>

using namespace std;

int main(void)
{
    char word[] = "again";

    cout << "Value of word is: " << word << endl;
    cout << "address of word is: " << static_cast<void *>(word) << endl;

    cout.put('A');
    cout.put('B').put('\n');
    cout.put(67);

    return 0;
}