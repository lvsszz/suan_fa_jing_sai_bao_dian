//读入包括空格符的字符串
//cin.getline(字符指针，字符个数，结束符)结束放映默认是'\n'
#include <iostream>

using namespace std;

int main()
{
    char a[80];
    cin.getline(a,80);
    cout<<a;
    system("pause");
    return 0;

}