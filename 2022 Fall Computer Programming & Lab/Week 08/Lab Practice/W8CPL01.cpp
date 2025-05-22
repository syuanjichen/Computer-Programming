#include <iostream>

using namespace std;

int num_of_ducks(int villages, int ducks_left);

int main(void)
{
    int villages, ducks_left, total_ducks;

    cin >> villages >> ducks_left;

    total_ducks = num_of_ducks(villages, ducks_left);

    cout << total_ducks << endl;

    return 0;
}

int num_of_ducks(int villages, int ducks_left)
{
    if(villages == 0)
        return ducks_left;
    else
        return (1 + num_of_ducks(villages - 1, ducks_left)) * 2;
}