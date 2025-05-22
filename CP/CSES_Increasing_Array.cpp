#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n; // Size of Vector
    vector <int> input;

    long long int steps = 0;

    cin >> n;

    for(int i = 0 ; i < n ; i++)
    {
        int buffer;
        cin >> buffer;
        input.push_back(buffer);
    }

    for(int i = 1 ; i < input.size() ; i++)
    {
        if(input[i] < input[i - 1])
        {
            steps += (input[i - 1] - input[i]);
            input[i] = input[i - 1];
        }
    }

    cout << steps << "\n";

    return 0;
}