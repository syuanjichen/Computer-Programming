#include <iostream>
#include <iomanip>
#include <string>

// uncomment line below if you use dev-c++
//#include <stdint.h>

using namespace std;

// range of uint64_t is 0 ~ 18,446,744,073,709,551,615
// define 10^19-1 as the max value in single element
// which means we can have 19 '9's
// the U added at the end means this is an unsigned number
const uint64_t CARRY = 10000000000000000000ULL;
const uint64_t CARRY_LENGTH = 19U;

class HugeInteger
{
public:
    HugeInteger();                     // default constructor
    HugeInteger(const string& s);      // constructor with value
    HugeInteger(const HugeInteger& n); // copy constructor
    ~HugeInteger();                    // destructor

    bool operator < (HugeInteger& n)
    {
        if(this->isEqual(n) == false && this->isGreater(n) == false)
            return true;
        else
            return false;
        /*this->resize();
        n.resize();

        bool smaller = false;

        if(this->_sign == false && n._sign == true)
            smaller = false;
        
        if(this->_sign == true && n._sign == false)
            smaller = true;

        if(this->_sign == false && n._sign == false)
        {
            int i;
            for(i = 0 ; i < _length ; i++)
            {
                if(this->_data[i] > n._data[i])
                {
                    smaller = false;
                    break;
                }
                
                if(this->_data[i] == n._data[i])
                    continue;

                if(this->_data[i] < n._data[i])
                {
                    smaller = true;
                    break;
                }
            }
        }

        if(this->_sign == true && n._sign == false)
        {
            int i;
            for(i = 0 ; i < _length ; i++)
            {
                if(this->_data[i] > n._data[i])
                {
                    smaller = true;
                    break;
                }
                
                if(this->_data[i] == n._data[i])
                    continue;

                if(this->_data[i] < n._data[i])
                {
                    smaller = false;
                    break;
                }
            }
        }

        return smaller;*/
    }
    bool operator > (HugeInteger& n)
    {
        return this->isGreater(n);
        /*this->resize();
        n.resize();

        bool greater = false;

        if(this->_sign == false && n._sign == true)
            greater = true;
        
        if(this->_sign == true && n._sign == false)
            greater = false;

        if(this->_sign == false && n._sign == false)
        {
            int i;
            for(i = 0 ; i < _length ; i++)
            {
                if(this->_data[i] > n._data[i])
                {
                    greater = true;
                    break;
                }
                
                if(this->_data[i] == n._data[i])
                    continue;

                if(this->_data[i] < n._data[i])
                {
                    greater = false;
                    break;
                }
            }
        }

        if(this->_sign == true && n._sign == false)
        {
            int i;
            for(i = 0 ; i < _length ; i++)
            {
                if(this->_data[i] > n._data[i])
                {
                    greater = false;
                    break;
                }
                
                if(this->_data[i] == n._data[i])
                    continue;

                if(this->_data[i] < n._data[i])
                {
                    greater = true;
                    break;
                }
            }
        }
        return greater;*/
    }
    bool operator == (HugeInteger& n)
    {
        return this->isEqual(n);
        /*bool equal = false;

        if(operator<(n) == false && operator>(n) == false)
            equal = true;

        return equal;*/
    }
    bool operator != (HugeInteger& n)
    {
        bool not_equal = true;

        if(operator==(n) == true)
            not_equal = false;

        return not_equal;
    }
    bool operator <= (HugeInteger& n)
    {
        bool leq = false;

        if(operator<(n) || operator==(n))
            leq = true;

        return leq;
    }
    bool operator >= (HugeInteger& n)
    {
        bool geq = false;

        if(operator==(n) || operator>(n))
            geq = true;

        return geq;
    }

    HugeInteger& operator ++ ();    // prefix
    HugeInteger operator ++ (int);  // postfix

    void abs(){ _sign = false; } // abs

