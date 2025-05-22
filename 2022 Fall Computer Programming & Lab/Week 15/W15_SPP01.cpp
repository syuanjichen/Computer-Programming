//PREPEND BEGIN
#include <iostream>
using namespace std;
int main()
{
	char next;
	int out = 0;
	do
    {
		cin.get(next);
		if(next - '0' >= 0 && '9' - next >= 0)
        {
            out = 1;
        }
        else
        {
            if(next - 'A' >= 0 && 'Z' - next >= 0)
                next += 32;
            else if(next - 'a' >= 0 && 'z' - next >= 0)
                next -= 32;

            cout.put(next);
        }
	} while (next != '\n');
	if(out == 1)
        cout << "wrong input";
}
//APPEND END