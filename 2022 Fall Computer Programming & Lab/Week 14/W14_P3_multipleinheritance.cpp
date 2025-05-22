#include <iostream>

using namespace std;

class CPolygon
{
    protected:
        int width, height;

    public:
        void set_values(int a, int b)
        {
            width = a;
            height = b;
        }
};

class COutput
{
    public:
        void output(int i)
        {
            cout << i << endl;
        }
};

class CRectangle : public CPolygon, public COutput
{
    public:
        int area()
        {
            return width * height;
        }
};

int main(void)
{
    CRectangle rect;

    rect.set_values(4, 5);
    rect.output(rect.area());

    return 0;
}