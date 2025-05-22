//PREPEND BEGIN
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
public:
    MyString() {}
    MyString(const char* s)
    {
        if (s == NULL) return;
        _str = new char[strlen(s) + 1];
        strcpy(_str, s);
    }
    MyString(const MyString& s)
    {
        if (s._str == NULL) return;
        _str = new char[strlen(s._str) + 1];
        strcpy(_str, s._str);
    }

    ~MyString()
    {
        if (_str != NULL) delete[] _str;
    }
//PREPEND END

//TEMPLATE BEGIN
    MyString operator=(const MyString& s)
    {
        if(this != &s)
        {
            if(_str != NULL)
                delete [] _str;

            _str = new char [strlen(s._str) + 1];
            strcpy(_str, s._str);
        }

        return *this;
    }
//TEMPLATE END

//APPEND BEGIN
    friend istream& operator>> (istream& is, MyString& s)
    {
        if (s._str != NULL) delete[] s._str;
        s._str = new char[100];
        return is >> s._str;
    }
    friend ostream& operator<< (ostream& os, const MyString& s)
    {
        return os << (s._str ? s._str : "");
    }

private:
    char *_str = NULL;
};

int main()
{
    MyString *a;
    a = new MyString;
    cin >> *a;

    cout << "*a = " << *a << endl;

    MyString b;
    b = (*a);
    delete a;

    cout << "b = " << b << endl;

    return 0;
}
//APPEND END