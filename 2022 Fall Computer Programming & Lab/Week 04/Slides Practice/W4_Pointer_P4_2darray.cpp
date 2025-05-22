// 2022 Fall Computer Programming & Lab
// Week 4 - Pointers
// Use Pointers to control 2d arrays

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int birth[2][3] = {4, 1, 7, 9, 2, 1};
    int *birthPtr = NULL;

    birthPtr = *birth;

    int address_x, address_y, shift = 0;

    cout << "birthPtr = " << birthPtr << ", *birth = " << *birth << ", **birth = " << **birth << endl;
    cout << "birth = " << birth << endl;
    cout << "*birthPtr = " << *birthPtr << endl;
    //cout << "birthPtr + 5 = " << birthPtr + 5 << endl;
    //cout << "*(birthPtr + 5) = " << *(birthPtr + 5) << endl;
    //cout << "*(*birth + 5) = " << *(*birth + 5) << endl;
    cout << "(birth + 3) = " << (birth + 3) << endl;
    cout << "*(birth + 3) = " << *(birth + 3) << endl;
    cout << "**(birth + 3) = " << **(birth + 3) << endl;

    for(address_x = 0 ; address_x < 2 ; address_x ++)
    {
        for(address_y = 0 ; address_y < 3 ; address_y ++)
        {
            shift = 3 * address_x + address_y;
            printf("birth[%d][%d] = %d, ", address_x, address_y, birth[address_x][address_y]);
            printf("(birthPtr + %d) = %d, ", shift, birthPtr + shift);
            printf("*(birthPtr + %d) = %d, ", shift, *(birthPtr + shift));
            printf("*(*birth + %d) = %d.\n", shift, *(*birth + shift));
        }
    }

    printf("size of birth = %d, size of birthPtr = %d\n", sizeof(birth), sizeof(birthPtr));

    return 0;
}