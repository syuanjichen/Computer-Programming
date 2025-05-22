//PREPEND BEGIN
#include <iostream>
using namespace std;

class objcount
{
    private:
        static int n;
        static const char *p;
    
    public:
        objcount()
        {
            n++;
        }

        ~objcount()
        {
            n--;
        }

        static int get_count()
        {
            return n;
        }

        static const char* get_name()
        {
            return p;
        }
};
//PREPEND END
//TEMPLATE BEGIN
  //TODO
//TEMPLATE END
//APPEND BEGIN
int objcount::n = 0;
const char* objcount::p = "Object Counter";

int main ()
{
	cout << objcount::get_name() << endl;
	cout << objcount::get_count() << endl;

	objcount a;         
	cout << a.get_count() << endl;         

	objcount b[5];         
	cout << objcount::get_count() << endl;         

	objcount * c = new objcount;         
	cout << c->get_count() << endl;         

	delete c;         
	cout << objcount::get_count() << endl;         

	return 0;
}
//APPEND END