    // input and output
    friend istream& operator >> (istream& is, HugeInteger& n);
    friend ostream& operator << (ostream& os, const HugeInteger& n);

private:
    bool           _sign; // false for positive ; true for negative
    int64_t      _length; // length of data array
    uint64_t*      _data; // integer array holding the huge integer
    static int64_t _maxl; // max length of data array in exist HugeInteger(s)

    // helper function
    bool isGreater(HugeInteger& n);
    bool isEqual(HugeInteger& n);

    // increase the length of data array to max length
    void resize();
};

// TODO 9
int64_t HugeInteger::_maxl = 1;

HugeInteger::HugeInteger(const HugeInteger& n)
{
    this->_length = n._length;
    this->_maxl = n._maxl;
    this->_sign = n._sign;

    this->_data = new uint64_t [this->_length];

    int i;

    for(i = 0 ; i < _length ; i++)
    {
        this->_data[i] = n._data[i];
    }
}

istream& operator >> (istream& is, HugeInteger& n)
{
    string input;

    is >> input;

    while( input.length() > n._maxl * CARRY_LENGTH )
        n._maxl <<= 1;
    n._length = n._maxl;
    delete [] n._data;
    
    n._data = new uint64_t [n._length];
    n._sign = false;
    int i;
    for(i = 0 ; i < n._length ; i++)
        n._data[i] = 0;

    if(input[0] == '-')
        n._sign = true;

    uint64_t p = 1, array_count = n._length - 1;
    for(i = input.length() - 1 ; i >= 0 && input[i] != '-' ; i--)
    {
        n._data[array_count] += p * (input[i] - '0');
        p *= 10;

        if((input.length() - i) % CARRY_LENGTH == 0)
        {
            array_count--;
            p = 1;
        }
    }

    return is;
}

ostream& operator << (ostream& os, const HugeInteger& n)
{
    int i, pos = -1;

    for(i = 0 ; i < n._length ; i++)
    {
        if(n._data[i] != 0)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        os << "0";
        //n._sign = false;
    }
    else
    {
        os << (n._sign == true ? "-" : "") << n._data[pos];

        for(i = pos + 1 ; i < n._length ; i++)
        {
            os << setw(19) << setfill('0') << n._data[i];
        }
    }
    
    return os;
}

HugeInteger& HugeInteger::operator ++ ()
{
    HugeInteger TEMP;

    TEMP._length = _length * 2;
    TEMP._sign = _sign;
    TEMP._maxl = _maxl;

    delete [] TEMP._data;

    TEMP._data = new uint64_t [TEMP._length];

    int i;
    bool borrow = false, all_zero = true;

    for(i = 0 ; i < _length ; i++)
    {
        if(_data[i] != 0)
            all_zero = false;
    }
    
    for(i = (TEMP._length) - 1 ; i >= 0 ; i--)
    {
        TEMP._data[i] = 0;
    }

    for(i = (TEMP._length) - 1 ; i >= TEMP._length - _length ; i--)
    {
        TEMP._data[i] = _data[i - _length];
    }

    if(_sign == true)
    {
        if(all_zero == true)
        {
            _sign = false;
        }
        else
        {
            if(TEMP._data[TEMP._length - 1] == 0)
            {
                TEMP._data[TEMP._length - 1] += (CARRY - 1);
                borrow = true;
            }
            else
                --(TEMP._data[TEMP._length - 1]);

        }
    }
    
    if(_sign == false)
    {
        ++(TEMP._data[TEMP._length - 1]);
    }

    
    for(i = (TEMP._length) - 1 ; i > 0 ; i--)
    {
        if(TEMP._data[i] >= CARRY && _sign == false)
        {
            TEMP._data[i] -= CARRY;
            TEMP._data[i - 1]++;
        }

        if(TEMP._data[i] == (CARRY - 1) && _sign == true && borrow == true)
        {
            if(TEMP._data[i - 1] == 0)
            {
                TEMP._data[i - 1] = (CARRY - 1);
                borrow = true;
            }
            else
            {
                TEMP._data[i - 1]--;
                borrow = false;
            }
        }
    }

    delete [] _data;

    _length *= 2;
    _data = new uint64_t [_length];

    for(i = 0 ; i < _length ; i++)
    {
        _data[i] = TEMP._data[i];
    }
    return *(this);
}

