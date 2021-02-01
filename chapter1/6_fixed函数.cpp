#include <iostream>
#include <iomanip>

using namespace std;

//setprecision 控制小数和整数加起来的位数,仅仅控制小数点后的位数,需加fixed函数

int main()
{
    float a = 111.223333;
    cout << setprecision(6) << fixed << a << endl;
    system("pause");
    return 0;
}

