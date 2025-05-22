#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(void)
{
    int shift, len, i, temp = 0;
    char str[100];


    cin >> shift;
    cin >> len;
    cin >> setw(len + 1) >> str;

    for(i = 0 ; i < len ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + shift;

            if(str[i] > 'Z')
                str[i] = str[i] - 26;
        }

        if(str[i] >= 'a' && str[i] <= 'z')
        {
            temp = ((int)str[i] + shift - 97) % 26 + 97;
            str[i] = temp;
            /*if((char)temp > 'z')
            {
                if(temp >= 128)
                {
                    str[i] = temp - 128 + 97;
                }
                else
                    str[i] = temp - 26;
            }
            else
                str[i] = temp;*/

        }
    }

    printf("%s\n", str);

    return 0;
}