HugeInteger HugeInteger::operator ++ (int)
{
    HugeInteger result(*this);
    ++(*this);
    return result;
}

HugeInteger::HugeInteger()
{
    _length = _maxl;
    _data = new uint64_t[_length];
    for(int i = 0 ; i < _length; ++i)
        _data[i] = 0;
    _sign = false;
    return;
}

HugeInteger::HugeInteger(const string& s)
{
    while( s.length() > _maxl*CARRY_LENGTH )
        _maxl <<= 1;
    _length = _maxl;
    _data = new uint64_t[_length];
    for(int i = 0 ; i < _length; ++i)
        _data[i] = 0;
    if(s.length() == 0) return;
    _sign = (s[0] == '-');
    for(int i = (_sign ? 1 : 0); i < s.length(); ++i)
    {
        _data[(CARRY_LENGTH *_length + i -s.length())/CARRY_LENGTH] *= 10;
        _data[(CARRY_LENGTH *_length + i -s.length())/CARRY_LENGTH] += (uint64_t)((char)s[i]-'0');
    }
    return;
}

HugeInteger::~HugeInteger()
{
    delete [] _data;
    return;
}

bool HugeInteger::isGreater(HugeInteger& n)
{
    this->resize(); n.resize();
    if(_sign != n._sign)
    {
        for(int i = 0 ; i < this->_length ; ++i)
            if(_data[i] || n._data[i]) return !_sign;
    }
    else
    {
        for(int i = 0 ; i < this->_length ; ++i)
        {
            if( _data[i] > n._data[i]) return !_sign;
            if( _data[i] < n._data[i]) return  _sign;
        }
    }
    return false;
}

bool HugeInteger::isEqual(HugeInteger& n){
    this->resize(); n.resize();
    if(_sign != n._sign)
    {
        for(int i = 0 ; i < this->_length ; ++i)
            if(_data[i] || n._data[i]) return false;
    }
    else
    {
        for(int i = 0 ; i < this->_length ; ++i)
            if( _data[i] != n._data[i]) return false;
    }
    return true;
}

void HugeInteger::resize()
{
    if(_maxl == _length) return;
    uint64_t* temp = _data;
    _data = new uint64_t[_maxl];
    for(int i = 0 ; i < _maxl-_length; ++i)
        _data[i] = 0;
    for(int i = _maxl-_length ; i < _maxl; ++i)
        _data[i] = temp[i+_length-_maxl];
    delete [] temp;
    _length = _maxl;
    return;
}

int main()
{
    HugeInteger n1, n2;

    cin >> n1 >> n2;

    HugeInteger n3(n1);
    HugeInteger n4(n3);

    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    cout << "n3: " << n3 << endl;
    cout << "n4: " << n4 << endl;

    cout << "-------------------------------" << endl;

    cout << (n3 == n1?"n3 == n1":"n3 != n1") << endl;
    cout << (n4 == n3?"n4 == n3":"n4 != n3") << endl;
    n4.abs();
    cout << (n4 == n3?"|n4| == n3":"|n4| != n3") << endl;

    cout << "-------------------------------" << endl;

    cout << (n1 == n2 ? "n1 == n2" : "") << endl;
    cout << (n1 != n2 ? "n1 != n2" : "") << endl;
    cout << (n1 >  n2 ? "n1 > n2"  : "") << endl;
    cout << (n1 <  n2 ? "n1 < n2"  : "") << endl;
    cout << (n1 >= n2 ? "n1 >= n2" : "") << endl;
    cout << (n1 <= n2 ? "n1 <= n2" : "") << endl;

    cout << "-------------------------------" << endl;
    
    cout << n1 << endl;
    n1++;
    cout << n1 << endl;
    ++n1;
    cout << n1 << endl;

    cout << n2 << endl;
    n2++;
    cout << n2 << endl;
    ++n2;
    cout << n2 << endl;

    return 0;
}