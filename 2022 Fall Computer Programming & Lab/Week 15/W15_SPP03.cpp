//PREPEND BEGIN
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int ans = 0;
//PREPEND END
//TEMPLATE BEGIN
    while (a != -1)
    {
        ans += a;
        cin >> a;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
    }
//TEMPLATE END
//APPEND BEGIN
    cout << ans << endl;
}
//APPEND END