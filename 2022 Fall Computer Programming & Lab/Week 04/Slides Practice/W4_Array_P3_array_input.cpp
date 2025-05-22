// 2022 Fall Computer Programming & Lab
// Week 4 - Arrays
// Input using setw and cin.getline

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(void)
{
    int address_code;
    char str[15];

    cout << "Input a string with less than 10 characters : ";
    //cin >> str;
    //cin.getline(str,sizeof(str));
    //cin >> setw(sizeof(str)) >> str;
    cout << str << endl;

    for(address_code = 0 ; address_code < 30 ; address_code ++)
        printf("str[%d] = '%c', ASCII = %d, address = %d.\n", address_code, str[address_code], str[address_code], &str[address_code]);

    return 0;
}