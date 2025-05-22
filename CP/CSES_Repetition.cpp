#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string sequence;

    cin >> sequence;

    int max_repetition = 1, curr_len = 1;

    for(int i = 0 ; i < sequence.size() - 1 ; i++)
    {
        if(i > 0 && sequence[i] != sequence[i - 1])
            curr_len = 1;

        if(sequence[i] == sequence[i + 1])
            curr_len++;
        
        if(curr_len > max_repetition)
            max_repetition = curr_len;
    }

    cout << max_repetition << "\n";

    return 0;
}