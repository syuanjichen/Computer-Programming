#include <iostream>
using namespace std;

class price
{
	private:
		int x, y;
	public:
        price(int c, int d)
        {
            x = c;
            y = d;
        }

        void set(int c, int d)
        {
            x = c;
            y = d;
        }
        
        int earn(int a, int b)
        {
            int revenue;
            revenue = x * a + y * b;

            return revenue;
        }
};

int main()
{
	int a, b, c, d;
	cin >> c >> d;
	price *p = new price(c, d);	
	while(1)
    {
		cin >> a;
		if(a == -1) 
        {
			cin >> c;
			if(c == -1) 
                break;
			else
            {
				cin >> d;
				p->set(c ,d);
			}
		}
		else
        {
			cin >> b ;
			cout << p->earn(a,b) <<endl;
		}
	}
	delete p;

    return 0;
}