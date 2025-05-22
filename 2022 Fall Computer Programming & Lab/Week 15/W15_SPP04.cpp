#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cin >> s;

    
    int i, j, k;
    i = s.find('(');
    j = s.find(')');
    k = s.find("-");
    
    if(s[0] == '(')
    {
        s.erase(i, 1);
        s.erase(j - 1, 1);
        s.erase(k - 2, 1);
    }
    else if(s[0] == '0' && s[1] == '9')
    {
        s.insert(4, "-");
        s.insert(8, "-");
    }
    

    cout << s << endl;

    return 0;
}