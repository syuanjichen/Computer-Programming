#include <iostream>

using namespace std;

int main(void)
{
    int *f, *g, deg_f, deg_g, big_deg, small_deg, i, j, nonzero = 0;

    cin >> deg_f >> deg_g;

    if(deg_f >= deg_g)
    {
        big_deg = deg_f;
        small_deg = deg_g;
    }
    else
    {
        big_deg = deg_g;
        small_deg = deg_f;
    }

    f = new int[big_deg + 1] ();
    g = new int[big_deg + 1] ();

    for(i = 0 ; i <= deg_f ; i++)
    {
        cin >> f[i];
    }

    for(i = 0 ; i <= deg_g; i++)
    {
        cin >> g[i];
    }

    for(i = 0 ; i <= small_deg ; i++)
    {
        if(deg_f >= deg_g)
        {
            f[big_deg - small_deg + i] -= g[i];
        }
        else
        {
            g[big_deg - small_deg + i] -= f[i];
        }
    }

    for(i = 0 ; i <= big_deg ; i++)
    {
        if(deg_f >= deg_g)
        {
            if(f[i] != 0)
                nonzero = 1;
            if(nonzero == 1)
            {
                cout << f[i] << ",";
            }
        }
        else
        {
            if(g[i] != 0)
                nonzero = 1;
            if(nonzero == 1)
            {
                cout << -g[i] << ",";
            }
        }
    }

    cout << endl;
    return 0;
    
}