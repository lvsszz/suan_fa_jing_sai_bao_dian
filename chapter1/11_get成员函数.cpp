#include <iostream>

using namespace std;

// get函数从指定的数据流中输入一个字符,并返回这个字符作为函数调用的值

int main()
{
    char c;
    c = cin.get();
    cout << "c:" << c << endl;
    cout << "ASCII:" << (int)c << endl;
    system("pause");
    return 0;

}
