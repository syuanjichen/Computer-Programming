// 2022 Fall Computer Programming & Lab
// Week 4 - Arrays
// Multidimensional Arrays

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int address_code_x, address_code_y, num[2][3] = {1,2,3,4,5,6};
    int num2[2][3] = {{7,8,9},
                       {10,11,12}};

    for(address_code_x = 0 ; address_code_x < 2 ; address_code_x ++)
        for(address_code_y = 0 ; address_code_y < 3 ; address_code_y ++)
            printf("num[%d][%d] = %d, address = %d\n", address_code_x, address_code_y, num[address_code_x][address_code_y], &num[address_code_x][address_code_y]);

    printf("\n");

    for(address_code_x = 0 ; address_code_x < 2 ; address_code_x ++)
        for(address_code_y = 0 ; address_code_y < 3 ; address_code_y ++)
            printf("num[%d][%d] = %d, address = %d\n", address_code_x, address_code_y, num2[address_code_x][address_code_y], &num2[address_code_x][address_code_y]);

    return 0;
}