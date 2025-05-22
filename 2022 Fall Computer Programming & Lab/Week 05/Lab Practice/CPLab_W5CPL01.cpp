#include <iostream>

using namespace std;

int main(void)
{
    char str[10], *token;
	cin >> str;
    
    int i;
    for (i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            token = str + i;
            break;
        }
    }

    if(token == str)
        cout << str << "ay" << endl;
    else
    {
        for(i = (token - str) / sizeof(char) ; str[i] != '\0' ; i++)
            cout << str[i];
        for(i = 0 ; i < (token - str) / sizeof(char) ; i++)
            cout << str[i];
        cout << "ay" << endl;
    }

    return 0;
}