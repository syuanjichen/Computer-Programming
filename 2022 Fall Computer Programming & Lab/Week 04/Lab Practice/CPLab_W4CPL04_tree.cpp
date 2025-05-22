// 2022 Fall Computer Programming & Lab
// Week 4 - Computer Programming Homework
// Problem 4 - Print a tree with numbers and stars

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int height, row, column;

    cin >> height;

    for(row = 1 ; row <= height ; row++)
    {
        for(column = 1 ; column <= 2 * height - 1 ; column++)
        {
            if((column < (height - row + 1)) || (column > (height + row - 1)))
                cout << " ";
            else
            {
                if(height % 2 == 0)
                {
                    if(column % 2 == 0)
                        cout << row % 10;
                    else
                        cout << "*";
                }
                else
                {
                    if(column % 2 == 0)
                        cout << "*";
                    else
                        cout << row % 10;
                }
                
            }
        }

        cout << endl;
    }

    for(row = height + 1 ; row <= height + 4 ; row++)
    {
        for(column = 1 ; column <= 2 * height -1 ; column++)
        {
            if((column < height - 2) || (column > height + 2))
                cout << " ";
            else
                cout << "@";
        }
        
        cout << endl;
    }

    return 0;
}