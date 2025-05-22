#include <iostream>
using namespace std;

double max_value(double);

int main(void)
{
    double num, max = -1;

    while(1)
    {
        cout << "Enter any positive number ; negative value to stop: ";
        cin >> num;
        cout << "Old max = " << max << "\tinput number = " << num;

        if(num <= 0)
            break;
        else
            max = max_value(num);
        
        cout << "\tnew max = " << max << endl;
    }

    return 0;
}

double max_value(double num)
{
    double max = -1;

    max = (num > max) ? num : max;

    return max;
}