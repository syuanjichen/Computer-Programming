#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(void)
{
    int n1, n2, n3, P, paths_count = 0, largest_weight = 0, i, j, k;
    int *N1, *N2, *N3;

    cin >> n1 >> n2 >> n3 >> P;

    N1 = new int [n1];
    N2 = new int [n2];
    N3 = new int [n3];

    for(i = 0 ; i < n1 ; i++)
    {
        cin >> N1[i];
    }

    for(i = 0 ; i < n2 ; i++)
    {
        cin >> N2[i];
    }

    for(i = 0 ; i < n3 ; i++)
    {
        cin >> N3[i];
    }

    for(i = 0 ; i < n1 ; i++)
    {
        for(j = 0 ; j < n2 ; j++)
        {
            for(k = 0 ; k < n3 ; k++)
            {
                if(((N1[i] % P) + (N2[j] % P) + (N3[k] % P)) % P == 0)
                {
                    paths_count++;

                    if(N1[i] + N2[j] + N3[k] > largest_weight)
                    {
                        largest_weight = N1[i] + N2[j] + N3[k];
                    }
                }
            }
        }
    }

    cout << paths_count << endl;
    cout << largest_weight << endl;

    delete [] N1;
    delete [] N2;
    delete [] N3;

    return 0;

}
