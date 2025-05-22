#include <iostream>

using namespace std;

struct employee
{
    int y;
    int m;
    int d;
    int w;
};

int main(void)
{
    int n, i, temp_y, temp_m, temp_d, temp_w, j;
    employee *workers;

    cin >> n;

    workers = new employee [n];

    for(i = 0 ; i < n ; i++)
    {
        cin >> workers[i].y >> workers[i].m >> workers[i].d >> workers[i].w;
    }

    for(i = n - 1 ; i >= 0 ; i--)
    {
        for(j = 0 ; j < i ; j++)
        {
            if(workers[j].y > workers[j + 1].y)
            {
                temp_y = workers[j].y;
                workers[j].y = workers[j + 1].y;
                workers[j + 1].y = temp_y;

                temp_m = workers[j].m;
                workers[j].m = workers[j + 1].m;
                workers[j + 1].m = temp_m;

                temp_d = workers[j].d;
                workers[j].d = workers[j + 1].d;
                workers[j + 1].d = temp_d;

                temp_w = workers[j].w;
                workers[j].w = workers[j + 1].w;
                workers[j + 1].w = temp_w;
            }
            else if(workers[j].y == workers[j + 1].y)
            {
                if(workers[j].m > workers[j + 1].m)
                {
                    temp_m = workers[j].m;
                    workers[j].m = workers[j + 1].m;
                    workers[j + 1].m = temp_m;

                    temp_d = workers[j].d;
                    workers[j].d = workers[j + 1].d;
                    workers[j + 1].d = temp_d;

                    temp_w = workers[j].w;
                    workers[j].w = workers[j + 1].w;
                    workers[j + 1].w = temp_w;
                }
                else if(workers[j].m == workers[j + 1].m)
                {
                    if(workers[j].d > workers[j + 1].d)
                    {
                        temp_d = workers[j].d;
                        workers[j].d = workers[j + 1].d;
                        workers[j + 1].d = temp_d;

                        temp_w = workers[j].w;
                        workers[j].w = workers[j + 1].w;
                        workers[j + 1].w = temp_w;
                    }
                    else if(workers[j].d == workers[j + 1].d)
                    {
                        if(workers[j].w < workers[j + 1].w)
                        {
                            temp_w = workers[j].w;
                            workers[j].w = workers[j + 1].w;
                            workers[j + 1].w = temp_w;
                        }
                    }
                }
            }
        }
    }

    cout << "Birthday:\tSalary\n";

    for(i = 0 ; i < n ; i++)
    {
        cout << workers[i].y << "/" << workers[i].m << "/" << workers[i].d << "\t" << workers[i].w << endl;
    }

    return 0;
}