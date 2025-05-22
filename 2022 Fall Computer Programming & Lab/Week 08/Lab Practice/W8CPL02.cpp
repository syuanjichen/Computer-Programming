#include <iostream>

using namespace std;

void hanoi(int N, int i, int j, int k);

int main(void)
{
    int N;

    cin >> N;

    hanoi(N, 1, 2, 3);

    return 0;
}

void hanoi(int N, int i, int j, int k)
{
    //hanoi(2, 1, 2, 3) = hanoi(1, 1, 2, 2) + hanoi(1, 1, 3, 3) + hanoi(1, 2, 3, 3)
    //hanoi(1, 1, 2, 3) = hanoi(1, 1, 2, 2) + hanoi(1, 2, 3, 3)
    // -> hanoi(1, 1, 2, 2) + hanoi(1, 1, 3, 3) + hanoi(1, 2, 3, 3)

    //hanoi(3, 1, 2, 3) = hanoi(2, 1, 3, 2) + hanoi(1, 1, 3, 3) + hanoi(2, 2, 1, 3)
    //hanoi(2, 1, 3, 2) = hanoi(1, 1, 3, 3) + hanoi(1, 1, 2, 2) + 

    if(N == 1)
        cout << i << " -> " << k << endl;
    else
    {
        hanoi(N - 1, i, k, j);
        hanoi(1, i, j, k);
        hanoi(N - 1, j, i, k);
    }
}