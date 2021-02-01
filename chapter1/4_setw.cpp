#include <iostream>
#include <iomanip>
using namespace std;

//stew 指定每个数值占用的宽度,只对紧跟着它的数值有效
//当后面紧跟着的输出字段长度小于 n 的时候，在该字段前面用空格补齐，当输出字段长度大于 n 时，全部整体输出。
// 使用left或right可以控制字符串向左或向右靠齐

int main()
{
    double a = 234.34;
    cout << setw(10) << 1234567890 << endl;
    cout << setw(4) << a << endl;
    cout << setw(6) << a <<endl;
    cout << setw(8) << a << endl;
    cout << setw(10) << a << endl;
    system("pause");
    
    return 0;

}
