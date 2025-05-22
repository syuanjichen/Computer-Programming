//PREPEND BEGIN
#include <iostream>
using  namespace std;
int main()
{
	char array[20];
	//PREPEND END
	//TEMPLATE BEGIN
    cin.ignore(10, 'm');
	//TEMPLATE END
	//APPEND BEGIN
	cin.getline(array, 20);
	cout << array << endl;
    return  0 ;
}
//APPEND END