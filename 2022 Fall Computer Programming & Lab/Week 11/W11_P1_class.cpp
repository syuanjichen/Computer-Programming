#include <iostream>

using namespace std;

class rational
{
    public:
        int n, d;
        void set(int x, int y)
        {
            n = x;
            d = y;
        }

        void show()
        {
            cout << n << "/" << d << " = " << 1.0 * n / d << endl;
        }
};

int main(void)
{
    rational a;

    a.set(4, 5);
    a.show();

    rational *p = &a;
    p -> set(2, 3);
    p -> show();

    return 0;
}