#include <iostream>
#include <cmath>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_bgi.h>
#include <SDL2/graphics.h>


using namespace std;

class elipso
{
    public:
        int x, y, a, b, c;
        void initialize(int x0, int y0, int a0, int b0)
        {
            x = x0;
            y = y0;
            a = a0;
            b = b0;
            c = sqrt(fabs(a * a - b * b));
            show();
        }

        void show()
        {
            ellipse(x, y, 0, 360, a, b);
            circle(x + c, y, 1);
            circle(x - c, y, 1);
        }

        double area()
        {
            return 3.14159 * a * b;
        }
};

int main(int argc, char* argv[])
{
    initwindow(800, 600);
    cleardevice();

    elipso e;
    e.initialize(100, 100, 50, 30);
    cout << "The area is " << e.area() << endl;

    elipso *p = &e;
    cout << "The center is at (" << p -> x << ", " << p -> y << ")" << endl;

    getch();
    closegraph();

    return 0; 
}