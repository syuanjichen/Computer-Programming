#include <iostream>

using namespace std;

int main(void)
{
    char ch = 'W';
    char *addr1 = &ch;
    char **addr2 = &addr1;

    cout << "ch = " << ch << ", address = " << (int)&ch << endl;
    cout << "addr1 = " << (int)addr1 << ", *addr1 = " << *addr1 << ", address = " << &addr1 << endl;
    cout << "addr2 = " << addr2 << ", *addr2 = " << (int)*addr2 << ", **addr2 = " << **addr2 << ", address = " << &addr2 << endl;

    return 0;
}