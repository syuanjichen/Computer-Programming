// 2022 Fall Computer Programming & Lab
// Week 3 Homework Problems
// Problem 3 : Determine the number system of input

#include <iostream>
using namespace std;

int main(void)
{
    char c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    int input_num = 0;

    if(c1 != '0')
    {
        cout << "The input is decimal: " << c1 << c2 << c3 << c4 << endl;
        input_num = 1000 * (c1 - 48) + 100 * (c2 - 48) + 10 * (c3 - 48) + (c4 - 48);
    }
    else
    {
        if(c2 == 'x')
        {
            cout << "The input is hexadecimal: " << c1 << c2 << c3 << c4 << endl;
            if(c3 >= 48 && c3 <= 57)
                c3 = c3 - 48;
            else if(c3 >= 97 && c3 <= 102)
                c3 = c3 - 87;

            if(c4 >= 48 && c4 <= 57)
                c4 = c4 - 48;
            else if(c4 >= 97 && c4 <= 102)
                c4 = c4 - 87;

            input_num = (16 * c3) + c4;
        }

        if((c2 >= 48 && c2 <= 55) && (c3 >= 48 && c3 <= 55) && (c4 >= 48 && c4 <= 55))
        {
            cout << "The input is octal: " << c1 << c2 << c3 << c4 << endl;
            c2 = c2 - 48;
            c3 = c3 - 48;
            c4 = c4 - 48;
            input_num = (64 * c2) + (8 * c3) + c4;
        }
    }   

    cout << "decimal: " << input_num << endl;
    
    return 0;
}