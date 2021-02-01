#include <iostream>
#include <iomanip>

using namespace std;
//setprecision 控制浮点数的输出精度,参数代表浮点数的个数
//setprecision 作用域将一直持续到程序结束,或者遇到另一个setprecision

int main()
{
    double a = 234.1234567890;
    cout << a << endl;
    cout << setprecision(4) << a << endl;
    cout << setprecision(5) << a << endl;
    cout << setprecision(6) << a << endl;
    cout << setprecision(7) << a << endl;
    cout << setprecision(8) << a << endl;
    cout << setprecision(9) << a << endl;
    cout << setprecision(25) << a << endl;

    system("pause");
    return 0;

}

