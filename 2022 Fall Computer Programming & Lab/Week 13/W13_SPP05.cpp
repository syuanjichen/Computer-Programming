//PREPEND BEGIN
#include <iostream>
#include <cstring>
using namespace std;

class MyString {
public:
    MyString() {}
    MyString(const char* s) {
        if (s == NULL) return;
        _str = new char[strlen(s) + 1];
        strcpy(_str, s);
    }
    MyString(const MyString& s) {
        if (s._str == NULL) return;
        _str = new char[strlen(s._str) + 1];
        strcpy(_str, s._str);
    }

    ~MyString() {
        if (_str != NULL) delete[] _str;
    }

    MyString substr(int b, int e) {
        MyString temp;
        temp._str = new char[e - b + 1];
        for(int i = b; i < e; ++i) {
            temp._str[i - b] = _str[i];
        }
        temp._str[e - b] = '\0';
        return temp;
    }
//PREPEND END

//TEMPLATE BEGIN
    char& operator()(const int i)
    {
        return _str[i];
    }
    
    MyString operator() (const int b, const int e)
    {
        MyString temp;
        temp._str = new char[e - b + 1];
        for(int i = b; i < e; ++i) {
            temp._str[i - b] = _str[i];
        }
        temp._str[e - b] = '\0';
        return temp;
    }
//TEMPLATE END

//APPEND BEGIN
    friend istream& operator>> (istream& is, MyString& s) {
        if (s._str != NULL) delete[] s._str;
        s._str = new char[100];
        return is >> s._str;
    }
    friend ostream& operator<< (ostream& os, const MyString& s) {
        return os << (s._str ? s._str : "");
    }

private:
    char *_str = NULL;
};

int main() {
    MyString a;

    cin >> a;
    cout << "a = " << a << endl;

    int b, e;
    cin >> b;
    cout << "a(" << b << ") = " << a(b) << endl;

    char c;
    cin >> c;
    a(b) = c;
    cout << "a = " << a << " (changed)" << endl;
    cout << "a(" << b << ") = " << a(b) << " (changed)" << endl;

    cin >> b >> e; 
    cout << "a(" << b << ", " << e << ") = " << a(b, e) << endl;

    return 0;
}
//APPEND END