//PREPEND BEGIN
#include <iostream>
#include <iomanip>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
class Polynomial
{
    public:
    // Add any member function if you need.
        Polynomial(){}
        Polynomial(int coefficient[], int n)
        {
            int i;

            times = n - 1;
            poly = new int [n];

            for(i = 0 ; i < n ; i++)
                poly[i] = coefficient[i];
        }
        void print()
        {
            int i, n;
            n = get_times();
            for(i = n ; i >= 0 ; i--)
            {
                if(poly[i] == 0)
                    continue;
                else
                    cout << (poly[i] > 0 ? "+" : "") << poly[i];

                if(i == 1)
                    cout << "x";
                else if(i > 1)
                    cout << "x^" << i;
            }

            cout << endl;
        }

        Polynomial add(Polynomial *poly2)
        {
            Polynomial answer;
            int i, n, add_times;
            n = (get_times() >= poly2->get_times()) ? get_times() : poly2->get_times();
            add_times = (get_times() <= poly2->get_times()) ? get_times() : poly2->get_times();

            answer.poly = new int [n + 1];
            answer.times = n;

            for(i = 0 ; i < n + 1 ; i++)
            {
                answer.poly[i] = (get_times() == n) ? poly[i] : poly2->poly[i];
            }

            for(i = 0 ; i < add_times + 1 ; i++)
            {
                answer.poly[i] += (get_times() == n) ? poly2->poly[i] : poly[i];
            }

            return answer;
        }

        Polynomial multiply(Polynomial *poly2)
        {
            Polynomial answer;
            int i, j, n;
            n = get_times() + poly2->get_times();

            answer.poly = new int [n + 1];
            answer.times = n;

            for(i = 0 ; i < n + 1 ; i++)
            {
                answer.poly[i] = 0;
            }

            for(i = 0 ; i < poly2->get_times() + 1 ; i++)
            {
                for(j = 0 ; j < get_times() + 1; j++)
                {
                    answer.poly[i + j] += (poly[j]) * (poly2->poly[i]); 
                }
            }

            return answer;
        }

        int get_times()
        {
            return times;
        }

    private:
        int *poly, times;
};
//TEMPLATE END

//APPEND BEGIN
void test() {
    int n, m;
    int cmds, cmd, pid, pid2;
    int v[4096];
    cin >> n;
    Polynomial *p = new Polynomial[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> m;
        for (int j = 0; j < m; j++)
            cin >> v[j];
        p[i] = Polynomial(v, m);
    }
    cin >> cmds;
    for (int i = 0; i < cmds; i++)
    {
        cin >> cmd >> pid;
        if (cmd == 1) 
        {
            p[pid].print();
        } 
        else if (cmd == 2) 
        {
            cin >> pid2;
            Polynomial ret = p[pid].add(&p[pid2]);
            ret.print();
        } 
        else if (cmd == 3) 
        {
            cin >> pid2;
            Polynomial ret = p[pid].multiply(&p[pid2]);
            ret.print();
        }
    }
}

int main(void) 
{
    test();
    return 0;
}
//APPEND END