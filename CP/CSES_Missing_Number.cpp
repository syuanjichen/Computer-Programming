#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int card;

    cin >> card;
    vector<bool> isinput(card + 1, false);
    for(int i = 1 ; i < card ; i++)
    {
        int temp;
        cin >> temp;
        isinput[temp] = true;
    }

    for(int i = 1 ; i < isinput.size() ;i++)
    {
        if(isinput[i] == false)
            cout << i << endl;
    }

    return 0;
}