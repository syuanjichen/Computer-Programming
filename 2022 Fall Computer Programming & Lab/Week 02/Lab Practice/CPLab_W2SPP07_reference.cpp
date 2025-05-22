// 2022 Fall Computer Programming & Lab
// Online Judge Session Practice Problems Q7
// Declare a variable using different namespaces

//PREPEND BEGIN
#include <iostream>
using namespace std;

namespace first {int num = 5;}
namespace second {int num = 10;}
namespace second {double var = 3.2;}


int main() {
//PREPEND END

//TEMPLATE BEGIN
    int & num = first::num;
    const double con = (second::var) * (first::num);
// todo
// 請定義一個變數 num，並令 num = (namespace first 下的 num)
// 請定義一個常數 con，並令 con = (namespace second 下的 var 乘以 namespace first 下的 num)

//TEMPLATE END

//APPEND BEGIN
    first::num = 100;

    cout << num << "\n";
    cout << con << "\n";

    return 0;
}
//APPEND END
