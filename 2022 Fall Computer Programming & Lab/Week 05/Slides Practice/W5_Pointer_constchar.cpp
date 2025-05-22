#include <iostream>

using namespace std;

int main(void)
{
    int i;

    const char *str = "Diamond";
    const char *book[4] = {"LCAO", "VSEPR", "Hybrdization", "Schrodinger"};

    cout << "Address of str : " << &str << endl;
    cout << "Value of str: " << str << endl;

    for(i = 0 ; i < 4 ; i++)
    {
        cout << *(book[i]) << ", " << book[i] << endl;
        cout << "sizeof(book) = " << sizeof(book[i]) << endl;
    }

    cout << "sizeof(book) = " << sizeof(book) << endl;

    return 0;
}