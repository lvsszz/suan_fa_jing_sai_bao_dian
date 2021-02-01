#include <iostream>
#include <iomanip>

using namespace std;

//直接使用cout的相关函数precision,width,fill,put

int main()
{
    double a = 234.123456;
    cout << a << endl;
    
    cout.precision(7);
    cout << a << endl;

    cout.width(8);
    cout << a << endl;

    cout.fill('*');
    cout.width(10);
    cout.precision(5);
    cout<< a << endl;

    system("pause");

    return 0;

}