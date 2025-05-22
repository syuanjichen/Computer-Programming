//PREPEND BEGIN
#include <iostream>

using namespace std;

enum color_code{Black, Brown, Red, Orange, Yellow,
                Green, Blue, Purple, Gray, White,
                Gold, Silver, None};
//PREPEND END

//TEMPLATE BEGIN
class Resistor
{
    private:
        bool valid;
        color_code code[4];
    public:
        bool setValue(color_code a, color_code b, color_code c, color_code d)
        {
            if(a < 1 || a > 9)
                valid = false;
            else if(b < 0 || b > 9)
                valid = false;
            else if(c < 0 || c > 11)
                valid = false;
            else if(d == 0 || d == 3 || d == 4 || d == 9)
                valid = false;
            else
                valid = true;
                
            code[0] = a;
            code[1] = b;
            code[2] = c;
            code[3] = d;
            
            return valid;
        }
        void display_color()
        {
            int i;
            if(valid)
            {
                for(i = 0 ; i < 4 ; i++)
                {
                    switch(code[i])
                    {
                        case Black:
                            cout << "Black";
                            break;
                        case Brown:
                            cout << "Brown";
                            break;
                        case Red:
                            cout << "Red";
                            break;
                        case Orange:
                            cout << "Orange";
                            break;
                        case Yellow:
                            cout << "Yellow";
                            break;
                        case Green:
                            cout << "Green";
                            break;
                        case Blue:
                            cout << "Blue";
                            break;
                        case Purple:
                            cout << "Purple";
                            break;
                        case Gray:
                            cout << "Gray";
                            break;
                        case White:
                            cout << "White";
                            break;
                        case Gold:
                            cout << "Gold";
                            break;
                        case Silver:
                            cout << "Silver";
                            break;
                        case None:
                            cout << "None";
                            break;
                    }

                    if(i == 3)
                        cout << endl;
                    else
                        cout << " | ";
                }
            }
        }
        void display_value()
        {
            if(valid)
            {
                if(code[2] != Gold && code[2] != Silver)
                {
                    cout << code[0] << code[1];
                }
                else
                {
                    if(code[2] == Gold)
                        cout << code[0] << "." << code[1];
                    else
                        cout << "0." << code[0] << code[1];
                }

                switch(code[2])
                {
                    case Black:
                        cout << "";
                        break;
                    case Brown:
                        cout << "0";
                        break;
                    case Red:
                        cout << "00";
                        break;
                    case Orange:
                        cout << "000";
                        break;
                    case Yellow:
                        cout << "0000";
                        break;
                    case Green:
                        cout << "00000";
                        break;
                    case Blue:
                        cout << "000000";
                        break;
                    case Purple:
                        cout << "0000000";
                        break;
                    case Gray:
                        cout << "00000000";
                        break;
                    case White:
                        cout << "000000000";
                        break;
                    case Gold:
                        cout << "";
                        break;
                    case Silver:
                        cout << "";
                        break;
                }

                cout << " +/-";

                switch(code[3])
                {
                    case Brown:
                        cout << "1%";
                        break;
                    case Red:
                        cout << "2%";
                        break;
                    case Green:
                        cout << "0.5%";
                        break;
                    case Blue:
                        cout << "0.25%";
                        break;
                    case Purple:
                        cout << "0.1%";
                        break;
                    case Gray:
                        cout << "0.05%";
                        break;
                    case Gold:
                        cout << "5%";
                        break;
                    case Silver:
                        cout << "10%";
                        break;
                }
            }
        }     
};
//TEMPLATE END

//APPEND BEGIN
int main()
{
    Resistor R;
    int a, b, c, d;
    do{
        cin >> a >> b >> c >> d;
    }while(!(R.setValue(static_cast<color_code>(a),\
                        static_cast<color_code>(b),\
                        static_cast<color_code>(c),\
                        static_cast<color_code>(d))));

    R.display_color();
    R.display_value();

    return 0;
}
//APPEND END