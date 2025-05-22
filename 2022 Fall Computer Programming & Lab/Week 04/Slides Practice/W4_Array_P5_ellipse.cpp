// 2022 Computer Programming & Lab
// Week 4 - Array
// Preview Program

#include <iostream>
#include <cmath>
#define HEIGHT 20
#define WIDTH 60
#define RADIUS 5
using namespace std;

int main(void)
{
    char point[HEIGHT][WIDTH];
    int i, j, point_number = 0;

    for(i = 0 ; i < HEIGHT ; i++)
    {
        for(j = 0 ; j < WIDTH ; j++)
        {           
            point[i][j] = ' ';
            double d = sqrt(pow((WIDTH / 2) - j, 2) + pow((HEIGHT/2) - i, 2));
            if(d - RADIUS < 0.3)
            {
                point[i][j] = '*';
                point_number++;
            }
        }
    }
    
    for(i = 0 ; i < HEIGHT ; i++)
    {
        for(j = 0 ; j < WIDTH ; j++)
        {
            cout << point[i][j];
        }

        cout << endl;
    }

    cout << "The number of points = " << point_number << endl;

    return 0;
}