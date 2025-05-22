// 2022 Fall Computer Programming & Lab
// Week 4 - Arrays
// Character Arrays = Strings

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int address_code;

    char str0[] = {'Y','o','u'};
    char str1[4] = {'Y','o','u'};
    char str2[4] = {'Y','o','u','\0'};
    char str3[] = "You";
    char str4[3] = {'Y','o','u'};

    printf("str0 = %s, size of str0 = %d bytes.\n",str0,sizeof(str0));
    printf("str1 = %s, size of str1 = %d bytes.\n",str1,sizeof(str1));
    printf("str2 = %s, size of str2 = %d bytes.\n",str2,sizeof(str2));
    printf("str3 = %s, size of str3 = %d bytes.\n",str3,sizeof(str3));
    printf("str4 = %s, size of str4 = %d bytes.\n\n",str4,sizeof(str4));

    for(address_code = 0 ; address_code < 4 ; address_code ++)
        printf("The address of str3[%d] is %x.\n", address_code, &str3[address_code]);

    printf("\n");

    for(address_code = 0 ; address_code < 3 ; address_code ++)
        printf("The address of str4[%d] is %x.\n", address_code, &str4[address_code]);

    // If printf doesn't read '\0', then it will
    // continue printing until it finds one.

    return 0;
}