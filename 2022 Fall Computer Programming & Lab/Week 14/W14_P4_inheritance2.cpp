#include <iostream>

using namespace std;

class Base
{
    protected:
        int value;
    public:
        Base(int nValue) : value(nValue){}
        const char *Getname()
        {
            return "Base";
        }
        int GetValue()
        {
            return value;
        }
};

class Derived : public Base
{
    public:
        Derived(int nValue) : Base(3 * nValue){}
        const char *Getname()
        {
            return "Derived";
        }
        int GetValue()
        {
            return value * 2;
        }
};

int main()
{
    Derived cDerived(5);
    Base aBase = cDerived;
    Base &rBase = cDerived;
    Derived *pBase = &cDerived;

    cout << "cDerived is a " << cDerived.Getname() << " and has value " << cDerived.GetValue() << endl;
    cout << "aBase is a " << aBase.Getname() << " and has value " << aBase.GetValue() << endl;
    cout << "rBase is a " << rBase.Getname() << " and has value " << rBase.GetValue() << endl;
    cout << "pBase is a " << pBase->Getname() << " and has value " << pBase->GetValue() << endl;

    return 0;
}