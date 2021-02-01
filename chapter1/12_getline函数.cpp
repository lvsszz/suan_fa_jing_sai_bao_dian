#include <iostream>

// getline(字符串首地址,最大长度)用于将用户输入的字符串存放在"字符串首地址"指定的内存中
//最大长度不超过"最大长度指定的值",可以读入一行带空格的字符串,gets()能得到同样的效果

using namespace std;

int main()
{
    char a[80];
    cin.getline(a, 80);
    cout << a << endl;
    system("pause");
    return 0;
}


