#include <iostream>

using namespace std;

void copy1(char *s1, const char *s2)
{
    int i;
    for(i = 0 ; s2[i] != '\0' ; i++)
    {
        s1[i] = s2[i];
    }
}

void copy2(char *s1, char *s2)
{
    for( ; (*s1 = *s2) != '\0' ; s1++, s2++);
}

int main(void)
{
    char string1[10], string3[10];
    const char *string2 = "Hello";
    char string4[] = "Good bye";

    copy1(string1, string2);
    copy2(string3, string4);

    cout << "string 1 = " << string1 << endl;
    cout << "string 3 = " << string3 << endl;

    return 0;
}